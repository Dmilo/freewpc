/*
 * Copyright 2006 by Brian Dominy <brian@oddchange.com>
 *
 * This file is part of FreeWPC.
 *
 * FreeWPC is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * FreeWPC is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with FreeWPC; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifndef _MACH_LAMP_H
#define _MACH_LAMP_H

#define GI_LOWER_LEFT			TRIAC_GI_STRING(0)
#define GI_POWERFIELD			TRIAC_GI_STRING(1)
#define GI_CLOCK					TRIAC_GI_STRING(2)
#define GI_MYSTERY				TRIAC_GI_STRING(3)
#define GI_LOWER_RIGHT			TRIAC_GI_STRING(4)

/* Note: Visual Pinball has a bug where the "GUMBALL LANE"
 * lamp lights in place of "RIGHT SPIRAL". */

#define LM_PANEL_CAMERA			MAKE_LAMP(1,1)
#define LM_PANEL_HH				MAKE_LAMP(1,2)
#define LM_PANEL_CLOCK_CHAOS	MAKE_LAMP(1,3)
#define LM_PANEL_SUPER_SKILL	MAKE_LAMP(1,4)
#define LM_PANEL_FAST_LOCK		MAKE_LAMP(1,5)
#define LM_PANEL_GUMBALL		MAKE_LAMP(1,6)
#define LM_PANEL_TSM				MAKE_LAMP(1,7)
#define LM_PANEL_EB				MAKE_LAMP(1,8)

#define LM_LOCK2					MAKE_LAMP(2,1)
#define LM_PANEL_GREED			MAKE_LAMP(2,2)
#define LM_PANEL_10M				MAKE_LAMP(2,3)
#define LM_PANEL_BATTLE_POWER MAKE_LAMP(2,4)
#define LM_PANEL_SPIRAL			MAKE_LAMP(2,5)
#define LM_PANEL_CLOCK_MIL		MAKE_LAMP(2,6)
#define LM_PANEL_SUPER_SLOT	MAKE_LAMP(2,7)
#define LM_BALL					MAKE_LAMP(2,8)

#define LM_LEFT_OUTLANE			MAKE_LAMP(3,1)
#define LM_LOCK1					MAKE_LAMP(3,2)
#define LM_LEFT_INLANE1			MAKE_LAMP(3,3)
#define LM_PANEL_LITZ			MAKE_LAMP(3,4)
#define LM_LEFT_INLANE2			MAKE_LAMP(3,5)
#define LM_GUM						MAKE_LAMP(3,6)
#define LM_LL_5M					MAKE_LAMP(3,7)
#define LM_DEAD_END				MAKE_LAMP(3,8)

#define LM_SPIRAL_2M				MAKE_LAMP(4,1)
#define LM_SPIRAL_3M				MAKE_LAMP(4,2)
#define LM_SPIRAL_4M				MAKE_LAMP(4,3)
#define LM_SPIRAL_5M				MAKE_LAMP(4,4)
#define LM_SPIRAL_10M			MAKE_LAMP(4,5)
#define LM_SPIRAL_EB				MAKE_LAMP(4,6)
#define LM_SHOOT_AGAIN			MAKE_LAMP(4,7)
#define LM_RIGHT_INLANE			MAKE_LAMP(4,8)

#define LM_BONUS_X				MAKE_LAMP(5,1)
#define LM_MULTIBALL				MAKE_LAMP(5,2)
#define LM_SUPER_SKILL			MAKE_LAMP(5,3)
#define LM_LEFT_POWERBALL		MAKE_LAMP(5,4)
#define LM_CAMERA					MAKE_LAMP(5,5)
#define LM_RAMP_BATTLE			MAKE_LAMP(5,6)
#define LM_LOCK_EB				MAKE_LAMP(5,7)
#define LM_LOCK_ARROW			MAKE_LAMP(5,8)

#define LM_LEFT_JET				MAKE_LAMP(6,1)
#define LM_LOWER_JET				MAKE_LAMP(6,2)
#define LM_RIGHT_JET				MAKE_LAMP(6,3)
#define LM_ML_5M					MAKE_LAMP(6,4)
#define LM_UL_5M					MAKE_LAMP(6,5)
#define LM_RIGHT_OUTLANE 		MAKE_LAMP(6,6)
#define LM_RIGHT_POWERBALL		MAKE_LAMP(6,7)
#define LM_RIGHT_SPIRAL			MAKE_LAMP(6,8)

