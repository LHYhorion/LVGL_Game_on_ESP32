#include "lvgl.h"
#include <string.h>
#include <stdlib.h>
#include "flygame.h"

#define  zidanshuliang  7
#define  enemyshuliang  10

typedef struct 
{
	lv_obj_t * obj;
	int alive;	
	int x;
	int y;
}zidan_typedef;


typedef struct 
{
	lv_obj_t * obj;
	int alive;
  int move_x;
	int move_y;
	int x;
	int y;
}enemy_typedef;


static	zidan_typedef zidan[zidanshuliang];
static	enemy_typedef enemy[enemyshuliang];
static	enemy_typedef enemy_boss;

LV_IMG_DECLARE(fly)
LV_IMG_DECLARE(boom)
LV_IMG_DECLARE(enemyboss)
LV_IMG_DECLARE(enemyfly1)
LV_IMG_DECLARE(enemyfly2)
LV_IMG_DECLARE(enemyfly3)


static const lv_img_dsc_t *enemyflyimg[]={&enemyfly2,&enemyfly3,&enemyfly1};
static int score;
static int boss_live_value=100;
static lv_obj_t * score_lable;
static lv_obj_t * fly1;
static lv_obj_t * boss_live;
static lv_obj_t * screen1;
static lv_obj_t * botton_exit;
static lv_obj_t * exit_lable;

static lv_timer_t * t1=0;
static lv_timer_t * t2=0;
static lv_timer_t * t3=0;
static lv_timer_t * enemy_create=0;
static void timer_cb1(lv_timer_t * t);
static void timer_cb2(lv_timer_t * t);
static void timer_cb3(lv_timer_t * t);
static void timer_enemy_create_cb(lv_timer_t * t);
static void zidan_init(zidan_typedef * z,int nofz);
static void zidan_move(int step);
static void zidan_clr();
static void zidan_create();
static void zidan_disp();
static void enemy_move();
static void enemy_delet();
static void enemy_was_attacked();
static void boom_anim_exec_xcb(void * var, int32_t v);
static void boom_anim_delect_cb(lv_anim_t * a);
static void boss_start_cb(void * var, int32_t v);
static void boss_attack_anim_exec_xcb(void * var, int32_t v);
static void boss_was_attacked();
static void boss_delect_cb(lv_anim_t * a);
static void all_clear(lv_event_t * e);
static void game_init();


void fly_game_start(void)
{
	score=0;
	
	screen1=lv_tileview_create(lv_scr_act());
	lv_obj_clear_flag(screen1, LV_OBJ_FLAG_SCROLLABLE);
	lv_obj_set_style_bg_color(screen1,lv_color_hex(0x000020), LV_PART_MAIN);
	lv_obj_clear_flag(screen1, LV_OBJ_FLAG_SCROLLABLE);
	
	
	botton_exit=lv_btn_create(screen1);
	lv_obj_set_style_bg_color(botton_exit,lv_color_hex(0x000040), LV_PART_MAIN);
  exit_lable=lv_label_create(botton_exit);
	lv_label_set_text(exit_lable, "<EXIT");
	lv_obj_set_style_text_color(exit_lable,lv_color_hex(0xffffff), LV_PART_MAIN);
	lv_obj_add_event_cb(botton_exit,all_clear,LV_EVENT_RELEASED,0);


	
	fly1=lv_img_create(screen1);
	lv_img_set_src(fly1, &fly);
  lv_img_set_angle(fly1, 2700);
	lv_obj_set_pos(fly1,400,160);
	
	score_lable=lv_label_create(screen1);
	lv_label_set_text(score_lable, "SCORE:");
	lv_obj_set_style_text_color(score_lable, lv_color_hex(0x00ffff), LV_PART_MAIN);
	
	game_init();
	
	zidan_init(zidan,zidanshuliang);
	
	t1=lv_timer_create(timer_cb1, 10, 0);	
	t2=lv_timer_create(timer_cb2, 200, 0);
  t3=lv_timer_create(timer_cb3, 30, 0);
	enemy_create=lv_timer_create(timer_enemy_create_cb, 500, 0);
}


void game_init(void)
{
	int i;
	for(i=0;i<zidanshuliang;i++)
	{
		zidan[i].alive=0;
	  zidan[i].obj=0;
	}
	
	for(i=0;i<enemyshuliang;i++)
	{
		enemy[i].alive=0;
	  enemy[i].obj=0;
	}
	
  enemy_boss.obj=0;
	enemy_boss.alive=0;
	
}


void timer_cb1(lv_timer_t * t)
{	
	zidan_move(-5);
	enemy_was_attacked();
	boss_was_attacked();

}

