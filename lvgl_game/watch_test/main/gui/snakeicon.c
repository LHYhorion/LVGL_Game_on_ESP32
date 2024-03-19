#include <stdlib.h>
#include <stdio.h>
#include "lvgl.h"
#include <math.h>
#include "snakeicon.h"

#define icon_angle   24
LV_IMG_DECLARE(icon_1)
LV_IMG_DECLARE(icon_2)
LV_IMG_DECLARE(icon_3)
LV_IMG_DECLARE(icon_4)
LV_IMG_DECLARE(icon_5)
LV_IMG_DECLARE(icon_6)
LV_IMG_DECLARE(icon_7)
LV_IMG_DECLARE(icon_8)
LV_IMG_DECLARE(icon_9)
LV_IMG_DECLARE(icon_10)
LV_IMG_DECLARE(icon_11)
LV_IMG_DECLARE(icon_12)
LV_IMG_DECLARE(icon_13)
LV_IMG_DECLARE(icon_14)
LV_IMG_DECLARE(icon_15)


typedef struct
{
  lv_obj_t * btn;
   int angle;
}btn_typedef;


static const lv_img_dsc_t * icon_img[15]={&icon_1,&icon_2,&icon_3,&icon_4,&icon_5,&icon_6,&icon_7,&icon_8,&icon_9,&icon_10,&icon_11,&icon_12,&icon_13,&icon_14,&icon_15,};
static lv_point_t  tempxy[360];
static lv_obj_t * map1;
static btn_typedef btn[15];
static lv_timer_t * t1;


static void calculateCoordinates(float centerX, float centerY, float radius, float angle,lv_point_t * outxy);
static void timer_cb1(lv_timer_t * t);
static void slider2_cb(lv_event_t * e);
static void slider2_released_cb(lv_event_t * e);

static void anim_delect_cb(lv_anim_t * a);
static void slider1_cb(lv_event_t * e);
static void  slider3_cb(lv_event_t * e);
static void anim_angle_cb2(void * var, int32_t v);
static void anim_angle_cb(lv_timer_t * t);

static int touched2=0;
static int j=0;

static int numx;


void snakeicontest()
{
    int i;

//    for (i=0;i<360;i++)
//    {
//        calculateCoordinates(220,140, 100, i*3.1416/180,&tempxy[i]);//圆形
//    }


 // for (i=0;i<360;i++){tempxy[i].x=i*2-120;tempxy[i].y=sin(i*3.1416/60)*50+140;}//正弦波
	
// for (i=0;i<100;i++){tempxy[i].x=i*3+80;tempxy[i].y=80;}//方框
//	  for (i=100;i<180;i++){tempxy[i].x=380;tempxy[i].y=(i-100)*2+80;}
//			 for (i=180;i<280;i++){tempxy[i].x=380-(i-180)*3;tempxy[i].y=240;}
//				  for (i=280;i<360;i++){tempxy[i].x=80;tempxy[i].y=240-(i-280)*2;}
						
//	      for (i=0;i<150;i++){tempxy[i].x=i*2-20;tempxy[i].y=100;}//z行
//      for (i=150;i<210;i++){tempxy[i].x=280-(i-150)*2;tempxy[i].y=(i-150)*2+100;}
//      for (i=210;i<360;i++){tempxy[i].x=(i-210)*2+160;tempxy[i].y=220;}
	
//    for (i=0;i<360;i++){tempxy[i].x=i*2-120;tempxy[i].y=160;}// 一字
	
//	for (i=0;i<180;i++)
//    {
//        calculateCoordinates(120,140, 100, i*3.1416/90,&tempxy[i]);
//    }
//	
//			for (i=180;i<360;i++)
//    {
//        calculateCoordinates(320,140, 100, 3.1416-i*3.1416/90,&tempxy[i]);// 8行
//    }
		

   for (i=0;i<120;i++)
    {
        calculateCoordinates(450,100, 400,(770-i)*3.1415926/720,&tempxy[i]);
    }

    for (i=120;i<240;i++)
    {
        tempxy[i].x=100;tempxy[i].y=(i-120)*2;
    }


    for (i=240;i<360;i++)
    {
        calculateCoordinates(-250,100, 400,((i-240)-50)*3.1415926/720,&tempxy[i]);  // 双括号
    }




        lv_obj_set_style_bg_color(lv_scr_act(),lv_color_hex(0), LV_PART_MAIN);
        lv_obj_clear_flag(lv_scr_act(), LV_OBJ_FLAG_SCROLLABLE);


    for (i=0;i<15;i++)
    {
        btn[i].btn=lv_img_create(lv_scr_act());
        btn[i].angle=i*icon_angle;
        lv_img_set_src(btn[i].btn, icon_img[i]);

        if(btn[i].angle>=0&&btn[i].angle<360)
        {lv_obj_set_pos(btn[i].btn,tempxy[btn[i].angle].x,tempxy[btn[i].angle].y);
        lv_obj_refr_pos(btn[i].btn);
        lv_obj_clear_flag(btn[i].btn,LV_OBJ_FLAG_HIDDEN);
        }
        else{
              lv_obj_add_flag(btn[i].btn,LV_OBJ_FLAG_HIDDEN);
             }
				
				if(lv_obj_get_y(btn[i].btn)<=100)
            {
                lv_img_set_zoom(btn[i].btn,255-((100-lv_obj_get_y(btn[i].btn))));
            }
            else
            {
                lv_img_set_zoom(btn[i].btn,255-((lv_obj_get_y(btn[i].btn)-100)));
						 
		       }

				 }
 
        lv_obj_t * obj1=lv_obj_create(lv_scr_act());
				lv_obj_set_size(obj1,lv_disp_get_hor_res(lv_disp_get_default()),lv_disp_get_ver_res(lv_disp_get_default()));
        lv_obj_set_style_bg_opa(obj1,0, LV_PART_MAIN);
        lv_obj_set_style_border_opa(obj1,0, LV_PART_MAIN);
        lv_obj_add_event_cb(obj1,slider1_cb,LV_EVENT_PRESSING,0);
        lv_obj_add_event_cb(obj1,slider2_released_cb,LV_EVENT_RELEASED,0);


}