#define LM_LR_5M					MAKE_LAMP(7,1)
#define LM_MR1_5M					MAKE_LAMP(7,2)
#define LM_MR2_5M					MAKE_LAMP(7,3)
#define LM_POWER_PAYOFF			MAKE_LAMP(7,4)
#define LM_UR_5M					MAKE_LAMP(7,5)
#define LM_MPF_500K				MAKE_LAMP(7,6)
#define LM_MPF_750K				MAKE_LAMP(7,7)
#define LM_MPF_1M					MAKE_LAMP(7,8)

#define LM_LEFT_SPIRAL			MAKE_LAMP(8,1)
#define LM_CLOCK_MILLIONS		MAKE_LAMP(8,2)
#define LM_PIANO_PANEL			MAKE_LAMP(8,3)
#define LM_PIANO_JACKPOT		MAKE_LAMP(8,4)
#define LM_SLOT_MACHINE			MAKE_LAMP(8,5)
#define LM_GUMBALL_LANE			MAKE_LAMP(8,6)
#define LM_BUYIN_BUTTON			MAKE_LAMP(8,7)
#define LM_START_BUTTON			MAKE_LAMP(8,8)

/* Define lampsets */

#define LMSET_DOOR_PANEL_AWARDS \
	LM_PANEL_TSM, LM_PANEL_EB, LM_PANEL_SUPER_SLOT, \
	LM_PANEL_CLOCK_MIL, \
	LM_PANEL_SPIRAL, \
	LM_PANEL_BATTLE_POWER, \
	LM_PANEL_10M, \
	LM_PANEL_GREED, LM_PANEL_CAMERA, LM_PANEL_HH, \
	LM_PANEL_CLOCK_CHAOS, \
	LM_PANEL_SUPER_SKILL, \
	LM_PANEL_FAST_LOCK, \
	LM_PANEL_GUMBALL

#define LMSET_DOOR_PANELS_AND_HANDLE \
	LMSET_DOOR_PANEL_AWARDS, LM_PANEL_LITZ

#define LMSET_DOOR_LOCKS			LM_LOCK1, LM_LOCK2

#define LMSET_DOOR_GUMBALL 		LM_GUM, LM_BALL

#define LMSET_LEFT_RAMP_AWARDS	LM_BONUS_X, LM_MULTIBALL, LM_SUPER_SKILL

#define LMSET_LOCK_AWARDS			LM_LOCK_ARROW, LM_LOCK_EB

#define LMSET_PIANO_AWARDS			LM_PIANO_PANEL, LM_PIANO_JACKPOT

#define LMSET_GREED_TARGETS \
	LM_LL_5M, LM_ML_5M, LM_UL_5M, LM_UR_5M, LM_MR2_5M, LM_MR1_5M, LM_LR_5M

#define LMSET_POWERFIELD_VALUES	LM_MPF_500K, LM_MPF_750K, LM_MPF_1M

#define LMSET_JETS					LM_LEFT_JET, LM_RIGHT_JET, LM_LOWER_JET

#define LMSET_LOWER_LANES \
	LM_LEFT_OUTLANE, LM_LEFT_INLANE1, LM_LEFT_INLANE2, LM_RIGHT_INLANE, \
	LM_RIGHT_OUTLANE

#define LMSET_SPIRAL_AWARDS \
	LM_SPIRAL_2M, LM_SPIRAL_3M, LM_SPIRAL_4M, \
	LM_SPIRAL_5M, LM_SPIRAL_10M, LM_SPIRAL_EB

#define LMSET_AMODE_ALL \
	LMSET_DOOR_PANELS_AND_HANDLE, \
	LMSET_DOOR_LOCKS, \
	LMSET_DOOR_GUMBALL, \
	LMSET_SPIRAL_AWARDS, \
	LMSET_LOWER_LANES, \
	LMSET_JETS, \
	LMSET_POWERFIELD_VALUES, \
	LM_LEFT_SPIRAL, LM_LEFT_POWERBALL, \
	LMSET_LEFT_RAMP_AWARDS, \
	LM_RAMP_BATTLE, \
	LMSET_LOCK_AWARDS, \
	LMSET_PIANO_AWARDS, \
	LM_RIGHT_SPIRAL, \
	LM_RIGHT_POWERBALL, \
	LMSET_GREED_TARGETS, \
	LM_DEAD_END, \
	LM_SLOT_MACHINE, \
	LM_CAMERA

#define LMSET_AMODE_RAND 22,21,2,58,13,15,49,12,38,54,59,42,37,39,40,28,45,17,4,10,26,52,11,53,34,43,50,56,3,44,41,23,46,14,55,31,18,32,16,9,61,8,1,19,0,24,35,29,27,6,7,20,25,33,5,48 

#endif /* _MACH_LAMP_H */