void timer_cb3(lv_timer_t * t)
{	
	lv_point_t xy;
	lv_indev_t * indev_touchpad = lv_indev_get_act();
	lv_indev_get_point(indev_touchpad, &xy);
	lv_obj_set_pos(fly1,xy.x-75,xy.y-25);
	zidan_disp();
	enemy_move();
	enemy_delet();
	
	if(score>5000&&enemy_boss.alive==0)
	{
		boss_live_value=100;
		enemy_boss.alive=1;
		enemy_boss.obj=lv_img_create(screen1);
	  lv_img_set_src(enemy_boss.obj, &enemyboss);
    lv_img_set_angle(enemy_boss.obj, 900);
	  lv_obj_set_pos(enemy_boss.obj,-100,105);
		
		
		boss_live=lv_bar_create(enemy_boss.obj);
		lv_obj_set_style_bg_color(boss_live, lv_color_hex(0xff0000), LV_PART_INDICATOR);
		lv_bar_set_range(boss_live, 0, 100);
		lv_bar_set_value(boss_live,boss_live_value,LV_ANIM_OFF);
		lv_obj_set_size(boss_live,6,50);
		lv_obj_align(boss_live,LV_ALIGN_LEFT_MID,20,0);
		
		lv_anim_t a;
		lv_anim_init(&a);
		
		lv_anim_set_var(&a,&enemy_boss);
		lv_anim_set_exec_cb(&a,boss_start_cb);
		lv_anim_set_time(&a,5000);
		lv_anim_set_values(&a,-100,50);
		lv_anim_set_path_cb(&a,lv_anim_path_ease_in_out);
		lv_anim_start(&a);		
	}
}



void timer_cb2(lv_timer_t * t)
{
	zidan_clr();
	zidan_create();
}


void zidan_create()
{
	int i;
	for(i=0;i<zidanshuliang;i++)
	{
		if(zidan[i].alive==0)
		{zidan[i].alive =1;
		 lv_obj_refr_pos(fly1);
		 zidan[i].x=lv_obj_get_x(fly1);
		 zidan[i].y=lv_obj_get_y(fly1);

     zidan[i].obj=lv_btn_create(screen1);
	   lv_obj_set_pos(zidan[i].obj,zidan[i].x-10,zidan[i].y+30);
		 lv_obj_refr_pos(zidan[i].obj);
	   lv_obj_set_size(zidan[i].obj,15,5);
		 lv_obj_set_style_shadow_width(zidan[i].obj,0,LV_PART_MAIN);
     return;			
		}		
	}	
		
}



void zidan_move(int step)
{
	int i;
	for(i=0;i<zidanshuliang;i++)
	{
		if(zidan[i].alive==1)
		{
		 zidan[i].x+=step;	 
		}		
	}	
}


void zidan_disp()
{
	int i;
	for(i=0;i<zidanshuliang;i++)
	{
		if(zidan[i].alive==1)
		{
		 lv_obj_set_pos(zidan[i].obj,zidan[i].x-30,zidan[i].y+30);
		 lv_obj_refr_pos(zidan[i].obj);
		}		
	}	
}




void zidan_clr()
{
	int i;
	for(i=0;i<zidanshuliang;i++)
	{
		if(zidan[i].alive==1&&zidan[i].x<0)
		{
			lv_obj_del(zidan[i].obj);
			zidan[i].alive=0;
			zidan[i].obj=0;
			zidan[i].x=0;
			zidan[i].y=0;
		}		
	}	
}




void zidan_init(zidan_typedef * z,int nofz)
{
	int i;
	for(i=0;i<nofz;i++)
	{
		z->alive=0;
		z->obj=0;
		z->x=0;
		z->y=0;
	}	
}



void timer_enemy_create_cb(lv_timer_t * t)
{
	int i,enemyflyimg_select;
	enemyflyimg_select=rand()%3;
	for(i=0;i<enemyshuliang;i++)
	{
		if(enemy[i].alive==0)
		{
			enemy[i].alive=1;
			enemy[i].x=-50;
			enemy[i].y=(rand()>>23)+62;
			enemy[i].move_x=rand()%6+1;
			enemy[i].move_y=rand()%3-1;
			enemy[i].obj=lv_img_create(screen1);
	    lv_img_set_src(enemy[i].obj,enemyflyimg[enemyflyimg_select]);
      lv_img_set_angle(enemy[i].obj, 900);
	    lv_obj_set_pos(enemy[i].obj,enemy[i].x,enemy[i].y);
			return;
		}		
	}		
	
}

void enemy_move()
{
	int i;
	for(i=0;i<enemyshuliang;i++)
	{
		if(enemy[i].alive==1)
		{
			enemy[i].x+=enemy[i].move_x;
			enemy[i].y+=enemy[i].move_y;
			lv_obj_set_pos(enemy[i].obj,enemy[i].x,enemy[i].y);
			
		}		
	}		
	
}


void enemy_delet()
{
	int i;
	for(i=0;i<enemyshuliang;i++)
	{
		if(enemy[i].alive==1)
		{
			if(enemy[i].x>550||enemy[i].y>340||enemy[i].y<-30)
			{
				lv_obj_del(enemy[i].obj);
				enemy[i].alive=0;
				
			}
			
		}		
	}		
	
}



