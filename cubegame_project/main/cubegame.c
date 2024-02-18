
#include "lvgl.h"
#include  <stdlib.h>


#define  cube_pre_x   400
#define  cube_pre_y   30
#define  cube_win_x   165
#define  cube_win_y   9
#define  cube_size    15
static lv_obj_t * botton_exit;
static lv_obj_t *  screen1;   
static lv_obj_t * cubewindow;
static lv_obj_t * botton_left;
static lv_obj_t * botton_right;
static lv_obj_t * botton_down;
static lv_obj_t * lable_left;
static lv_obj_t * lable_right;
static lv_obj_t * lable_down;
static lv_obj_t * botton_angle;
static lv_obj_t * lable_angle;
static lv_timer_t * t1;
static lv_obj_t * panel;
static lv_obj_t * panellable;
static lv_obj_t * btext;
static lv_obj_t * score_lable;
static lv_obj_t *	next_lable;
static lv_obj_t * gameover_botton;
static lv_obj_t *	gameover_lable;
static lv_obj_t * exit_lable;
static int score;



typedef struct
{
	lv_obj_t * cube;
	int alive;		
}cube_matrix_type;

typedef struct
{
	lv_obj_t * cube;
	int alive;	
  int x;
  int y;	
}cube_active_type;

static const int cube_lib[7][4][4]={
    {{0,0,0,0},
     {1,1,1,1},
     {0,0,0,0},
     {0,0,0,0}},
    
    {{0,0,0,0},
     {0,1,1,0},
     {0,1,1,0},
     {0,0,0,0}},
    
    {{0,0,0,0},
     {1,1,1,0},
     {0,1,0,0},
     {0,0,0,0}},
    
    {{0,0,0,0},
     {1,1,1,0},
     {0,0,1,0},
     {0,0,0,0}},
    
    {{0,0,0,0},
     {0,1,1,1},
     {0,1,0,0},
     {0,0,0,0}},
    
    {{0,0,0,0},
     {0,1,1,0},
     {0,0,1,1},
     {0,0,0,0}},
    
    {{0,0,0,0},
     {0,0,1,1},
     {0,1,1,0},
     {0,0,0,0}}
};


static const int cube_color_lib[7]={0xff0000,0xff8000,0xffff00,0x00ff00,0x0080ff,0x0000ff,0xff00ff,};
static cube_matrix_type  cube_matrix[20][10]={0,};
static cube_matrix_type  cube_pre[4][4]={0,};
static cube_active_type  cube_active[4][4]={0,};
static void timer_cb1(lv_timer_t * t);
static void cube_ready();
static void cube_send();
static void cube_move_left();
static void cube_move_right();
static void cube_move_down();
static void botton_angle_event_cb(lv_event_t * e);
static void botton_left_event_cb(lv_event_t * e);
static void botton_right_event_cb(lv_event_t * e);
static void botton_down_event_cb(lv_event_t * e);
static void botton_down_event_cb1(lv_event_t * e);
static bool down_hit_test();
static bool left_hit_test();
static bool right_hit_test();
static void cube_hold();
static bool cube_win_cover_test( cube_matrix_type  matrix[20][10], cube_active_type  temp[4][4]);
static bool cube_out_of_win(cube_active_type  temp[4][4]);
static int cube_clrline();
static void cube_rotation();
static void cube_move_1line_down(int line);
static void cube_move_all_down();
static void cube_all_init();
static void lv_anim_exec_xcb(void * var, int32_t v);
static void ready_cb( lv_anim_t * var);
void print_cubematrix();
static void all_clear(lv_event_t * e);


