// SPDX-License-Identifier: MIT
// Copyright 2020 NXP

/**
 * @file custom.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include <stdio.h>
#include "lvgl.h"
#include "custom.h"
lv_ui *c_ui=NULL;
lv_timer_t * Moles_disappear_timer[2];


void game_play();
/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/
static char hole[6] = {0, 0, 0, 0, 0, 0};
char moles_hited_flag[6] = {0, 0, 0, 0, 0, 0};
static int j = 0;
static int current_moles_num = 0;
static int current_game_time = 0;
char game_times_up_flag = 0;
int game_speed = 0;
int game_time = 0;
int hit_moles_num = 0;
int run_moles_num = 0;


/**
 * Create a demo application
 */
static void Moles_disappear_hole0_event_handler(lv_timer_t * timer)
{
  static int hole0_cheack_times = 0;
  hole0_cheack_times++;
  if(game_times_up_flag ==1)
  {
    lv_timer_del(timer);
  }
  if(hole0_cheack_times >= game_speed*40/100)
  {
    lv_timer_del(timer);
    lv_obj_move_background(c_ui->screen_img_2);
    current_moles_num-=1;
    run_moles_num++;
    hole0_cheack_times = 0;
    hole[0] = 0;
  }
  else
  {
    if(moles_hited_flag[0] == 1)
    {
      lv_timer_del(timer);
      lv_obj_move_background(c_ui->screen_img_2);
      hole0_cheack_times = 0;
      current_moles_num-=1;
      hit_moles_num++;
      moles_hited_flag[0] = 0;
      hole[0] = 0;
    }
  }
}

static void Moles_disappear_hole1_event_handler(lv_timer_t * timer)
{
  static int hole1_cheack_times = 0;
  hole1_cheack_times++;
  if(game_times_up_flag ==1)
  {
    lv_timer_del(timer);
  }
  if(hole1_cheack_times >= game_speed*40/100)
  {
    lv_timer_del(timer);
    lv_obj_move_background(c_ui->screen_img_4);
    current_moles_num-=1;
    run_moles_num++;
    hole1_cheack_times = 0;
    hole[1] = 0;
  }
  else
  {
    if(moles_hited_flag[1] == 1)
    {
      lv_timer_del(timer);
      lv_obj_move_background(c_ui->screen_img_4);
      hole1_cheack_times = 0;
      current_moles_num-=1;
      hit_moles_num++;
      moles_hited_flag[1] = 0;
      hole[1] = 0;
    }
  }
}

static void Moles_disappear_hole2_event_handler(lv_timer_t * timer)
{
  static int hole2_cheack_times = 0;
  hole2_cheack_times++;
  if(game_times_up_flag ==1)
  {
    lv_timer_del(timer);
  }
  if(hole2_cheack_times >= game_speed*40/100)
  {
    lv_timer_del(timer);
    lv_obj_move_background(c_ui->screen_img_5);
    current_moles_num-=1;
    run_moles_num++;
    hole2_cheack_times = 0;
    hole[2] = 0;
  }
  else
  {
    if(moles_hited_flag[2] == 1)
    {
      lv_timer_del(timer);
      lv_obj_move_background(c_ui->screen_img_5);
      hole2_cheack_times = 0;
      current_moles_num-=1;
      hit_moles_num++;
      moles_hited_flag[2] = 0;
      hole[2] = 0;
    }
  }
}

static void Moles_disappear_hole3_event_handler(lv_timer_t * timer)
{
  static int hole3_cheack_times = 0;
  hole3_cheack_times++;
  if(game_times_up_flag ==1)
  {
    lv_timer_del(timer);
  }
  if(hole3_cheack_times >= game_speed*40/100)
  {
    lv_timer_del(timer);
    lv_obj_move_background(c_ui->screen_img_6);
    hole[3] = 0;
    current_moles_num-=1;
    run_moles_num++;
    hole3_cheack_times = 0;
    hole[3] = 0;
  }
  else
  {
    if(moles_hited_flag[3] == 1)
    {
      lv_timer_del(timer);
      lv_obj_move_background(c_ui->screen_img_6);
      hole3_cheack_times = 0;
      current_moles_num-=1;
      hit_moles_num++;
      moles_hited_flag[3] = 0;
      hole[3] = 0;
    }
  }
}

static void Moles_disappear_hole4_event_handler(lv_timer_t * timer)
{
  static int hole4_cheack_times = 0;
  hole4_cheack_times++;
  if(game_times_up_flag ==1)
  {
    lv_timer_del(timer);
  }
  if(hole4_cheack_times >= game_speed*40/100)
  {
    lv_timer_del(timer);
    lv_obj_move_background(c_ui->screen_img_7);
    current_moles_num-=1;
    run_moles_num++;
    hole4_cheack_times = 0;
    hole[4] = 0;
  }
  else
  {
    if(moles_hited_flag[4] == 1)
    {
      lv_timer_del(timer);
      lv_obj_move_background(c_ui->screen_img_7);
      hole4_cheack_times = 0;
      current_moles_num-=1;
      hit_moles_num++;
      moles_hited_flag[4] = 0;
      hole[4] = 0;
    }
  }
}

