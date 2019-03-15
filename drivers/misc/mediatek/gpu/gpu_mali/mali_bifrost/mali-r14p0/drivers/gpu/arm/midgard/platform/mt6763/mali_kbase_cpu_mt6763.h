/*
 * Copyright (C) 2016 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */
#ifndef _KBASE_CPU_VEXPRESS_H_
#define _KBASE_CPU_VEXPRESS_H_

/**
 * Versatile Express implementation of @ref kbase_cpu_clk_speed_func.
 */
int kbase_get_vexpress_cpu_clock_speed(u32 *cpu_clock);

/**
 * Get the minimum GPU frequency for the attached logic tile
 */
u32 kbase_get_platform_min_freq(void);

/**
 * Get the maximum GPU frequency for the attached logic tile
 */
u32 kbase_get_platform_max_freq(void);

#endif				/* _KBASE_CPU_VEXPRESS_H_ */