void cube_game_start()
{
	int i,j;	
	screen1=lv_tileview_create(lv_scr_act());
	lv_obj_set_style_bg_color(screen1,lv_color_hex(0x000000), LV_PART_MAIN);
	lv_obj_clear_flag(screen1, LV_OBJ_FLAG_SCROLLABLE);
		
	botton_exit=lv_btn_create(screen1);
	lv_obj_set_style_bg_color(botton_exit,lv_color_hex(0x000040), LV_PART_MAIN);
  exit_lable=lv_label_create(botton_exit);
	lv_label_set_text(exit_lable, "<EXIT");
	lv_obj_set_style_text_color(exit_lable,lv_color_hex(0xffffff), LV_PART_MAIN);
	lv_obj_add_event_cb(botton_exit,all_clear,LV_EVENT_RELEASED,0);
		
	score_lable=lv_label_create(screen1);
	lv_label_set_text_fmt(score_lable, "SCORE:%d",score);
	lv_obj_set_pos(score_lable,20,40);
	lv_obj_set_style_text_color(score_lable,lv_color_hex(0xffffff), LV_PART_MAIN);
	
	next_lable=lv_label_create(screen1);
	lv_label_set_text(next_lable, "NEXT");
	lv_obj_set_pos(next_lable,380,20);
	lv_obj_set_style_text_color(next_lable,lv_color_hex(0xffffff), LV_PART_MAIN);
	
	cubewindow=lv_obj_create(screen1);
	lv_obj_set_style_bg_color(cubewindow,lv_color_hex(0x000000), LV_PART_MAIN);
	lv_obj_set_size(cubewindow,cube_size*10+2,cube_size*20+2);
	lv_obj_set_pos(cubewindow,cube_win_x-1,cube_win_y);
	lv_obj_set_style_border_width(cubewindow, 0, LV_PART_MAIN);
	lv_obj_set_style_radius(cubewindow,0,LV_PART_MAIN);
	lv_obj_set_style_outline_color(cubewindow,lv_color_hex(0x005000),LV_PART_MAIN);
	lv_obj_set_style_outline_width(cubewindow,2,LV_PART_MAIN);
	lv_obj_clear_flag(cubewindow, LV_OBJ_FLAG_SCROLLABLE);
	
	botton_left=lv_btn_create(screen1);
	lv_obj_set_pos(botton_left,10,150);
	lv_obj_set_size(botton_left,50,50);
	lv_obj_set_style_bg_color(botton_left,lv_color_hex(0x000040), LV_PART_MAIN);
	lable_left=lv_label_create(botton_left);
	lv_label_set_text(lable_left, "<<-");
	lv_obj_set_align(lable_left,LV_ALIGN_CENTER);
	lv_obj_add_event_cb(botton_left,botton_left_event_cb,LV_EVENT_PRESSED,0);
  lv_obj_add_event_cb(botton_left,botton_left_event_cb,LV_EVENT_LONG_PRESSED_REPEAT,0);		
	
	botton_right=lv_btn_create(screen1);
	lv_obj_set_pos(botton_right,110,150);
	lv_obj_set_size(botton_right,50,50);
	lv_obj_set_style_bg_color(botton_right,lv_color_hex(0x000040), LV_PART_MAIN);
	lable_right=lv_label_create(botton_right);
	lv_label_set_text(lable_right, "->>");
	lv_obj_set_align(lable_right,LV_ALIGN_CENTER);
	lv_obj_add_event_cb(botton_right,botton_right_event_cb,LV_EVENT_PRESSED,0);
  lv_obj_add_event_cb(botton_right,botton_right_event_cb,LV_EVENT_LONG_PRESSED_REPEAT,0);		
	
	botton_down=lv_btn_create(screen1);
	lv_obj_set_pos(botton_down,60,200);
	lv_obj_set_size(botton_down,50,60);
	lv_obj_set_style_bg_color(botton_down,lv_color_hex(0x000040), LV_PART_MAIN);
	lable_down=lv_label_create(botton_down);
	lv_label_set_text(lable_down, "V");
	lv_obj_set_align(lable_down,LV_ALIGN_CENTER);
	lv_obj_add_event_cb(botton_down,botton_down_event_cb,LV_EVENT_PRESSED,0);	
	lv_obj_add_event_cb(botton_down,botton_down_event_cb1,LV_EVENT_RELEASED,0);	
	
	
	botton_angle=lv_btn_create(screen1);
	lv_obj_set_pos(botton_angle,360,150);
	lv_obj_set_size(botton_angle,60,60);
	lv_obj_set_style_bg_color(botton_angle,lv_color_hex(0x808000), LV_PART_MAIN);
	lable_angle=lv_label_create(botton_angle);
	lv_label_set_text(lable_angle, "O");
	lv_obj_set_align(lable_angle,LV_ALIGN_CENTER);
	lv_obj_add_event_cb(botton_angle,botton_angle_event_cb,LV_EVENT_PRESSED,0);	
	
	cube_all_init();	
	cube_ready();
	cube_send();
	cube_ready();	
	t1=lv_timer_create(timer_cb1, 1000, 0);	

}