static void Moles_disappear_hole5_event_handler(lv_timer_t * timer)
{
  static int hole5_cheack_times = 0;
  hole5_cheack_times++;
  if(game_times_up_flag ==1)
  {
    lv_timer_del(timer);
  }
  if(hole5_cheack_times >= game_speed*40/100)
  {
    lv_timer_del(timer);
    lv_obj_move_background(c_ui->screen_img_8);
    current_moles_num-=1;
    run_moles_num++;
    hole5_cheack_times = 0;
    hole[5] = 0;
  }
  else
  {
    if(moles_hited_flag[5] == 1)
    {
      lv_timer_del(timer);
      lv_obj_move_background(c_ui->screen_img_8);
      hole5_cheack_times = 0;
      current_moles_num-=1;
      hit_moles_num++;
      moles_hited_flag[5] = 0;
      hole[5] = 0;
    }
  }
}

static void Moles_appear_event_handler(lv_timer_t * timer)
{
  if(game_times_up_flag ==1)
  {
    lv_timer_del(timer);
  }
  if(current_moles_num <= 4)
  {
    int i=0;
    j = j>9?0:j;
    for(i=0;i<2;i++)
    {
      current_moles_num+=1;
      int Moles_appear_place = random()%6;
      while(hole[Moles_appear_place] == 1)
      {
        Moles_appear_place = random()%6;
      }
      if(game_times_up_flag != 1)
      {
        switch(Moles_appear_place)
        {
          case 0:
                  lv_obj_move_foreground(c_ui->screen_img_2);
                  hole[Moles_appear_place] = 1;
                  Moles_disappear_timer[j++] = lv_timer_create(Moles_disappear_hole0_event_handler, 100, NULL);
                  break;
          case 1:
                  lv_obj_move_foreground(c_ui->screen_img_4);
                  hole[Moles_appear_place] = 1;
                  Moles_disappear_timer[j++] = lv_timer_create(Moles_disappear_hole1_event_handler, 100, NULL);
                  break;
          case 2:
                  lv_obj_move_foreground(c_ui->screen_img_5);
                  hole[Moles_appear_place] = 1;
                  Moles_disappear_timer[j++] = lv_timer_create(Moles_disappear_hole2_event_handler, 100, NULL);
                  break;
          case 3:
                  lv_obj_move_foreground(c_ui->screen_img_6);
                  hole[Moles_appear_place] = 1;
                  Moles_disappear_timer[j++] = lv_timer_create(Moles_disappear_hole3_event_handler, 100, NULL);
                  break;
          case 4:
                  lv_obj_move_foreground(c_ui->screen_img_7);
                  hole[Moles_appear_place] = 1;
                  Moles_disappear_timer[j++] = lv_timer_create(Moles_disappear_hole4_event_handler, 100, NULL);
                  break;
          case 5:
                  lv_obj_move_foreground(c_ui->screen_img_8);
                  hole[Moles_appear_place] = 1;
                  Moles_disappear_timer[j++] = lv_timer_create(Moles_disappear_hole5_event_handler, 100, NULL);
                  break;
          default:
                  break;
        }
      }
    }
  }
}

static void Showing_score()
{
  lv_obj_move_foreground(c_ui->screen_tileview_1);
}

static void game_times_counter_event_handler(lv_timer_t * timer)
{
  current_game_time++;
  char buf[8];
//  static lv_style_t time_counter_style;
  int show_current_time = 0;

  show_current_time = game_time - current_game_time;
  
//  if(show_current_time <= 10)
//  {
//    lv_style_set_text_color(&time_counter_style, lv_color_make(0xf0, 0x00, 0x00));
//  }
//  else
//  {
//    lv_style_set_text_color(&time_counter_style, lv_color_make(0xff, 0xff, 0xff));
//  }
//  lv_obj_add_style(c_ui->screen_label_time, &time_counter_style, LV_PART_MAIN|LV_STATE_DEFAULT);

  sprintf(buf,"%d",show_current_time);
  lv_label_set_text(c_ui->screen_label_time, buf);      //show the time counter
  memset(buf,0,sizeof(buf));
  sprintf(buf,"%d",hit_moles_num);
  lv_label_set_text(c_ui->screen_label_3, buf);       //show the num of moles you hit
  memset(buf,0,sizeof(buf));
  sprintf(buf,"%d",run_moles_num);
  lv_label_set_text(c_ui->screen_label_4, buf);       //show the num of the moles you missed
  memset(buf,0,sizeof(buf));
  if(current_game_time >= game_time)
  {
    game_times_up_flag =1;
    Showing_score();
  
    lv_timer_del(timer);
  }
  
}

void reset_all()
{
  lv_obj_move_background(c_ui->screen_img_2);
  lv_obj_move_background(c_ui->screen_img_3);
  lv_obj_move_background(c_ui->screen_img_4);
  lv_obj_move_background(c_ui->screen_img_5);
  lv_obj_move_background(c_ui->screen_img_6);
  lv_obj_move_background(c_ui->screen_img_7);
  lv_obj_move_background(c_ui->screen_img_8);

  memset(hole,0,sizeof(hole));
  memset(moles_hited_flag,0,sizeof(hole));
  j = 0;
  current_moles_num = 0;
  current_game_time = 0;
  game_times_up_flag = 0;
  game_speed = 0;
  game_time = 0;
  hit_moles_num = 0;
  run_moles_num = 0;
}

void game_play()
{
  reset_all();

  game_speed = lv_slider_get_value(c_ui->screen_slider_1);
  game_time = lv_slider_get_value(c_ui->screen_slider_2);

  current_game_time = 0;

  lv_timer_t * moles_appear_timer = lv_timer_create(Moles_appear_event_handler, game_speed*40, NULL);
  lv_timer_t * game_time_counter_timer = lv_timer_create(game_times_counter_event_handler, 1000, NULL);
}

void custom_init(lv_ui *ui)
{
    /* Add your codes here */
    c_ui = ui;
}
