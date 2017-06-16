// <<BEGIN-copyright>>
// 
//                 The GNU General Public License (GPL) Version 2, June 1991
// 
// Copyright (c) 2013, Lawrence Livermore National Security, LLC. Produced at the Lawrence 
// Livermore National Laboratory. Written by Ron Soltz (soltz1@llnl.gov), David A. Brown 
// (dbrown@bnl.gov) and Scott Pratt (pratts@pa.msu.edu).
// 
// CODE-CODE-643336 All rights reserved. 
// 
// This file is part of CorAL, Version: 1.17.
// 
// Please see the file LICENSE.TXT in the main directory of this source code distribution.
// 
// This program is free software; you can redistribute it and/or modify it under the terms of 
// the GNU General Public License (as published by the Free Software Foundation) version 2, 
// dated June 1991.
// 
// This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; 
// without even the IMPLIED WARRANTY OF MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
// See the terms and conditions of the GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License along with this program; 
// if not, write to the Free Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, 
// MA 02111-1307 USA
// 
// <<END-copyright>>
#if !defined SPECIAL_FUNC_H
#define SPECIAL_FUNC_H

#include <math.h>
#include <complex>

#include "constants.h"

using namespace std;

typedef complex< double > double_complex;

// Gamma function and friends
double_complex Gamma(double_complex z);
double LnGamma(double xx);
double Gamma(double xx);
double Factorial(int n);
double BinomialCoeff(int n, int k);
double LnFactorial(int n);
double IncGammaP(double a, double x);
double IncGammaQ(double a, double x);

// Error function and friends
double Erf(double x);
double Erfc(double x);
double Daw(double x);
double Erfi(double x);

// Probability distributions
double Chi2ProbDist(double z, int n);
#endif
