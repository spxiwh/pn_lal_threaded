/*
 * Copyright (c) Ian Harry (2024)
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <complex.h>
#include <sys/types.h>

// lalsuite includes also needed


int XLALSimInspiralTaylorF2AlignedPhasingArray	(
  REAL8Vector ** 	phasingvals,
  REAL8Vector 	mass1,
  REAL8Vector 	mass2,
  REAL8Vector 	chi1,
  REAL8Vector 	chi2,
  REAL8Vector 	lambda1,
  REAL8Vector 	lambda2,
  REAL8Vector 	dquadmon1,
  REAL8Vector 	dquadmon2 
);

void _ThreadedPNFunction(
  double * output_array,
  double * mass1,
  double * mass2,
  double * chi1,
  double * chi2,
  double * lambda1,
  double * lambda2,
  double * dquadmon1,
  double * dquadmon2
)
{
  // Convert the various values into lal structures. DO NOT do any sort of malloc!!

  
  