static void  slider1_cb(lv_event_t * e)
{
   static  lv_point_t click_point1;
   static  lv_point_t click_point2;

   int touch_area;
   lv_anim_del_all();
	  if(t1!=0){lv_timer_del(t1);}

    if(touched2==0)
     {
			 
        lv_indev_get_point(lv_indev_get_act(), &click_point1);
        touched2=1;
        j=0;
        return;
     }
    else
        {
            lv_indev_get_point(lv_indev_get_act(), &click_point2);
        }


        j=click_point2.y-click_point1.y;
      
        click_point1.y=click_point2.y;//这几个y都改成x可以变成横向触摸
      

		for (int i=0;i<15;i++)
				{
						btn[i].angle=btn[i].angle+j/2;
					 if(btn[i].angle<0){btn[i].angle+=360;}
					 if(btn[i].angle>0){btn[i].angle=btn[i].angle%360;}
				}

    for (int i=0;i<15;i++)
        {
					if(btn[i].angle>=0&&btn[i].angle<360)
					{lv_obj_set_pos(btn[i].btn,tempxy[btn[i].angle].x,tempxy[btn[i].angle].y);
					lv_obj_refr_pos(btn[i].btn);
					lv_obj_clear_flag(btn[i].btn,LV_OBJ_FLAG_HIDDEN);

					}
					else{
								lv_obj_add_flag(btn[i].btn,LV_OBJ_FLAG_HIDDEN);
							 }
					
					 if(lv_obj_get_y(btn[i].btn)<=100)
            {
                lv_img_set_zoom(btn[i].btn,255-((100-lv_obj_get_y(btn[i].btn))));
            }
            else
            {
                lv_img_set_zoom(btn[i].btn,255-((lv_obj_get_y(btn[i].btn)-100)));
            }
		 
							 
							 
							 

        }

}




static void  slider2_released_cb(lv_event_t * e)
{

    touched2=0;
	

	

}






void anim_delect_cb(lv_anim_t * a)
{

      

}



void calculateCoordinates(float centerX, float centerY, float radius, float angle,lv_point_t * outxy)
{

    float xOffset = radius * cos(angle);
    float yOffset = radius * sin(angle);

    outxy->x = centerX + xOffset;
    outxy->y = centerY + yOffset;

}



