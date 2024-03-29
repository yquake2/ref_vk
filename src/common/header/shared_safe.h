/*
 * Copyright (C) 1997-2001 Id Software, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or (at
 * your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 * 02111-1307, USA.
 *
 * =======================================================================
 *
 * Updated prototypes of shared functions and definitions
 *
 * =======================================================================
 */

#ifndef COMMON_SHARED_SAFE_H
#define COMMON_SHARED_SAFE_H

#include "shared.h"

// Not exported by default but not static
float Q_fabs(float f);
int BoxOnPlaneSide2(vec3_t emins, vec3_t emaxs, struct cplane_s *p);
short ShortSwap(short l);
short ShortNoSwap(short l);
int LongSwap(int l);
int LongNoSwap(int l);
float FloatSwap(float f);
float FloatNoSwap(float f);

/*
 * TODO: Sync with yquake
 */
qboolean File_Filtered(const char *name, const char *filter, char sepator);

#endif // COMMON_SHARED_SAFE_H