void gameoverbotton_event_cb(lv_event_t * e)
{
	lv_obj_del(gameover_botton);
	cube_all_init();
	cube_ready();
	cube_send();
	cube_ready();
	lv_timer_resume(t1);
}


void timer_cb1(lv_timer_t * t)
{
	int i,j;
	if(down_hit_test()==false)	
	    {cube_move_down();}
	else{	cube_hold();
		    lv_timer_set_period(t1, 1000);
				if(cube_clrline()>0){return;}
		    cube_send();
				if(cube_win_cover_test(cube_matrix, cube_active))
				{
					lv_timer_pause(t1);
					gameover_botton=lv_btn_create(screen1);
					lv_obj_center(gameover_botton);
					lv_obj_set_size(gameover_botton,150,50);
					gameover_lable=lv_label_create(gameover_botton);
					lv_label_set_text(gameover_lable, "  GAME OVER  \nPRESS TO AGAIN");
					lv_obj_add_event_cb(gameover_botton,gameoverbotton_event_cb,LV_EVENT_PRESSED,0);
					return;
				}
				cube_ready();
			}
}


void cube_ready()
{int i,j;
	int cube_select=rand()%7;
	for(i=0;i<4;i++)
		{
			for(j=0;j<4;j++)
			  {
					if(cube_lib[cube_select][i][j])
					{
						cube_pre[i][j].cube=lv_btn_create(screen1);
						lv_obj_set_pos(cube_pre[i][j].cube,cube_pre_x+j*cube_size,cube_pre_y+i*cube_size);
	          lv_obj_set_size(cube_pre[i][j].cube,cube_size,cube_size);
						lv_obj_set_style_bg_color(cube_pre[i][j].cube,lv_color_hex(cube_color_lib[cube_select]), LV_PART_MAIN);
						lv_obj_set_style_radius(cube_pre[i][j].cube,1,LV_PART_MAIN);
						lv_obj_set_style_border_width(cube_pre[i][j].cube, 1, LV_PART_MAIN);
						cube_pre[i][j].alive=1;
					}
					else
					{
						cube_pre[i][j].cube=0;
						cube_pre[i][j].alive=0;
					}
				}
			}	
	}

void cube_send()
{
	int i,j;
		for(i=0;i<4;i++)
		{
			for(j=0;j<4;j++)
			  {
					cube_active[i][j].cube=0;
					cube_active[i][j].alive=0;
					cube_active[i][j].x=j+3;
					cube_active[i][j].y=i-1;			
					}
			}	
	
	for(i=0;i<4;i++)
		{
			for(j=0;j<4;j++)
			  {
					if(cube_pre[i][j].alive)
					{
						cube_active[i][j].cube=cube_pre[i][j].cube;
						cube_active[i][j].alive=1;
						
						lv_obj_set_pos(cube_pre[i][j].cube,cube_win_x+(j+3)*cube_size,cube_win_y+(i-1)*cube_size);
						
	          cube_pre[i][j].cube=0;
						cube_pre[i][j].alive=0;
					}
					else
					{
						cube_active[i][j].cube=0;
						cube_active[i][j].alive=0;
					}
				}
			}	
		}

void cube_hold()
{int i,j;
	for(i=0;i<4;i++)
		{
			for(j=0;j<4;j++)
			  {
					if(cube_active[i][j].alive)
					{
						cube_matrix[cube_active[i][j].y][cube_active[i][j].x].cube=cube_active[i][j].cube;
						cube_matrix[cube_active[i][j].y][cube_active[i][j].x].alive=1;
					}
				}
	 }	
}

void cube_move_down()
{	int i,j;
		for(i=0;i<4;i++)
		{
			for(j=0;j<4;j++)
			  {
					if(cube_active[i][j].alive)
					{
						cube_active[i][j].y++;
						lv_obj_set_pos(cube_active[i][j].cube,cube_win_x+(cube_active[i][j].x)*cube_size,cube_win_y+(cube_active[i][j].y)*cube_size);	          
					}
					else
					{
						cube_active[i][j].y++;
					}
				}
			}		
}

void cube_move_left()
{int i,j;
	for(i=0;i<4;i++)
		{
			for(j=0;j<4;j++)
			  {
					if(cube_active[i][j].alive)
					{
						cube_active[i][j].x--;
						lv_obj_set_pos(cube_active[i][j].cube,cube_win_x+(cube_active[i][j].x)*cube_size,cube_win_y+(cube_active[i][j].y)*cube_size);	          
					}
					else
					{
						cube_active[i][j].x--;
					}
				}
			}			
}

