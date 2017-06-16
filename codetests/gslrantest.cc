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
#include "random.h"

using namespace std;

int main(){
  CRandom random(987654321);
  int i,j,n=1000000;
  int ix;
  double x,x2bar=0.0,xbar=0.0;
  //printf("How many? : ");
  //scanf("%d",&n);

  for(i=0;i<n;i++){
    //ix=random.iran(100);
    x=random.gauss();
    xbar+=x;
    x2bar+=x*x;
    //printf("x=%10.7f\n",x);
  }
  xbar=x/double(n);
  x2bar=x2bar/double(n);
  printf("xbar=%10.7f =? 0, x2bar=%g =? 1.0\n",xbar,x2bar);
  
  return 0;
}

