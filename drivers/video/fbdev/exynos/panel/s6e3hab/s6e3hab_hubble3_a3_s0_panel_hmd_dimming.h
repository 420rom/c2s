/*
 * linux/drivers/video/fbdev/exynos/panel/s6e3hab/s6e3hab_hubble3_a3_s0_panel_hmd_dimming.h
 *
 * Header file for S6E3HAB Dimming Driver
 *
 * Copyright (c) 2016 Samsung Electronics
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __S6E3HAB_HUBBLE3_A3_S0_PANEL_HMD_DIMMING_H__
#define __S6E3HAB_HUBBLE3_A3_S0_PANEL_HMD_DIMMING_H__
#include "../dimming.h"
#include "../panel_dimming.h"
#include "s6e3hab_dimming.h"

/*
 * PANEL INFORMATION
 * LDI : S6E3HAB
 * PANEL : HUBBLE3_A3_S0
 */
static s32 hubble3_a3_s0_hmd_ctbl10nit[S6E3HAB_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -5, 0, -2, -14, 3, -6, -10, 3, -8, -3, 2, -4, -5, 2, -6, -2, 1, -3, 0, 0, 0, 0, 0, -1, 0, 0, -2 };
static s32 hubble3_a3_s0_hmd_ctbl11nit[S6E3HAB_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -2, 0, -1, -16, 3, -6, -8, 3, -7, -4, 2, -5, -4, 2, -5, -1, 1, -2, 0, 0, 0, 0, 0, 0, 0, 0, -1 };
static s32 hubble3_a3_s0_hmd_ctbl12nit[S6E3HAB_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -3, 0, -2, -20, 4, -9, -4, 1, -4, -4, 2, -6, -4, 2, -4, -2, 1, -2, 0, 0, 0, 0, 0, -1, 1, 0, 0 };
static s32 hubble3_a3_s0_hmd_ctbl13nit[S6E3HAB_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -7, 0, -2, -18, 4, -8, -6, 2, -6, -4, 2, -5, -4, 2, -4, -2, 0, -2, -1, 0, 0, 0, 0, -1, 1, 0, -1 };
static s32 hubble3_a3_s0_hmd_ctbl14nit[S6E3HAB_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -3, 1, -2, -20, 4, -8, -5, 2, -6, -5, 2, -5, -4, 1, -4, -1, 1, -2, -1, 0, -1, 0, 0, 0, 0, 0, -1 };
static s32 hubble3_a3_s0_hmd_ctbl15nit[S6E3HAB_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -4, 0, -2, -20, 4, -9, -5, 2, -6, -3, 2, -4, -4, 1, -4, -2, 0, -2, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
static s32 hubble3_a3_s0_hmd_ctbl16nit[S6E3HAB_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -6, 0, -2, -20, 4, -9, -5, 3, -6, -5, 2, -6, -4, 1, -4, -2, 0, -2, 0, 0, 0, -1, 0, -1, 1, 0, 0 };
static s32 hubble3_a3_s0_hmd_ctbl17nit[S6E3HAB_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -6, 1, -3, -17, 3, -8, -4, 2, -6, -6, 2, -6, -3, 1, -3, -2, 0, -2, -1, 0, 0, 0, 0, -1, 1, 0, 0 };
static s32 hubble3_a3_s0_hmd_ctbl19nit[S6E3HAB_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -5, 0, -2, -21, 5, -10, -2, 2, -4, -5, 2, -6, -3, 1, -3, -2, 0, -1, 0, 0, -1, 0, 0, 0, 2, 0, 0 };
static s32 hubble3_a3_s0_hmd_ctbl20nit[S6E3HAB_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -4, 0, -2, -21, 5, -11, -2, 2, -4, -5, 2, -6, -3, 1, -3, -1, 0, -1, -1, 0, -1, 0, 0, 0, 2, 0, 1 };
static s32 hubble3_a3_s0_hmd_ctbl21nit[S6E3HAB_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -9, 1, -3, -15, 4, -8, -1, 2, -4, -6, 2, -6, -3, 1, -3, -2, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0 };
static s32 hubble3_a3_s0_hmd_ctbl22nit[S6E3HAB_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -8, 1, -3, -14, 4, -8, -3, 2, -5, -4, 2, -5, -5, 1, -4, -2, 0, -1, 0, 0, -1, 1, 0, 0, 1, 0, 1 };
static s32 hubble3_a3_s0_hmd_ctbl23nit[S6E3HAB_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -11, 1, -4, -15, 4, -9, -3, 2, -5, -3, 2, -4, -4, 1, -4, -1, 0, -1, -1, 0, -1, 1, 0, 0, 2, 0, 1 };
static s32 hubble3_a3_s0_hmd_ctbl25nit[S6E3HAB_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -10, 1, -4, -16, 4, -8, -2, 2, -4, -5, 2, -5, -3, 1, -3, 0, 0, 0, -1, 0, -2, 0, 0, 0, 1, 0, 1 };
static s32 hubble3_a3_s0_hmd_ctbl27nit[S6E3HAB_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -11, 1, -4, -14, 4, -9, -2, 2, -4, -4, 1, -4, -2, 1, -2, -1, 0, -2, 0, 0, 0, 0, 0, -1, 1, 0, 2 };
static s32 hubble3_a3_s0_hmd_ctbl29nit[S6E3HAB_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -9, 1, -4, -16, 4, -9, -4, 2, -5, -4, 1, -4, -3, 1, -2, -1, 0, -1, 0, 0, -2, 0, 0, 0, 0, 0, 1 };
static s32 hubble3_a3_s0_hmd_ctbl31nit[S6E3HAB_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -11, 1, -4, -14, 4, -8, -4, 2, -5, -4, 1, -4, -3, 1, -3, 0, 0, 0, 0, 0, -1, 0, 0, 0, 1, 0, 2 };
static s32 hubble3_a3_s0_hmd_ctbl33nit[S6E3HAB_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -10, 2, -4, -15, 4, -9, -3, 2, -4, -3, 2, -4, -3, 1, -3, -1, 0, -1, 0, 0, -1, 1, 0, 0, 1, 0, 2 };
static s32 hubble3_a3_s0_hmd_ctbl35nit[S6E3HAB_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -9, 1, -4, -16, 4, -10, -4, 2, -5, -3, 2, -4, -3, 1, -2, 0, 0, -1, 0, 0, -1, 0, 0, 0, 2, 0, 3 };
static s32 hubble3_a3_s0_hmd_ctbl37nit[S6E3HAB_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -13, 1, -4, -10, 4, -9, -4, 2, -5, -3, 1, -3, -3, 1, -2, 0, 0, -1, 0, 0, -2, 0, 0, 0, 1, 0, 3 };
static s32 hubble3_a3_s0_hmd_ctbl39nit[S6E3HAB_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -8, 1, -3, -13, 4, -10, -4, 2, -6, -2, 1, -2, -3, 1, -2, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 2 };
static s32 hubble3_a3_s0_hmd_ctbl41nit[S6E3HAB_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -7, 1, -3, -12, 4, -9, -4, 2, -5, -3, 1, -3, -3, 1, -2, 0, 0, -1, 0, 0, 0, 0, 0, -1, 1, 0, 2 };
static s32 hubble3_a3_s0_hmd_ctbl44nit[S6E3HAB_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -9, 1, -4, -8, 4, -8, -3, 2, -4, -3, 1, -3, -3, 1, -3, 0, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 2 };
static s32 hubble3_a3_s0_hmd_ctbl47nit[S6E3HAB_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -7, 2, -4, -9, 3, -8, -4, 2, -5, -2, 1, -3, -3, 0, -2, 0, 0, -1, 0, 0, -1, 0, 0, 0, 1, 0, 2 };
static s32 hubble3_a3_s0_hmd_ctbl50nit[S6E3HAB_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -8, 1, -4, -10, 4, -9, -3, 2, -4, -4, 1, -4, -2, 0, -2, 0, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 2 };
static s32 hubble3_a3_s0_hmd_ctbl53nit[S6E3HAB_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -8, 2, -4, -8, 3, -8, -3, 2, -4, -4, 1, -4, -2, 0, -1, -1, 0, -2, 0, 0, 0, 0, 0, 0, 1, 0, 2 };
static s32 hubble3_a3_s0_hmd_ctbl56nit[S6E3HAB_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -8, 1, -4, -9, 4, -8, -3, 2, -4, -4, 1, -4, -2, 0, -2, 0, 0, -2, 0, 0, 0, 0, 0, 0, 1, 0, 2 };
static s32 hubble3_a3_s0_hmd_ctbl60nit[S6E3HAB_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -10, 1, -4, -7, 4, -8, -3, 2, -4, -3, 1, -3, -2, 0, -1, -1, 0, -2, 0, 0, 0, 0, 0, 0, 2, 0, 3 };
static s32 hubble3_a3_s0_hmd_ctbl64nit[S6E3HAB_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -8, 1, -4, -8, 4, -8, -3, 2, -4, -3, 1, -3, -1, 0, -2, 0, 0, -1, 0, 0, -1, 0, 0, 0, 2, 0, 3 };
static s32 hubble3_a3_s0_hmd_ctbl68nit[S6E3HAB_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -7, 1, -4, -7, 3, -8, -4, 1, -4, -3, 1, -3, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, 0, 2 };
static s32 hubble3_a3_s0_hmd_ctbl72nit[S6E3HAB_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -5, 1, -4, -8, 4, -8, -4, 1, -4, -2, 1, -2, -2, 0, -2, 0, 0, -2, 0, 0, 0, 0, 0, 0, 2, 0, 2 };
static s32 hubble3_a3_s0_hmd_ctbl77nit[S6E3HAB_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -7, 1, -4, -4, 3, -7, -2, 1, -3, -2, 1, -2, -1, 0, -1, 0, 0, -2, 0, 0, 0, 0, 0, 0, 2, 0, 2 };
static s32 hubble3_a3_s0_hmd_ctbl82nit[S6E3HAB_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -6, 1, -4, -3, 3, -6, -3, 1, -4, -2, 1, -2, -2, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 2 };
static s32 hubble3_a3_s0_hmd_ctbl87nit[S6E3HAB_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -5, 1, -4, -4, 3, -7, -2, 1, -3, -2, 0, -2, -1, 0, -1, 1, 0, -1, 0, 0, 0, 0, 0, 0, 2, 0, 3 };
static s32 hubble3_a3_s0_hmd_ctbl93nit[S6E3HAB_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -7, 1, -4, -4, 3, -8, -2, 1, -3, -2, 0, -2, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 2, 0, 2 };
static s32 hubble3_a3_s0_hmd_ctbl99nit[S6E3HAB_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -7, 2, -4, -2, 3, -6, -2, 1, -3, -2, 0, -2, -2, 0, -2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 2 };
static s32 hubble3_a3_s0_hmd_ctbl105nit[S6E3HAB_NR_TP*3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -5, 2, -4, -3, 2, -6, -2, 1, -3, -3, 0, -2, -1, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 2 };

static s32 hubble3_a3_s0_hmd_rtbl10nit[S6E3HAB_NR_TP] = { 0, 0, 0, 10, 10, 7, 7, 5, 2, 0, -1, 0 };
static s32 hubble3_a3_s0_hmd_rtbl11nit[S6E3HAB_NR_TP] = { 0, 0, 0, 10, 10, 7, 6, 4, 1, -1, -1, 0 };
static s32 hubble3_a3_s0_hmd_rtbl12nit[S6E3HAB_NR_TP] = { 0, 0, 0, 10, 9, 7, 6, 4, 2, 0, -2, 0 };
static s32 hubble3_a3_s0_hmd_rtbl13nit[S6E3HAB_NR_TP] = { 0, 0, 0, 10, 9, 7, 6, 4, 2, 0, -2, 0 };
static s32 hubble3_a3_s0_hmd_rtbl14nit[S6E3HAB_NR_TP] = { 0, 0, 0, 10, 9, 7, 6, 5, 3, 0, -3, 0 };
static s32 hubble3_a3_s0_hmd_rtbl15nit[S6E3HAB_NR_TP] = { 0, 0, 0, 10, 9, 8, 6, 4, 2, 0, -3, 0 };
static s32 hubble3_a3_s0_hmd_rtbl16nit[S6E3HAB_NR_TP] = { 0, 0, 0, 10, 9, 7, 6, 4, 1, 0, -3, 0 };
static s32 hubble3_a3_s0_hmd_rtbl17nit[S6E3HAB_NR_TP] = { 0, 0, 0, 10, 10, 7, 5, 5, 2, 0, -3, 0 };
static s32 hubble3_a3_s0_hmd_rtbl19nit[S6E3HAB_NR_TP] = { 0, 0, 0, 9, 8, 7, 5, 5, 2, -1, -3, 0 };
static s32 hubble3_a3_s0_hmd_rtbl20nit[S6E3HAB_NR_TP] = { 0, 0, 0, 9, 8, 7, 5, 4, 1, -1, -3, 0 };
static s32 hubble3_a3_s0_hmd_rtbl21nit[S6E3HAB_NR_TP] = { 0, 0, 0, 9, 9, 7, 5, 4, 1, -1, -2, 0 };
static s32 hubble3_a3_s0_hmd_rtbl22nit[S6E3HAB_NR_TP] = { 0, 0, 0, 9, 9, 7, 5, 4, 1, -1, -3, 0 };
static s32 hubble3_a3_s0_hmd_rtbl23nit[S6E3HAB_NR_TP] = { 0, 0, 0, 9, 9, 6, 5, 3, 0, -2, -3, 0 };
static s32 hubble3_a3_s0_hmd_rtbl25nit[S6E3HAB_NR_TP] = { 0, 0, 0, 9, 9, 7, 5, 3, 2, -1, -1, 0 };
static s32 hubble3_a3_s0_hmd_rtbl27nit[S6E3HAB_NR_TP] = { 0, 0, 0, 9, 8, 6, 5, 4, 0, -1, -2, 0 };
static s32 hubble3_a3_s0_hmd_rtbl29nit[S6E3HAB_NR_TP] = { 0, 0, 0, 9, 8, 6, 5, 4, 2, -1, -2, 0 };
static s32 hubble3_a3_s0_hmd_rtbl31nit[S6E3HAB_NR_TP] = { 0, 0, 0, 9, 8, 6, 5, 3, 2, -2, -1, 0 };
static s32 hubble3_a3_s0_hmd_rtbl33nit[S6E3HAB_NR_TP] = { 0, 0, 0, 8, 8, 6, 5, 3, 1, -1, -1, 0 };
static s32 hubble3_a3_s0_hmd_rtbl35nit[S6E3HAB_NR_TP] = { 0, 0, 0, 8, 8, 6, 5, 3, 2, -1, -1, 0 };
static s32 hubble3_a3_s0_hmd_rtbl37nit[S6E3HAB_NR_TP] = { 0, 0, 0, 8, 9, 6, 5, 3, 2, 0, -2, 0 };
static s32 hubble3_a3_s0_hmd_rtbl39nit[S6E3HAB_NR_TP] = { 0, 0, 0, 9, 8, 5, 5, 4, 2, 0, -1, 0 };
static s32 hubble3_a3_s0_hmd_rtbl41nit[S6E3HAB_NR_TP] = { 0, 0, 0, 9, 8, 6, 6, 4, 2, 1, -1, 0 };
static s32 hubble3_a3_s0_hmd_rtbl44nit[S6E3HAB_NR_TP] = { 0, 0, 0, 9, 9, 6, 6, 5, 4, 2, -1, 0 };
static s32 hubble3_a3_s0_hmd_rtbl47nit[S6E3HAB_NR_TP] = { 0, 0, 0, 9, 9, 6, 5, 4, 3, 1, -2, 0 };
static s32 hubble3_a3_s0_hmd_rtbl50nit[S6E3HAB_NR_TP] = { 0, 0, 0, 9, 8, 6, 6, 5, 4, 2, -1, 0 };
static s32 hubble3_a3_s0_hmd_rtbl53nit[S6E3HAB_NR_TP] = { 0, 0, 0, 8, 8, 6, 5, 4, 3, 1, -1, 0 };
static s32 hubble3_a3_s0_hmd_rtbl56nit[S6E3HAB_NR_TP] = { 0, 0, 0, 8, 8, 6, 5, 4, 3, 2, -2, 0 };
static s32 hubble3_a3_s0_hmd_rtbl60nit[S6E3HAB_NR_TP] = { 0, 0, 0, 8, 8, 6, 6, 4, 4, 3, -1, 0 };
static s32 hubble3_a3_s0_hmd_rtbl64nit[S6E3HAB_NR_TP] = { 0, 0, 0, 8, 8, 6, 5, 4, 4, 2, -1, 0 };
static s32 hubble3_a3_s0_hmd_rtbl68nit[S6E3HAB_NR_TP] = { 0, 0, 0, 9, 8, 6, 5, 5, 4, 4, 0, 0 };
static s32 hubble3_a3_s0_hmd_rtbl72nit[S6E3HAB_NR_TP] = { 0, 0, 0, 9, 8, 6, 6, 5, 5, 4, 1, 0 };
static s32 hubble3_a3_s0_hmd_rtbl77nit[S6E3HAB_NR_TP] = { 0, 0, 0, 5, 5, 4, 3, 3, 2, 1, -1, 0 };
static s32 hubble3_a3_s0_hmd_rtbl82nit[S6E3HAB_NR_TP] = { 0, 0, 0, 5, 5, 4, 3, 2, 2, 1, -2, 0 };
static s32 hubble3_a3_s0_hmd_rtbl87nit[S6E3HAB_NR_TP] = { 0, 0, 0, 5, 5, 3, 3, 2, 2, 1, -2, 0 };
static s32 hubble3_a3_s0_hmd_rtbl93nit[S6E3HAB_NR_TP] = { 0, 0, 0, 5, 5, 4, 3, 3, 3, 1, -1, 0 };
static s32 hubble3_a3_s0_hmd_rtbl99nit[S6E3HAB_NR_TP] = { 0, 0, 0, 5, 5, 3, 3, 3, 3, 3, 0, 0 };
static s32 hubble3_a3_s0_hmd_rtbl105nit[S6E3HAB_NR_TP] = { 0, 0, 0, 5, 5, 4, 4, 3, 3, 3, 1, 0 };

static struct dimming_lut hubble3_a3_s0_hmd_dimming_lut[] = {
	DIM_LUT_V0_INIT(10, 45, GAMMA_2_15, hubble3_a3_s0_hmd_rtbl10nit, hubble3_a3_s0_hmd_ctbl10nit),
	DIM_LUT_V0_INIT(11, 49, GAMMA_2_15, hubble3_a3_s0_hmd_rtbl11nit, hubble3_a3_s0_hmd_ctbl11nit),
	DIM_LUT_V0_INIT(12, 54, GAMMA_2_15, hubble3_a3_s0_hmd_rtbl12nit, hubble3_a3_s0_hmd_ctbl12nit),
	DIM_LUT_V0_INIT(13, 58, GAMMA_2_15, hubble3_a3_s0_hmd_rtbl13nit, hubble3_a3_s0_hmd_ctbl13nit),
	DIM_LUT_V0_INIT(14, 62, GAMMA_2_15, hubble3_a3_s0_hmd_rtbl14nit, hubble3_a3_s0_hmd_ctbl14nit),
	DIM_LUT_V0_INIT(15, 66, GAMMA_2_15, hubble3_a3_s0_hmd_rtbl15nit, hubble3_a3_s0_hmd_ctbl15nit),
	DIM_LUT_V0_INIT(16, 71, GAMMA_2_15, hubble3_a3_s0_hmd_rtbl16nit, hubble3_a3_s0_hmd_ctbl16nit),
	DIM_LUT_V0_INIT(17, 76, GAMMA_2_15, hubble3_a3_s0_hmd_rtbl17nit, hubble3_a3_s0_hmd_ctbl17nit),
	DIM_LUT_V0_INIT(19, 84, GAMMA_2_15, hubble3_a3_s0_hmd_rtbl19nit, hubble3_a3_s0_hmd_ctbl19nit),
	DIM_LUT_V0_INIT(20, 88, GAMMA_2_15, hubble3_a3_s0_hmd_rtbl20nit, hubble3_a3_s0_hmd_ctbl20nit),
	DIM_LUT_V0_INIT(21, 92, GAMMA_2_15, hubble3_a3_s0_hmd_rtbl21nit, hubble3_a3_s0_hmd_ctbl21nit),
	DIM_LUT_V0_INIT(22, 96, GAMMA_2_15, hubble3_a3_s0_hmd_rtbl22nit, hubble3_a3_s0_hmd_ctbl22nit),
	DIM_LUT_V0_INIT(23, 101, GAMMA_2_15, hubble3_a3_s0_hmd_rtbl23nit, hubble3_a3_s0_hmd_ctbl23nit),
	DIM_LUT_V0_INIT(25, 108, GAMMA_2_15, hubble3_a3_s0_hmd_rtbl25nit, hubble3_a3_s0_hmd_ctbl25nit),
	DIM_LUT_V0_INIT(27, 116, GAMMA_2_15, hubble3_a3_s0_hmd_rtbl27nit, hubble3_a3_s0_hmd_ctbl27nit),
	DIM_LUT_V0_INIT(29, 125, GAMMA_2_15, hubble3_a3_s0_hmd_rtbl29nit, hubble3_a3_s0_hmd_ctbl29nit),
	DIM_LUT_V0_INIT(31, 130, GAMMA_2_15, hubble3_a3_s0_hmd_rtbl31nit, hubble3_a3_s0_hmd_ctbl31nit),
	DIM_LUT_V0_INIT(33, 139, GAMMA_2_15, hubble3_a3_s0_hmd_rtbl33nit, hubble3_a3_s0_hmd_ctbl33nit),
	DIM_LUT_V0_INIT(35, 146, GAMMA_2_15, hubble3_a3_s0_hmd_rtbl35nit, hubble3_a3_s0_hmd_ctbl35nit),
	DIM_LUT_V0_INIT(37, 155, GAMMA_2_15, hubble3_a3_s0_hmd_rtbl37nit, hubble3_a3_s0_hmd_ctbl37nit),
	DIM_LUT_V0_INIT(39, 164, GAMMA_2_15, hubble3_a3_s0_hmd_rtbl39nit, hubble3_a3_s0_hmd_ctbl39nit),
	DIM_LUT_V0_INIT(41, 173, GAMMA_2_15, hubble3_a3_s0_hmd_rtbl41nit, hubble3_a3_s0_hmd_ctbl41nit),
	DIM_LUT_V0_INIT(44, 183, GAMMA_2_15, hubble3_a3_s0_hmd_rtbl44nit, hubble3_a3_s0_hmd_ctbl44nit),
	DIM_LUT_V0_INIT(47, 194, GAMMA_2_15, hubble3_a3_s0_hmd_rtbl47nit, hubble3_a3_s0_hmd_ctbl47nit),
	DIM_LUT_V0_INIT(50, 206, GAMMA_2_15, hubble3_a3_s0_hmd_rtbl50nit, hubble3_a3_s0_hmd_ctbl50nit),
	DIM_LUT_V0_INIT(53, 215, GAMMA_2_15, hubble3_a3_s0_hmd_rtbl53nit, hubble3_a3_s0_hmd_ctbl53nit),
	DIM_LUT_V0_INIT(56, 228, GAMMA_2_15, hubble3_a3_s0_hmd_rtbl56nit, hubble3_a3_s0_hmd_ctbl56nit),
	DIM_LUT_V0_INIT(60, 242, GAMMA_2_15, hubble3_a3_s0_hmd_rtbl60nit, hubble3_a3_s0_hmd_ctbl60nit),
	DIM_LUT_V0_INIT(64, 255, GAMMA_2_15, hubble3_a3_s0_hmd_rtbl64nit, hubble3_a3_s0_hmd_ctbl64nit),
	DIM_LUT_V0_INIT(68, 267, GAMMA_2_15, hubble3_a3_s0_hmd_rtbl68nit, hubble3_a3_s0_hmd_ctbl68nit),
	DIM_LUT_V0_INIT(72, 279, GAMMA_2_15, hubble3_a3_s0_hmd_rtbl72nit, hubble3_a3_s0_hmd_ctbl72nit),
	DIM_LUT_V0_INIT(77, 214, GAMMA_2_15, hubble3_a3_s0_hmd_rtbl77nit, hubble3_a3_s0_hmd_ctbl77nit),
	DIM_LUT_V0_INIT(82, 228, GAMMA_2_15, hubble3_a3_s0_hmd_rtbl82nit, hubble3_a3_s0_hmd_ctbl82nit),
	DIM_LUT_V0_INIT(87, 240, GAMMA_2_15, hubble3_a3_s0_hmd_rtbl87nit, hubble3_a3_s0_hmd_ctbl87nit),
	DIM_LUT_V0_INIT(93, 254, GAMMA_2_15, hubble3_a3_s0_hmd_rtbl93nit, hubble3_a3_s0_hmd_ctbl93nit),
	DIM_LUT_V0_INIT(99, 267, GAMMA_2_15, hubble3_a3_s0_hmd_rtbl99nit, hubble3_a3_s0_hmd_ctbl99nit),
	DIM_LUT_V0_INIT(105, 279, GAMMA_2_15, hubble3_a3_s0_hmd_rtbl105nit, hubble3_a3_s0_hmd_ctbl105nit),
};

static u8 hubble3_a3_s0_hmd_dimming_gamma_table[MAX_S6E3HAB_VRR_DIM][S6E3HAB_HMD_NR_LUMINANCE][S6E3HAB_GAMMA_CMD_CNT - 1];
static u8 hubble3_a3_s0_hmd_dimming_aor_table[MAX_S6E3HAB_VRR_DIM][S6E3HAB_HMD_NR_LUMINANCE][2] = {
	[S6E3HAB_VRR_DIM_60NS] = {
		{ 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 },
		{ 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 },
		{ 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 },
		{ 0x0A, 0x19 }, { 0x08, 0xD6 }, { 0x08, 0xD6 }, { 0x08, 0xD6 }, { 0x08, 0xD6 }, { 0x08, 0xD6 }, { 0x08, 0xD6 },
	},
	[S6E3HAB_VRR_DIM_60HS] = {
		{ 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 },
		{ 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 },
		{ 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 },
		{ 0x0A, 0x19 }, { 0x08, 0xD6 }, { 0x08, 0xD6 }, { 0x08, 0xD6 }, { 0x08, 0xD6 }, { 0x08, 0xD6 }, { 0x08, 0xD6 },
	},
	[S6E3HAB_VRR_DIM_120HS] = {
		{ 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 },
		{ 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 },
		{ 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 }, { 0x0A, 0x19 },
		{ 0x0A, 0x19 }, { 0x08, 0xD6 }, { 0x08, 0xD6 }, { 0x08, 0xD6 }, { 0x08, 0xD6 }, { 0x08, 0xD6 }, { 0x08, 0xD6 },
	},
};

static struct maptbl hubble3_a3_s0_hmd_dimming_param_maptbl[MAX_DIMMING_MAPTBL] = {
	[DIMMING_GAMMA_MAPTBL] = DEFINE_3D_MAPTBL(hubble3_a3_s0_hmd_dimming_gamma_table, init_hmd_gamma_table, getidx_hmd_dimming_maptbl, copy_common_maptbl),
	[DIMMING_AOR_MAPTBL] = DEFINE_3D_MAPTBL(hubble3_a3_s0_hmd_dimming_aor_table, init_hmd_aor_table, getidx_hmd_dimming_maptbl, copy_common_maptbl),
};

static unsigned int hubble3_a3_s0_hmd_brt_tbl[S6E3HAB_HMD_NR_LUMINANCE] = {
	BRT(26), BRT(29), BRT(31), BRT(33), BRT(36), BRT(38), BRT(41), BRT(46), BRT(48), BRT(50),
	BRT(53), BRT(55), BRT(60), BRT(65), BRT(70), BRT(75), BRT(80), BRT(84), BRT(89), BRT(94),
	BRT(99), BRT(106), BRT(114), BRT(121), BRT(128), BRT(135), BRT(145), BRT(155), BRT(165), BRT(174),
	BRT(186), BRT(199), BRT(211), BRT(225), BRT(240), BRT(254), BRT(255),
};

static unsigned int hubble3_a3_s0_hmd_lum_tbl[S6E3HAB_HMD_NR_LUMINANCE] = {
	10, 11, 12, 13, 14, 15, 16, 17, 19, 20,
	21, 22, 23, 25, 27, 29, 31, 33, 35, 37,
	39, 41, 44, 47, 50, 53, 56, 60, 64, 68,
	72, 77, 82, 87, 93, 99, 105,
};

static struct brightness_table s6e3hab_hubble3_a3_s0_panel_hmd_brightness_table = {
	.brt = hubble3_a3_s0_hmd_brt_tbl,
	.sz_brt = ARRAY_SIZE(hubble3_a3_s0_hmd_brt_tbl),
	.lum = hubble3_a3_s0_hmd_lum_tbl,
	.sz_lum = ARRAY_SIZE(hubble3_a3_s0_hmd_lum_tbl),
	.sz_ui_lum = S6E3HAB_HMD_NR_LUMINANCE,
	.sz_hbm_lum = 0,
	.sz_ext_hbm_lum = 0,
	.brt_to_step = hubble3_a3_s0_hmd_brt_tbl,
	.sz_brt_to_step = ARRAY_SIZE(hubble3_a3_s0_hmd_brt_tbl),
};

static struct panel_dimming_info s6e3hab_hubble3_a3_s0_panel_hmd_dimming_info = {
	.name = "s6e3hab_hubble3_a3_s0_hmd",
	.dim_init_info = {
		.name = "s6e3hab_hubble3_a3_s0_hmd",
		.nr_tp = S6E3HAB_NR_TP,
		.tp = s6e3hab_hubble_hmd_tp,
		.nr_luminance = S6E3HAB_HMD_NR_LUMINANCE,
		.vregout = 114085069LL,	/* 6.8 * 2^24 */
		.vref = 16777216LL,	/* 1.0 * 2^24 */
		.bitshift = 24,
		.vt_voltage = {
			0, 24, 48, 72, 96, 120, 144, 168, 192, 216,
			276, 296, 316, 336, 356, 372,
		},
		.v0_voltage = {
			0, 12, 24, 36, 48, 60, 72, 84, 96, 108,
			120, 132, 144, 156, 168, 180,
		},
		.target_luminance = S6E3HAB_HUBBLE_HMD_TARGET_LUMINANCE,
		.target_gamma = 220,
		.dim_lut = hubble3_a3_s0_hmd_dimming_lut,
	},
	.dim_60hz_hs_init_info = {
		.name = "s6e3hab_hubble3_a3_s0_hmd_60hz_hs",
		.nr_tp = S6E3HAB_NR_TP,
		.tp = s6e3hab_hubble_hmd_tp,
		.nr_luminance = S6E3HAB_HMD_NR_LUMINANCE,
		.vregout = 114085069LL, /* 6.8 * 2^24 */
		.vref = 16777216LL, /* 1.0 * 2^24 */
		.bitshift = 24,
		.vt_voltage = {
			0, 24, 48, 72, 96, 120, 144, 168, 192, 216,
			276, 296, 316, 336, 356, 372,
		},
		.v0_voltage = {
			0, 12, 24, 36, 48, 60, 72, 84, 96, 108,
			120, 132, 144, 156, 168, 180,
		},
		.target_luminance = S6E3HAB_HUBBLE_HMD_TARGET_LUMINANCE,
		.target_gamma = 220,
		.dim_lut = hubble3_a3_s0_hmd_dimming_lut,
	},
	.dim_120hz_init_info = {
		.name = "s6e3hab_hubble3_a3_s0_hmd_120hz",
		.nr_tp = S6E3HAB_NR_TP,
		.tp = s6e3hab_hubble_hmd_tp,
		.nr_luminance = S6E3HAB_HMD_NR_LUMINANCE,
		.vregout = 114085069LL,	/* 6.8 * 2^24 */
		.vref = 16777216LL,	/* 1.0 * 2^24 */
		.bitshift = 24,
		.vt_voltage = {
			0, 24, 48, 72, 96, 120, 144, 168, 192, 216,
			276, 296, 316, 336, 356, 372,
		},
		.v0_voltage = {
			0, 12, 24, 36, 48, 60, 72, 84, 96, 108,
			120, 132, 144, 156, 168, 180,
		},
		.target_luminance = S6E3HAB_HUBBLE_HMD_TARGET_LUMINANCE,
		.target_gamma = 220,
		.dim_lut = hubble3_a3_s0_hmd_dimming_lut,
	},
	.target_luminance = S6E3HAB_HUBBLE_HMD_TARGET_LUMINANCE,
	.nr_luminance = S6E3HAB_HMD_NR_LUMINANCE,
	.hbm_target_luminance = -1,
	.nr_hbm_luminance = 0,
	.extend_hbm_target_luminance = -1,
	.nr_extend_hbm_luminance = 0,
	.brt_tbl = &s6e3hab_hubble3_a3_s0_panel_hmd_brightness_table,
	/* dimming parameters */
	.dimming_maptbl = hubble3_a3_s0_hmd_dimming_param_maptbl,
	.dim_flash_on = true,	/* read dim flash when probe or not */
};
#endif /* __S6E3HAB_HUBBLE3_A3_S0_PANEL_HMD_DIMMING_H__ */