void cube_move_right()
{	int i,j;
		for(i=0;i<4;i++)
		{
			for(j=0;j<4;j++)
			  {
					if(cube_active[i][j].alive)
					{
						cube_active[i][j].x++;
						lv_obj_set_pos(cube_active[i][j].cube,cube_win_x+(cube_active[i][j].x)*cube_size,cube_win_y+(cube_active[i][j].y)*cube_size);	          
					}
					else
					{
						cube_active[i][j].x++;
					}
				}
			}	
		}

void botton_left_event_cb(lv_event_t * e)
{
	if(left_hit_test()==false)	
{
	cube_move_left();}	
}


void botton_right_event_cb(lv_event_t * e)
{
		if(right_hit_test()==false)	
{
	cube_move_right();}	
}


void botton_down_event_cb(lv_event_t * e)
{
	lv_timer_set_period(t1, 50);
}

void botton_down_event_cb1(lv_event_t * e)
{
	lv_timer_set_period(t1, 1000);
}

void 	botton_angle_event_cb(lv_event_t * e)
{
cube_rotation();
}

bool down_hit_test()
{int i,j;
		for(j=0;j<4;j++)
		{
			for(i=3;i>=0;i--)
			  {
					if(cube_active[i][j].alive)
					{
						if(cube_matrix[cube_active[i][j].y+1][cube_active[i][j].x].alive||cube_active[i][j].y==19){return true;}
					}
				}
			}
		return false;
}	

bool left_hit_test()
{int i,j;
		for(j=0;j<4;j++)
		{
			for(i=0;i<4;i++)
			  {
					if(cube_active[i][j].alive)
					{
						if(cube_matrix[cube_active[i][j].y][cube_active[i][j].x-1].alive||cube_active[i][j].x==0){return true;}
					}
				}
			}
		return false;
}	


bool right_hit_test()
{int i,j;
		for(j=3;j>=0;j--)
		{
			for(i=0;i<4;i++)
			  {
					if(cube_active[i][j].alive)
					{
						if(cube_matrix[cube_active[i][j].y][cube_active[i][j].x+1].alive||cube_active[i][j].x==9){return true;}
					}
				}
			}
		return false;
}	

void cube_rotation()
{cube_active_type  cube_temp[4][4]={0,};
	int i,j;
	for(i=0;i<4;i++)
		{
			for(j=0;j<4;j++)
			  {
					if(cube_active[j][3-i].alive)
					{
						cube_temp[i][j].cube=cube_active[j][3-i].cube;
						cube_temp[i][j].alive=cube_active[j][3-i].alive;
						cube_temp[i][j].x=cube_active[i][j].x;
					  cube_temp[i][j].y=cube_active[i][j].y;					
					}
					else
					{
						cube_temp[i][j].cube=0;
						cube_temp[i][j].alive=0;
						cube_temp[i][j].x=cube_active[i][j].x;
						cube_temp[i][j].y=cube_active[i][j].y;	
					}
				}
			}	
					
			if(cube_win_cover_test(cube_matrix, cube_temp)==false&&cube_out_of_win(cube_temp)==false)
			{
						for(i=0;i<4;i++)
							{
								for(j=0;j<4;j++)
									{cube_active[i][j].cube=cube_temp[i][j].cube;
									 cube_active[i][j].alive=cube_temp[i][j].alive;
									}
								}	
							for(i=0;i<4;i++)
							{
								for(j=0;j<4;j++)
									{
										if(cube_active[i][j].alive)
										{						
											lv_obj_set_pos(cube_active[i][j].cube,cube_win_x+(cube_active[i][j].x)*cube_size,cube_win_y+(cube_active[i][j].y)*cube_size);	 						
										}
										
									}
							}	
				}
}

bool cube_win_cover_test( cube_matrix_type  matrix[20][10], cube_active_type  temp[4][4])
{int i,j;
	for(i=0;i<4;i++)
			{
				for(j=0;j<4;j++)
					{
					if(temp[i][j].alive)
					{
						if(matrix[temp[i][j].y][temp[i][j].x].alive){return true;}
					}
					
				}
			}
		return false;	
}