void enemy_was_attacked()
{
	int i,j;
	for(i=0;i<zidanshuliang;i++)
	{
		if(zidan[i].alive==1)
		{
			
			for(j=0;j<enemyshuliang;j++)
			{
				if(enemy[j].alive==1)
				{
				  if((zidan[i].x-enemy[j].x<40&&zidan[i].x-enemy[j].x>-20)&&(zidan[i].y-enemy[j].y<20&&zidan[i].y-enemy[j].y>-30))
					{
						lv_obj_del(zidan[i].obj);
						zidan[i].alive=0;
						
					  lv_obj_del(enemy[j].obj);
				    enemy[j].alive=0;		
						
						lv_obj_t * boomx=lv_img_create(screen1);
	          lv_img_set_src(boomx,&boom);
						lv_obj_set_pos(boomx,enemy[j].x,enemy[j].y);
						
						score+=100;
						lv_label_set_text_fmt(score_lable, "SCORE:%d",score);
						
						lv_anim_t a;
						lv_anim_init(&a);
						
						lv_anim_set_var(&a,boomx);
						lv_anim_set_exec_cb(&a,boom_anim_exec_xcb);
						lv_anim_set_time(&a,300);
						lv_anim_set_values(&a,1,5);
						lv_anim_set_ready_cb(&a,boom_anim_delect_cb);
						lv_anim_start(&a);
						break;

						
					}			
			  }	
		  }		
	  }			
  }
}


void boom_anim_exec_xcb(void * var, int32_t v)
{
	lv_obj_t * xxx=(lv_obj_t *)var;
	lv_img_set_zoom(xxx, 55+v*50);	
	lv_obj_set_style_img_opa(xxx,300-v*50,0);
}

void boom_anim_delect_cb(lv_anim_t * a)
{
  lv_obj_t * xxx=(lv_obj_t *)a->var;
  lv_obj_del(xxx);
}	



void boss_start_cb(void * var, int32_t v)
{
	enemy_typedef * xxx=(enemy_typedef *)var;
	
	lv_obj_set_x(xxx->obj,v);
	xxx->x=  lv_obj_get_x(xxx->obj);
	xxx->y=  lv_obj_get_y(xxx->obj);
}




void boss_was_attacked()
{
	int i,j;
	for(i=0;i<zidanshuliang;i++)
	{
		if(zidan[i].alive==1)
		{
			
    	if(enemy_boss.alive==1)
				{
				  if((zidan[i].x-enemy_boss.x<50&&zidan[i].x-enemy_boss.x>-50)&&(zidan[i].y-enemy_boss.y<50&&zidan[i].y-enemy_boss.y>-50))
					{
						lv_obj_del(zidan[i].obj);
						zidan[i].alive=0;
						boss_live_value--;
						score+=100;
						lv_label_set_text_fmt(score_lable, "SCORE:%d",score);
						lv_bar_set_value(boss_live, boss_live_value, LV_ANIM_OFF);
						
						lv_anim_t a;
						lv_anim_init(&a);
						
						lv_anim_set_var(&a,&enemy_boss);
						lv_anim_set_exec_cb(&a,boss_attack_anim_exec_xcb);
						lv_anim_set_time(&a,100);
						lv_anim_set_values(&a,1,2);
						lv_anim_set_ready_cb(&a,boss_delect_cb);
						lv_anim_start(&a);
						
						
						lv_obj_t * boomx=lv_img_create(screen1);
	          lv_img_set_src(boomx,&boom);
						lv_obj_set_pos(boomx,zidan[i].x,zidan[i].y);
						
						score+=100;
						lv_label_set_text_fmt(score_lable, "SCORE:%d",score);
						
						lv_anim_t a2;
						lv_anim_init(&a2);
						
						lv_anim_set_var(&a2,boomx);
						lv_anim_set_exec_cb(&a2,boom_anim_exec_xcb);
						lv_anim_set_time(&a2,300);
						lv_anim_set_values(&a2,1,5);
						lv_anim_set_ready_cb(&a2,boom_anim_delect_cb);
						lv_anim_start(&a2);

						
					}			
			  	
		  }		
	  }			
  }
}

void boss_attack_anim_exec_xcb(void * var, int32_t v)
{
	enemy_typedef * xxx=(enemy_typedef *)var;
	lv_obj_set_style_img_opa(xxx->obj,127*v,0);
	
}


void boss_delect_cb(lv_anim_t * a)
{

	if(boss_live_value==0)
		{
			
			lv_obj_t * boomx=lv_img_create(screen1);
			lv_img_set_src(boomx,&boom);
			lv_obj_set_pos(boomx,enemy_boss.x+38,enemy_boss.y+10);
			
			lv_anim_t a2;
			lv_anim_init(&a2);
			
			lv_anim_set_var(&a2,boomx);
			lv_anim_set_exec_cb(&a2,boom_anim_exec_xcb);
			lv_anim_set_time(&a2,500);
			lv_anim_set_values(&a2,1,10);
			lv_anim_set_ready_cb(&a2,boom_anim_delect_cb);
			lv_anim_start(&a2);
			
			
		 enemy_boss.alive=0;
		 lv_obj_del(enemy_boss.obj);
		}
		
}

void all_clear(lv_event_t * e)
{
  lv_anim_del_all();
	lv_timer_del(t1);
	lv_timer_del(t2);
	lv_timer_del(t3);
	lv_timer_del(enemy_create);
	lv_obj_clean(screen1);
	lv_obj_del(screen1);
	
}