bool cube_out_of_win(cube_active_type  temp[4][4])
{
	int i,j;
	
    for(i=0;i<4;i++)
			{
				for(j=0;j<4;j++)
					{
					if(temp[i][j].alive)
					{
						if(temp[i][j].x<0||temp[i][j].x>9||temp[i][j].y>19){return true;}
					}
				}
			}
		return false;
}
	
int cube_clrline()
{
	static int i,j,k,l=0,m=0;
	static int delline[5];
	lv_anim_t a[5];
	m=0;
	for(i=19;i>=0;i--)
		{l=0;
			for(j=0;j<10;j++)
				{
					if(cube_matrix[i][j].alive==1){l++;}
          if(l==10)
						{
							m++;
							delline[m]=i;
							score+=100;
							lv_label_set_text_fmt(score_lable, "SCORE:%d",score);
							lv_timer_pause(t1);
							
							
							lv_anim_init(&a[m]);
							lv_anim_set_var(&a[m],&delline[m]);
							lv_anim_set_exec_cb(&a[m],lv_anim_exec_xcb);
							lv_anim_set_time(&a[m],300);
							lv_anim_set_values(&a[m],0,9);
							if(m==1){lv_anim_set_ready_cb(&a[m], ready_cb);}
							lv_anim_start(&a[m]);
							
							 for(k=0;k<10;k++)
							{
								cube_matrix[i][k].alive=0;
							}							
				     }
	      }		
    }
		return m;
}



void lv_anim_exec_xcb(void * var, int32_t v)
{
	int i;
	i=(*(int *)var);
	lv_obj_del(cube_matrix[i][v].cube);
}
	
void ready_cb( lv_anim_t * var)
{
      cube_move_all_down();
		  cube_send();
			if(cube_win_cover_test(cube_matrix, cube_active))
			{
				lv_timer_pause(t1);
				gameover_botton=lv_btn_create(screen1);
				lv_obj_center(gameover_botton);
				lv_obj_set_size(gameover_botton,150,50);
				gameover_lable=lv_label_create(gameover_botton);
				lv_label_set_text(gameover_lable, "  GAME OVER  \nPRESS TO AGAIN");
				lv_obj_add_event_cb(gameover_botton,gameoverbotton_event_cb,LV_EVENT_PRESSED,0);
				return;
			}
			cube_ready();
			lv_timer_resume(t1);
				
}


void cube_move_1line_down(int line)
{int i,j,l;
	for(i=line;i>0;i--)
	{		
		for(j=0;j<10;j++)
		{
				cube_matrix[i][j].alive=cube_matrix[i-1][j].alive;
				cube_matrix[i][j].cube=cube_matrix[i-1][j].cube;
				
			if(cube_matrix[i][j].alive==1)
			{
								lv_obj_set_pos(cube_matrix[i][j].cube,lv_obj_get_x(cube_matrix[i][j].cube),lv_obj_get_y(cube_matrix[i][j].cube)+cube_size);
				lv_obj_refr_pos(cube_matrix[i][j].cube);
			}					
		}
	}
	
}	 


	
void cube_move_all_down()
{	static int i,j,k,l=0,m=0;
		for(i=1;i<20;i++)
		{			
			l=0;
			for(j=0;j<10;j++)
				{
					l+=cube_matrix[i][j].alive;
				}	
        if(l==0)
				{							
					cube_move_1line_down(i);
				}				
    }
	}
	
void cube_all_init()
{
	int i,j;
	score=0;
	for(i=0;i<20;i++)
	{
		for(j=0;j<10;j++)
		{
			if(cube_matrix[i][j].alive)
			{lv_obj_del(cube_matrix[i][j].cube);}
		    cube_matrix[i][j].alive=0;
				cube_matrix[i][j].cube=0;
			}					
		}
	
		for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(cube_active[i][j].alive)
			{lv_obj_del(cube_active[i][j].cube);}
			if(cube_pre[i][j].alive)
			{lv_obj_del(cube_pre[i][j].cube);}
			
		    cube_active[i][j].alive=0;
				cube_active[i][j].cube=0;
			  cube_active[i][j].x=j+3;
			  cube_active[i][j].y=i;
			  cube_pre[i][j].alive=0;
			  cube_pre[i][j].cube=0;			
			}					
		}
}	


void all_clear(lv_event_t * e)
{
  lv_timer_del(t1);
	cube_all_init();	
	lv_obj_clean(screen1);
	lv_obj_del(screen1);	
}




