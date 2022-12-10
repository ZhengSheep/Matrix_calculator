#include "matrix.h"
#include <iostream>
#include <math.h>
#include <regex>
#include <bits/stdc++.h>
#define pi 3.141592653579
using namespace std;

void display_2order(double a11, double a12, double a21, double a22){
  printf("%-e   ",a11); printf("%-e \n\n",a12); 
  printf("%-e   ",a21); printf("%-e \n\n",a22);
}

void display_3order(double a11, double a12, double a13, double a21, double a22, double a23, double a31, double a32, double a33){
  printf("%-e    ",a11); printf("%-e    ",a12); printf("%-e \n\n",a13); 
  printf("%-e    ",a21); printf("%-e    ",a22); printf("%-e \n\n",a23); 
  printf("%-e    ",a31); printf("%-e    ",a32); printf("%-e \n\n",a33); 
}

void display_4order(double a11, double a12, double a13, double a14, 
double a21, double a22, double a23, double a24,
double a31, double a32, double a33, double a34, 
double a41, double a42, double a43, double a44){
  printf("%-e    ",a11); printf("%-e    ",a12); printf("%-e    ",a13); printf("%-e \n\n",a14); 
  printf("%-e    ",a21); printf("%-e    ",a22); printf("%-e    ",a23); printf("%-e \n\n",a24); 
  printf("%-e    ",a31); printf("%-e    ",a32); printf("%-e    ",a33); printf("%-e \n\n",a34); 
  printf("%-e    ",a41); printf("%-e    ",a42); printf("%-e    ",a43); printf("%-e \n\n",a44); 
}

void display_5order(double a11, double a12, double a13, double a14,double a15, 
double a21, double a22, double a23, double a24, double a25, 
double a31, double a32, double a33, double a34, double a35, 
double a41, double a42, double a43, double a44, double a45,
double a51, double a52, double a53, double a54, double a55){
  printf("%-e   ",a11); printf("%-e   ",a12); printf("%-e   ",a13); printf("%-e   ",a14); printf("%-e \n\n",a15); 
  printf("%-e   ",a21); printf("%-e   ",a22); printf("%-e   ",a23); printf("%-e   ",a24); printf("%-e \n\n",a25); 
  printf("%-e   ",a31); printf("%-e   ",a32); printf("%-e   ",a33); printf("%-e   ",a34); printf("%-e \n\n",a35); 
  printf("%-e   ",a41); printf("%-e   ",a42); printf("%-e   ",a43); printf("%-e   ",a44); printf("%-e \n\n",a45);
  printf("%-e   ",a51); printf("%-e   ",a52); printf("%-e   ",a53); printf("%-e   ",a54); printf("%-e \n\n",a55);
}


void display_6order(double a11, double a12, double a13, double a14,double a15, double a16,
double a21, double a22, double a23, double a24, double a25, double a26,
double a31, double a32, double a33, double a34, double a35, double a36,
double a41, double a42, double a43, double a44, double a45, double a46,
double a51, double a52, double a53, double a54, double a55, double a56,
double a61, double a62, double a63, double a64, double a65, double a66){
  printf("%-e   ",a11); printf("%-e   ",a12); printf("%-e   ",a13); printf("%-e   ",a14); printf("%-e   ",a15); printf("%-e \n\n",a16); 
  printf("%-e   ",a21); printf("%-e   ",a22); printf("%-e   ",a23); printf("%-e   ",a24); printf("%-e   ",a25); printf("%-e \n\n",a26); 
  printf("%-e   ",a31); printf("%-e   ",a32); printf("%-e   ",a33); printf("%-e   ",a34); printf("%-e   ",a35); printf("%-e \n\n",a36); 
  printf("%-e   ",a41); printf("%-e   ",a42); printf("%-e   ",a43); printf("%-e   ",a44); printf("%-e   ",a45); printf("%-e \n\n",a46);
  printf("%-e   ",a51); printf("%-e   ",a52); printf("%-e   ",a53); printf("%-e   ",a54); printf("%-e   ",a55); printf("%-e \n\n",a56);
  printf("%-e   ",a61); printf("%-e   ",a62); printf("%-e   ",a63); printf("%-e   ",a64); printf("%-e   ",a65); printf("%-e \n\n",a66);
}

void input_2order(double &a11, double &a12, double &a21, double &a22){
  cout<<"a11 = "; cin>>a11; cout<<"a12 = "; cin>>a12;
  cout<<"a21 = "; cin>>a21; cout<<"a22 = "; cin>>a22;  
}

void input_3order(double &a11, double &a12, double &a13,
double &a21, double &a22, double &a23,
double &a31, double &a32, double &a33){
  cout<<"a11 = "; cin>>a11; cout<<"a12 = "; cin>>a12; cout<<"a13 = "; cin>>a13;
  cout<<"a21 = "; cin>>a21; cout<<"a22 = "; cin>>a22; cout<<"a23 = "; cin>>a23;
  cout<<"a31 = "; cin>>a31; cout<<"a32 = "; cin>>a32; cout<<"a33 = "; cin>>a33;
}

void input_4order(double &a11, double &a12, double &a13, double &a14, 
double &a21, double &a22, double &a23, double &a24,
double &a31, double &a32, double &a33, double &a34, 
double &a41, double &a42, double &a43, double &a44){
  cout<<"a11 = "; cin>>a11; cout<<"a12 = "; cin>>a12; cout<<"a13 = "; cin>>a13; cout<<"a14 = "; cin>>a14;
  cout<<"a21 = "; cin>>a21; cout<<"a22 = "; cin>>a22; cout<<"a23 = "; cin>>a23; cout<<"a24 = "; cin>>a24;
  cout<<"a31 = "; cin>>a31; cout<<"a32 = "; cin>>a32; cout<<"a33 = "; cin>>a33; cout<<"a34 = "; cin>>a34;
  cout<<"a41 = "; cin>>a41; cout<<"a42 = "; cin>>a42; cout<<"a43 = "; cin>>a43; cout<<"a44 = "; cin>>a44;
}

void input_5order(double &a11, double &a12, double &a13, double &a14, double &a15, 
double &a21, double &a22, double &a23, double &a24, double &a25, 
double &a31, double &a32, double &a33, double &a34, double &a35, 
double &a41, double &a42, double &a43, double &a44, double &a45,
double &a51, double &a52, double &a53, double &a54, double &a55){
  cout<<"a11 = "; cin>>a11; cout<<"a12 = "; cin>>a12; cout<<"a13 = "; cin>>a13; cout<<"a14 = "; cin>>a14; cout<<"a15 = "; cin>>a15;
  cout<<"a21 = "; cin>>a21; cout<<"a22 = "; cin>>a22; cout<<"a23 = "; cin>>a23; cout<<"a24 = "; cin>>a24; cout<<"a25 = "; cin>>a25;
  cout<<"a31 = "; cin>>a31; cout<<"a32 = "; cin>>a32; cout<<"a33 = "; cin>>a33; cout<<"a34 = "; cin>>a34; cout<<"a35 = "; cin>>a35;
  cout<<"a41 = "; cin>>a41; cout<<"a42 = "; cin>>a42; cout<<"a43 = "; cin>>a43; cout<<"a44 = "; cin>>a44; cout<<"a45 = "; cin>>a45;
  cout<<"a51 = "; cin>>a51; cout<<"a52 = "; cin>>a52; cout<<"a53 = "; cin>>a53; cout<<"a54 = "; cin>>a54; cout<<"a55 = "; cin>>a55;
}

void input_6order(double &a11, double &a12, double &a13, double &a14,double &a15, double &a16,
double &a21, double &a22, double &a23, double &a24, double &a25, double &a26,
double &a31, double &a32, double &a33, double &a34, double &a35, double &a36,
double &a41, double &a42, double &a43, double &a44, double &a45, double &a46,
double &a51, double &a52, double &a53, double &a54, double &a55, double &a56,
double &a61, double &a62, double &a63, double &a64, double &a65, double &a66){
  cout<<"a11 = "; cin>>a11; cout<<"a12 = "; cin>>a12; cout<<"a13 = "; cin>>a13; cout<<"a14 = "; cin>>a14; cout<<"a15 = "; cin>>a15; cout<<"a16 = "; cin>>a16;
  cout<<"a21 = "; cin>>a21; cout<<"a22 = "; cin>>a22; cout<<"a23 = "; cin>>a23; cout<<"a24 = "; cin>>a24; cout<<"a25 = "; cin>>a25; cout<<"a26 = "; cin>>a26;
  cout<<"a31 = "; cin>>a31; cout<<"a32 = "; cin>>a32; cout<<"a33 = "; cin>>a33; cout<<"a34 = "; cin>>a34; cout<<"a35 = "; cin>>a35; cout<<"a36 = "; cin>>a36;
  cout<<"a41 = "; cin>>a41; cout<<"a42 = "; cin>>a42; cout<<"a43 = "; cin>>a43; cout<<"a44 = "; cin>>a44; cout<<"a45 = "; cin>>a45; cout<<"a46 = "; cin>>a46;
  cout<<"a51 = "; cin>>a51; cout<<"a52 = "; cin>>a52; cout<<"a53 = "; cin>>a53; cout<<"a54 = "; cin>>a54; cout<<"a55 = "; cin>>a55; cout<<"a56 = "; cin>>a56;
  cout<<"a61 = "; cin>>a61; cout<<"a62 = "; cin>>a62; cout<<"a63 = "; cin>>a63; cout<<"a64 = "; cin>>a64; cout<<"a65 = "; cin>>a65; cout<<"a66 = "; cin>>a66;
}

double determ_2order(double a11, double a12, double a21, double a22){
  double determinant;
  determinant=a11*a22-a12*a21;
  return determinant;
}

double determ_3order(double a11, double a12, double a13,
double a21, double a22, double a23,
double a31, double a32, double a33){
  double determinant;
  double diag1;
  double diag2;
  diag1=a11*a22*a33+a12*a23*a31+a21*a32*a13; // the first calculated diagnal
  diag2=a13*a22*a31+a23*a32*a11+a12*a21*a33; // the second calculated diagnal
  determinant=diag1-diag2;
  return determinant;
}

double determ_4order(double a11, double a12, double a13, double a14, 
double a21, double a22, double a23, double a24,
double a31, double a32, double a33, double a34, 
double a41, double a42, double a43, double a44){
  // use the layout of certain array or colum rather than computing one by one
  // expand around the first array
  double A11, A12, A13, A14;
  double determinant;
  A11=a11*determ_3order(a22, a23, a24, a32, a33, a34, a42, a43, a44);
  A12=-1*a12*determ_3order(a21, a23, a24, a31, a33, a34, a41, a43, a44);
  A13=a13*determ_3order(a21, a22, a24, a31, a32, a34, a41, a42, a44);
  A14=-1*a14*determ_3order(a21, a22, a23, a31, a32, a33, a41, a42, a43);
  determinant=A11+A12+A13+A14;
  return determinant;  
}

double determ_5order(double a11, double a12, double a13, double a14,double a15, 
double a21, double a22, double a23, double a24, double a25, 
double a31, double a32, double a33, double a34, double a35, 
double a41, double a42, double a43, double a44, double a45,
double a51, double a52, double a53, double a54, double a55){
  double A11, A12, A13, A14, A15;
  double determinant;
  A11=a11*determ_4order(a22, a23, a24, a25,
    a32, a33, a34, a35,
    a42, a43, a44, a45,
    a52, a53, a54, a55);
  A12=-1*a12*determ_4order(a21, a23, a24, a25,
    a31, a33, a34, a35,
    a41, a43, a44, a45,
    a51, a53, a54, a55);
  A13=a13*determ_4order(a21, a22, a24, a25,
    a31, a32, a34, a35,
    a41, a42, a44, a45,
    a51, a52, a54, a55);
  A14=-1*a14*determ_4order(a21, a22, a23, a25,
    a31, a32, a33, a35,
    a41, a42, a43, a45,
    a51, a52, a53, a55);
  A15=a15*determ_4order(a21, a22, a23, a24,
    a31, a32, a33, a34,
    a41, a42, a43, a44,
    a51, a52, a53, a54);
  determinant=A11+A12+A13+A14+A15;
  return determinant;
}

double determ_6order(double a11, double a12, double a13, double a14,double a15, double a16,
double a21, double a22, double a23, double a24, double a25, double a26,
double a31, double a32, double a33, double a34, double a35, double a36,
double a41, double a42, double a43, double a44, double a45, double a46,
double a51, double a52, double a53, double a54, double a55, double a56,
double a61, double a62, double a63, double a64, double a65, double a66){
  double A11, A12, A13, A14, A15, A16;
  double determinant;
  A11=a11*determ_5order(a22, a23, a24, a25, a26,
    a32, a33, a34, a35, a36,
    a42, a43, a44, a45, a46,
    a52, a53, a54, a55, a56,
    a62, a63, a64, a65, a66);
  A12=-1*a12*determ_5order(a21 ,a23, a24, a25, a26,
    a31, a33, a34, a35, a36,
    a41, a43, a44, a45, a46,
    a51, a53, a54, a55, a56,
    a61, a63, a64, a65, a66);
  A13=a13*determ_5order(a21, a22 ,a24, a25, a26,
    a31, a32, a34, a35, a36,
    a41, a42, a44, a45, a46,
    a51, a52, a54, a55, a56,
    a61, a62, a64, a65, a66);
  A14=-1*a14*determ_5order(a21, a22, a23, a25, a26,
    a31, a32, a33, a35, a36,
    a41, a42, a43, a45, a46,
    a51, a52, a53, a55, a56,
    a61, a62, a63, a65, a66);
  A15=a15*determ_5order(a21, a22, a23, a24, a26,
    a31, a32, a33, a34, a36,
    a41, a42, a43, a44, a46,
    a51, a52, a53, a54, a56,
    a61, a62, a63, a64, a66);
  A16=-1*a16*determ_5order(a21, a22, a23, a24, a25,
    a31, a32, a33, a34, a35,
    a41, a42, a43, a44, a45,
    a51, a52, a53, a54, a55,
    a61, a62, a63, a64, a65);
  
  determinant=A11+A12+A13+A14+A15+A16;
  return determinant;
// finding the determinant is just a encapsulation of small order determinant to constitute higher order seterminant.
}



double cofactor_2order(int location, double a11, double a12, double a21, double a22){
  double conf;
  switch (location){
    case 11: conf=a22; break;
    case 12: conf=-a12; break;
    case 21: conf=-a21; break;
    case 22: conf=a11; break;
  }
  return conf;
}
void adjoint_2order(double &a11, double &a12, double &a21, double &a22){
  double c11, c12, c21, c22; // the unchanged terms
  c11=a11; c12=a12; c21=a21; c22=a22;
  a11=c22;
  a12=-c12;
  a21=-c21;
  a22=c11;
}
void inverse_2order(double &a11, double &a12, double &a21, double &a22){
  double  determ; 
  determ=determ_2order(a11, a12, a21, a22);
  adjoint_2order(a11, a12, a21, a22);  
  a11=a11/determ;
  a12=a12/determ;
  a21=a21/determ;
  a22=a22/determ;
}




double cofactor_3order(int location, //remaint have positive and negative sign
double a11, double a12, double a13,
double a21, double a22, double a23,
double a31, double a32, double a33){
  double cof;
  switch(location){
    case 11: cof=determ_2order(a22, a23, a32, a33); break;
    case 12: cof=-1*determ_2order(a21, a23, a31, a33); break;
    case 13: cof=determ_2order(a21, a22, a31, a32); break;

    case 21: cof=-1*determ_2order(a12, a13, a32, a33); break;
    case 22: cof=determ_2order(a11, a13, a31, a33); break;
    case 23: cof=-1*determ_2order(a11, a12, a31, a32); break;

    case 31: cof=determ_2order(a12, a13, a22, a23); break;
    case 32: cof=-1*determ_2order(a11, a13, a21, a23); break;
    case 33: cof=determ_2order(a11, a12, a21, a22); break;    
  }
  return cof;
}
void adjoint_3order(double &a11, double &a12, double &a13,
double &a21, double &a22, double &a23,
double &a31, double &a32, double &a33){
  double c11, c12, c13, c21, c22, c23, c31, c32, c33;
  c11=a11; c12=a12; c13=a13; 
  c21=a21; c22=a22; c23=a23; 
  c31=a31; c32=a32; c33=a33; // save the matrix element temporarliy

  a11=cofactor_3order(11, c11, c12, c13, c21, c22, c23, c31, c32, c33);
  a21=cofactor_3order(12, c11, c12, c13, c21, c22, c23, c31, c32, c33);
  a31=cofactor_3order(13, c11, c12, c13, c21, c22, c23, c31, c32, c33);
  a12=cofactor_3order(21, c11, c12, c13, c21, c22, c23, c31, c32, c33);
  a22=cofactor_3order(22, c11, c12, c13, c21, c22, c23, c31, c32, c33);
  a32=cofactor_3order(23, c11, c12, c13, c21, c22, c23, c31, c32, c33);
  a13=cofactor_3order(31, c11, c12, c13, c21, c22, c23, c31, c32, c33);
  a23=cofactor_3order(32, c11, c12, c13, c21, c22, c23, c31, c32, c33);
  a33=cofactor_3order(33, c11, c12, c13, c21, c22, c23, c31, c32, c33); // involve transpose calculation
}
void inverse_3order(double &a11, double &a12, double &a13,
double &a21, double &a22, double &a23,
double &a31, double &a32, double &a33){
  double determ;  
  determ=determ_3order(a11, a12, a13, a21, a22, a23, a31, a32, a33);
  adjoint_3order(a11, a12, a13, a21, a22, a23, a31, a32, a33);
  a11=a11/determ; a12=a12/determ; a13=a13/determ;
  a21=a21/determ; a22=a22/determ; a23=a23/determ;
  a31=a31/determ; a32=a32/determ; a33=a33/determ;
}




double cofactor_4order(int location, 
double a11, double a12, double a13, double a14, 
double a21, double a22, double a23, double a24,
double a31, double a32, double a33, double a34, 
double a41, double a42, double a43, double a44){
  double cof;
  switch (location){
    case 11: cof=determ_3order(a22, a23, a24, a32, a33, a34, a42, a43, a44);break;
    case 12: cof=-1*determ_3order(a21, a23, a24, a31, a33, a34, a41, a43, a44);break;
    case 13: cof=determ_3order(a21, a22, a24, a31, a32, a34, a41, a42, a44);break;
    case 14: cof=-1*determ_3order(a21, a22, a23, a31, a32, a33, a41, a42, a43); break;

    case 21: cof=-1*determ_3order(a12, a13, a14, a32, a33, a34, a42, a43, a44);break;
    case 22: cof=determ_3order(a11, a13, a14, a31, a33, a34, a41, a43, a44);break;
    case 23: cof=-1*determ_3order(a11, a12, a14, a31, a32, a34, a41, a42, a44);break;
    case 24: cof=determ_3order(a11, a12, a13, a31, a32, a33, a41, a42, a43);break;

    case 31: cof=determ_3order(a12, a13, a14, a22, a23, a24, a42, a43, a44);break;
    case 32: cof=-1*determ_3order(a11, a13, a14, a21, a23, a24, a41, a43, a44);break;
    case 33: cof=determ_3order(a11, a12, a14, a21, a22, a24, a41, a42, a44);break;
    case 34: cof=-1*determ_3order(a11, a12, a13, a21, a22, a23, a41, a42, a43);break;

    case 41: cof=-1*determ_3order(a12, a13, a14, a22, a23, a24, a32, a33, a34);break;
    case 42: cof=determ_3order(a11, a13, a14, a21, a23, a24, a31, a33, a34);break;
    case 43: cof=-1*determ_3order(a11, a12, a14, a21, a22, a24, a31, a32, a34);break;
    case 44: cof=determ_3order(a11, a12, a13, a21, a22, a23, a31, a32, a33);break;
  }
  return cof;
}
void adjoint_4order(double &a11, double &a12, double &a13, double &a14, 
double &a21, double &a22, double &a23, double &a24,
double &a31, double &a32, double &a33, double &a34, 
double &a41, double &a42, double &a43, double &a44){
  double c11, c12, c13, c14, 
  c21, c22, c23, c24,
  c31, c32, c33, c34, 
  c41, c42, c43, c44;
    c11=a11; c12=a12; c13=a13; c14=a14;
    c21=a21; c22=a22; c23=a23; c24=a24;
    c31=a31; c32=a32; c33=a33; c34=a34;
    c41=a41; c42=a42; c43=a43; c44=a44;
  a11=cofactor_4order(11, c11, c12, c13, c14, c21, c22, c23, c24, c31, c32, c33, c34, c41, c42, c43, c44);
  a21=cofactor_4order(12, c11, c12, c13, c14, c21, c22, c23, c24, c31, c32, c33, c34, c41, c42, c43, c44);
  a31=cofactor_4order(13, c11, c12, c13, c14, c21, c22, c23, c24, c31, c32, c33, c34, c41, c42, c43, c44);
  a41=cofactor_4order(14, c11, c12, c13, c14, c21, c22, c23, c24, c31, c32, c33, c34, c41, c42, c43, c44); 
  a12=cofactor_4order(21, c11, c12, c13, c14, c21, c22, c23, c24, c31, c32, c33, c34, c41, c42, c43, c44); //// 
  a22=cofactor_4order(22, c11, c12, c13, c14, c21, c22, c23, c24, c31, c32, c33, c34, c41, c42, c43, c44);
  a32=cofactor_4order(23, c11, c12, c13, c14, c21, c22, c23, c24, c31, c32, c33, c34, c41, c42, c43, c44);
  a42=cofactor_4order(24, c11, c12, c13, c14, c21, c22, c23, c24, c31, c32, c33, c34, c41, c42, c43, c44);
  a13=cofactor_4order(31, c11, c12, c13, c14, c21, c22, c23, c24, c31, c32, c33, c34, c41, c42, c43, c44);
  a23=cofactor_4order(32, c11, c12, c13, c14, c21, c22, c23, c24, c31, c32, c33, c34, c41, c42, c43, c44);
  a33=cofactor_4order(33, c11, c12, c13, c14, c21, c22, c23, c24, c31, c32, c33, c34, c41, c42, c43, c44);
  a43=cofactor_4order(34, c11, c12, c13, c14, c21, c22, c23, c24, c31, c32, c33, c34, c41, c42, c43, c44);
  a14=cofactor_4order(41, c11, c12, c13, c14, c21, c22, c23, c24, c31, c32, c33, c34, c41, c42, c43, c44);
  a24=cofactor_4order(42, c11, c12, c13, c14, c21, c22, c23, c24, c31, c32, c33, c34, c41, c42, c43, c44);
  a34=cofactor_4order(43, c11, c12, c13, c14, c21, c22, c23, c24, c31, c32, c33, c34, c41, c42, c43, c44);
  a44=cofactor_4order(44, c11, c12, c13, c14, c21, c22, c23, c24, c31, c32, c33, c34, c41, c42, c43, c44);  
}
void inverse_4order(double &a11, double &a12, double &a13, double &a14, 
double &a21, double &a22, double &a23, double &a24,
double &a31, double &a32, double &a33, double &a34, 
double &a41, double &a42, double &a43, double &a44){
  double determ;
  determ=determ_4order(a11, a12, a13, a14, a21, a22, a23, a24, a31, a32, a33, a34, a41, a42, a43, a44);
  adjoint_4order(a11, a12, a13, a14, a21, a22, a23, a24, a31, a32, a33, a34, a41, a42, a43, a44);
  a11=a11/determ; a12=a12/determ; a13=a13/determ; a14=a14/determ;
  a21=a21/determ; a22=a22/determ; a23=a23/determ; a24=a24/determ;
  a31=a31/determ; a32=a32/determ; a33=a33/determ; a34=a34/determ;
  a41=a41/determ; a42=a42/determ; a43=a43/determ; a44=a44/determ;
}



double cofactor_5order(int location, 
double a11, double a12, double a13, double a14,double a15, 
double a21, double a22, double a23, double a24, double a25, 
double a31, double a32, double a33, double a34, double a35, 
double a41, double a42, double a43, double a44, double a45,
double a51, double a52, double a53, double a54, double a55){
  double cof;
  switch(location){
    case 11: cof=determ_4order(a22, a23, a24, a25, a32, a33, a34, a35, a42, a43, a44, a45, a52, a53, a54, a55);break;
    case 12: cof=-1*determ_4order(a21, a23, a24, a25, a31, a33, a34, a35, a41, a43, a44, a45, a51, a53, a54, a55);break;
    case 13: cof=determ_4order(a21, a22, a24, a25, a31, a32, a34, a35, a41, a42, a44, a45, a51, a52, a54, a55);break;
    case 14: cof=-1*determ_4order(a21, a22, a23, a25, a31, a32, a33, a35, a41, a42, a43, a45, a51, a52, a53, a55);break;
    case 15: cof=determ_4order(a21, a22, a23, a24, a31, a32, a33, a34, a41, a42, a43, a44, a51, a52, a53, a54);break;
    
    case 21: cof=-1*determ_4order(a12, a13, a14, a15, a32, a33, a34, a35, a42, a43, a44, a45, a52, a53, a54, a55);break;
    case 22: cof=determ_4order(a11, a13, a14, a15, a31, a33, a34, a35, a41, a43, a44, a45, a51, a53, a54, a55);break;
    case 23: cof=-1*determ_4order(a11, a12, a14, a15, a31, a32, a34, a35, a41, a42, a44, a45, a51, a52, a54, a55);break;
    case 24: cof=determ_4order(a11, a12, a13, a15, a31, a32, a33, a35, a41, a42, a43, a45, a51, a52, a53, a55);break;
    case 25: cof=-1*determ_4order(a11, a12, a13, a14, a31, a32, a33, a34, a41, a42, a43, a44, a51, a52, a53, a54);break;

    case 31: cof=determ_4order(a12, a13, a14, a15, a22, a23, a24, a25, a42, a43, a44, a45, a52, a53, a54, a55);break;
    case 32: cof=-1*determ_4order(a11, a13, a14, a15, a21, a23, a24, a25, a41, a43, a44, a45, a51, a53, a54, a55);break;
    case 33: cof=determ_4order(a11, a12, a14, a15, a21, a22, a24, a25, a41, a42, a44, a45, a51, a52, a54, a55);break;
    case 34: cof=-1*determ_4order(a11, a12, a13, a15, a21, a22, a23, a25, a41, a42, a43, a45, a51, a52, a53, a55);break;
    case 35: cof=determ_4order(a11, a12, a13, a14, a21, a22, a23, a24, a41, a42, a43, a44, a51, a52, a53, a54);break;

    case 41: cof=-1*determ_4order(a12, a13, a14, a15, a22, a23, a24, a25, a32, a33, a34, a35, a52, a53, a54, a55);break;
    case 42: cof=determ_4order(a11, a13, a14, a15, a21, a23, a24, a25, a31, a33, a34, a35, a51, a53, a54, a55);break;
    case 43: cof=-1*determ_4order(a11, a12, a14, a15, a21, a22, a24, a25, a31, a32, a34, a35, a51, a52, a54, a55);break;
    case 44: cof=determ_4order(a11, a12, a13, a15, a21, a22, a23, a25, a31, a32, a33, a35, a51, a52, a53, a55);break;
    case 45: cof=-1*determ_4order(a11, a12, a13, a14, a21, a22, a23, a24, a31, a32, a33, a34, a51, a52, a53, a54);break;

    case 51: cof=determ_4order(a12, a13, a14, a15, a22, a23, a24, a25, a32, a33, a34, a35, a42, a43, a44, a45);break;
    case 52: cof=-1*determ_4order(a11, a13, a14, a15, a21, a23, a24, a25, a31, a33, a34, a35, a41, a43, a44, a45);break;
    case 53: cof=determ_4order(a11, a12, a14, a15, a21, a22, a24, a25, a31, a32, a34, a35, a41, a42, a44, a45);break;
    case 54: cof=-1*determ_4order(a11, a12, a13, a15, a21, a22, a23, a25, a31, a32, a33, a35, a41, a42, a43, a45);break;
    case 55: cof=determ_4order(a11, a12, a13, a14, a21, a22, a23, a24, a31, a32, a33, a34, a41, a42, a43, a44);break;    
  }
  return cof;
}
void adjoint_5order(
double &a11, double &a12, double &a13, double &a14, double &a15, 
double &a21, double &a22, double &a23, double &a24, double &a25, 
double &a31, double &a32, double &a33, double &a34, double &a35, 
double &a41, double &a42, double &a43, double &a44, double &a45,
double &a51, double &a52, double &a53, double &a54, double &a55){
  double 
  c11, c12, c13, c14, c15, 
  c21, c22, c23, c24, c25,
  c31, c32, c33, c34, c35,
  c41, c42, c43, c44, c45,
  c51, c52, c53, c54, c55;
  c11=a11; c12=a12; c13=a13; c14=a14; c15=a15;
  c21=a21; c22=a22; c23=a23; c24=a24; c25=a25;
  c31=a31; c32=a32; c33=a33; c34=a34; c35=a35;
  c41=a41; c42=a42; c43=a43; c44=a44; c45=a45;
  c51=a51; c52=a52; c53=a53; c54=a54; c55=a55;

  a11=cofactor_5order(11, c11, c12, c13, c14, c15, c21, c22, c23, c24, c25, c31, c32, c33, c34, c35, c41, c42, c43, c44, c45,  c51, c52, c53, c54, c55);
  a12=cofactor_5order(21, c11, c12, c13, c14, c15, c21, c22, c23, c24, c25, c31, c32, c33, c34, c35, c41, c42, c43, c44, c45,  c51, c52, c53, c54, c55);
  a13=cofactor_5order(31, c11, c12, c13, c14, c15, c21, c22, c23, c24, c25, c31, c32, c33, c34, c35, c41, c42, c43, c44, c45,  c51, c52, c53, c54, c55);
  a14=cofactor_5order(41, c11, c12, c13, c14, c15, c21, c22, c23, c24, c25, c31, c32, c33, c34, c35, c41, c42, c43, c44, c45,  c51, c52, c53, c54, c55);
  a15=cofactor_5order(51, c11, c12, c13, c14, c15, c21, c22, c23, c24, c25, c31, c32, c33, c34, c35, c41, c42, c43, c44, c45,  c51, c52, c53, c54, c55);

  a21=cofactor_5order(12, c11, c12, c13, c14, c15, c21, c22, c23, c24, c25, c31, c32, c33, c34, c35, c41, c42, c43, c44, c45,  c51, c52, c53, c54, c55);
  a22=cofactor_5order(22, c11, c12, c13, c14, c15, c21, c22, c23, c24, c25, c31, c32, c33, c34, c35, c41, c42, c43, c44, c45,  c51, c52, c53, c54, c55);
  a23=cofactor_5order(32, c11, c12, c13, c14, c15, c21, c22, c23, c24, c25, c31, c32, c33, c34, c35, c41, c42, c43, c44, c45,  c51, c52, c53, c54, c55);
  a24=cofactor_5order(42, c11, c12, c13, c14, c15, c21, c22, c23, c24, c25, c31, c32, c33, c34, c35, c41, c42, c43, c44, c45,  c51, c52, c53, c54, c55);
  a25=cofactor_5order(52, c11, c12, c13, c14, c15, c21, c22, c23, c24, c25, c31, c32, c33, c34, c35, c41, c42, c43, c44, c45,  c51, c52, c53, c54, c55);
  
  a31=cofactor_5order(13, c11, c12, c13, c14, c15, c21, c22, c23, c24, c25, c31, c32, c33, c34, c35, c41, c42, c43, c44, c45,  c51, c52, c53, c54, c55);
  a32=cofactor_5order(23, c11, c12, c13, c14, c15, c21, c22, c23, c24, c25, c31, c32, c33, c34, c35, c41, c42, c43, c44, c45,  c51, c52, c53, c54, c55);
  a33=cofactor_5order(33, c11, c12, c13, c14, c15, c21, c22, c23, c24, c25, c31, c32, c33, c34, c35, c41, c42, c43, c44, c45,  c51, c52, c53, c54, c55);
  a34=cofactor_5order(43, c11, c12, c13, c14, c15, c21, c22, c23, c24, c25, c31, c32, c33, c34, c35, c41, c42, c43, c44, c45,  c51, c52, c53, c54, c55);
  a35=cofactor_5order(53, c11, c12, c13, c14, c15, c21, c22, c23, c24, c25, c31, c32, c33, c34, c35, c41, c42, c43, c44, c45,  c51, c52, c53, c54, c55);

  a41=cofactor_5order(14, c11, c12, c13, c14, c15, c21, c22, c23, c24, c25, c31, c32, c33, c34, c35, c41, c42, c43, c44, c45,  c51, c52, c53, c54, c55);
  a42=cofactor_5order(24, c11, c12, c13, c14, c15, c21, c22, c23, c24, c25, c31, c32, c33, c34, c35, c41, c42, c43, c44, c45,  c51, c52, c53, c54, c55);
  a43=cofactor_5order(34, c11, c12, c13, c14, c15, c21, c22, c23, c24, c25, c31, c32, c33, c34, c35, c41, c42, c43, c44, c45,  c51, c52, c53, c54, c55);
  a44=cofactor_5order(44,c11, c12, c13, c14, c15, c21, c22, c23, c24, c25, c31, c32, c33, c34, c35, c41, c42, c43, c44, c45,  c51, c52, c53, c54, c55);
  a45=cofactor_5order(54,c11, c12, c13, c14, c15, c21, c22, c23, c24, c25, c31, c32, c33, c34, c35, c41, c42, c43, c44, c45,  c51, c52, c53, c54, c55);

  a51=cofactor_5order(15,c11, c12, c13, c14, c15, c21, c22, c23, c24, c25, c31, c32, c33, c34, c35, c41, c42, c43, c44, c45,  c51, c52, c53, c54, c55);
  a52=cofactor_5order(25,c11, c12, c13, c14, c15, c21, c22, c23, c24, c25, c31, c32, c33, c34, c35, c41, c42, c43, c44, c45,  c51, c52, c53, c54, c55);
  a53=cofactor_5order(35,c11, c12, c13, c14, c15, c21, c22, c23, c24, c25, c31, c32, c33, c34, c35, c41, c42, c43, c44, c45,  c51, c52, c53, c54, c55);
  a54=cofactor_5order(45,c11, c12, c13, c14, c15, c21, c22, c23, c24, c25, c31, c32, c33, c34, c35, c41, c42, c43, c44, c45,  c51, c52, c53, c54, c55);
  a55=cofactor_5order(55,c11, c12, c13, c14, c15, c21, c22, c23, c24, c25, c31, c32, c33, c34, c35, c41, c42, c43, c44, c45,  c51, c52, c53, c54, c55);  
}
void inverse_5order(double &a11, double &a12, double &a13, double &a14, double &a15, 
double &a21, double &a22, double &a23, double &a24, double &a25, 
double &a31, double &a32, double &a33, double &a34, double &a35, 
double &a41, double &a42, double &a43, double &a44, double &a45,
double &a51, double &a52, double &a53, double &a54, double &a55){
  double determ;
  determ=determ_5order(a11, a12, a13, a14, a15, a21, a22, a23, a24, a25, a31, a32, a33, a34, a35, a41, a42, a43, a44, a45,  a51, a52, a53, a54, a55);
  adjoint_5order(a11, a12, a13, a14, a15, a21, a22, a23, a24, a25, a31, a32, a33, a34, a35, a41, a42, a43, a44, a45,  a51, a52, a53, a54, a55);
  a11=a11/determ; a12=a12/determ; a13=a13/determ; a14=a14/determ; a15=a15/determ;
  a21=a21/determ; a22=a22/determ; a23=a23/determ; a24=a24/determ; a25=a25/determ;
  a31=a31/determ; a32=a32/determ; a33=a33/determ; a34=a34/determ; a35=a35/determ;
  a41=a41/determ; a42=a42/determ; a43=a43/determ; a44=a44/determ; a45=a45/determ;
  a51=a51/determ; a52=a52/determ; a53=a53/determ; a54=a54/determ; a55=a55/determ;
}




double cofactor_6order(int location, double a11, double a12, double a13, double a14,double a15, double a16,
double a21, double a22, double a23, double a24, double a25, double a26,
double a31, double a32, double a33, double a34, double a35, double a36,
double a41, double a42, double a43, double a44, double a45, double a46,
double a51, double a52, double a53, double a54, double a55, double a56,
double a61, double a62, double a63, double a64, double a65, double a66){
  double cof;
  switch (location){
    case 11: cof=determ_5order(a22, a23, a24, a25, a26, 
      a32, a33, a34, a35, a36, 
      a42, a43, a44, a45, a46, 
      a52, a53, a54, a55, a56, 
      a62, a63, a64, a65, a66); break;
    case 12: cof=-1*determ_5order(a21, a23, a24, a25, a26, 
      a31, a33, a34, a35, a36, 
      a41, a43, a44, a45, a46, 
      a51, a53, a54, a55, a56, 
      a61, a63, a64, a65, a66);break;
    case 13: cof=determ_5order(a21, a22, a24, a25, a26, 
      a31, a32, a34, a35, a36, 
      a41, a42, a44, a45, a46, 
      a51, a52, a54, a55, a56, 
      a61, a62, a64, a65, a66);break;
    case 14: cof=-1*determ_5order(a21, a22, a23, a25, a26, 
      a31, a32, a33, a35, a36, 
      a41, a42, a43, a45, a46, 
      a51, a52, a53, a55, a56, 
      a61, a62, a63, a65, a66);break;
    case 15: cof=determ_5order(a21, a22, a23, a24, a26, 
      a31, a32, a33, a34, a36, 
      a41, a42, a43, a44, a46, 
      a51, a52, a53, a54, a56, 
      a61, a62, a63, a64, a66);break;
    case 16: cof=-1*determ_5order(a21, a22, a23, a24, a25, 
      a31, a32, a33, a34, a35, 
      a41, a42, a43, a44, a45, 
      a51, a52, a53, a54, a55, 
      a61, a62, a63, a64, a65);break;

    
    case 21: cof=-1*determ_5order(a12, a13, a14, a15, a16, 
      a32, a33, a34, a35, a36, 
      a42, a43, a44, a45, a46, 
      a52, a53, a54, a55, a56, 
      a62, a63, a64, a65, a66);break;
    case 22: cof=determ_5order(a11, a13, a14, a15, a16, 
      a31, a33, a34, a35, a36, 
      a41, a43, a44, a45, a46, 
      a51, a53, a54, a55, a56, 
      a61, a63, a64, a65, a66);break;
    case 23: cof=-1*determ_5order(a11, a12, a14, a15, a16, 
      a31, a32, a34, a35, a36, 
      a41, a42, a44, a45, a46, 
      a51, a52, a54, a55, a56, 
      a61, a62, a64, a65, a66);break;
    case 24: cof=determ_5order(a11, a12, a13, a15, a16, 
      a31, a32, a33, a35, a36, 
      a41, a42, a43, a45, a46, 
      a51, a52, a53, a55, a56, 
      a61, a62, a63, a65, a66);break;
    case 25: cof=-1*determ_5order(a11, a12, a13, a14, a16, 
      a31, a32, a33, a34, a36, 
      a41, a42, a43, a44, a46, 
      a51, a52, a53, a54, a56, 
      a61, a62, a63, a64, a66);break;
    case 26: cof=determ_5order(a11, a12, a13, a14, a15, 
      a31, a32, a33, a34, a35, 
      a41, a42, a43, a44, a45, 
      a51, a52, a53, a54, a55, 
      a61, a62, a63, a64, a65);break;

    case 31: cof=determ_5order(a12, a13, a14, a15, a16, 
      a22, a23, a24, a25, a26, 
      a42, a43, a44, a45, a46, 
      a52, a53, a54, a55, a56, 
      a62, a63, a64, a65, a66);break;
    case 32: cof=-1*determ_5order(a11, a13, a14, a15, a16, 
      a21, a23, a24, a25, a26, 
      a41, a43, a44, a45, a46, 
      a51, a53, a54, a55, a56, 
      a61, a63, a64, a65, a66);break;
    case 33: cof=determ_5order(a11, a12, a14, a15, a16, 
      a21, a22, a24, a25, a26, 
      a41, a42, a44, a45, a46, 
      a51, a52, a54, a55, a56, 
      a61, a62, a64, a65, a66);break;
    case 34: cof=-1*determ_5order(a11, a12, a13, a15, a16, 
      a21, a22, a23, a25, a26, 
      a41, a42, a43, a45, a46, 
      a51, a52, a53, a55, a56, 
      a61, a62, a63, a65, a66);break;
    case 35: cof=determ_5order(a11, a12, a13, a14, a16, 
      a21, a22, a23, a24, a26, 
      a41, a42, a43, a44, a46, 
      a51, a52, a53, a54, a56, 
      a61, a62, a63, a64, a66);break;
    case 36: cof=-1*determ_5order(a11, a12, a13, a14, a15, 
      a21, a22, a23, a24, a25, 
      a41, a42, a43, a44, a45, 
      a51, a52, a53, a54, a55, 
      a61, a62, a63, a64, a65);break;

    case 41: cof=-1*determ_5order(a12, a13, a14, a15, a16, 
      a22, a23, a24, a25, a26, 
      a32, a33, a34, a35, a36, 
      a52, a53, a54, a55, a56, 
      a62, a63, a64, a65, a66);break;
    case 42: cof=determ_5order(a11, a13, a14, a15, a16, 
      a21, a23, a24, a25, a26, 
      a31, a33, a34, a35, a36, 
      a51, a53, a54, a55, a56, 
      a61, a63, a64, a65, a66);break;
    case 43: cof=-1*determ_5order(a11, a12, a14, a15, a16, 
      a21, a22, a24, a25, a26, 
      a31, a32, a34, a35, a36, 
      a51, a52, a54, a55, a56, 
      a61, a62, a64, a65, a66);break;
    case 44: cof=determ_5order(a11, a12, a13, a15, a16, 
      a21, a22, a23, a25, a26, 
      a31, a32, a33, a35, a36, 
      a51, a52, a53, a55, a56, 
      a61, a62, a63, a65, a66);break;
    case 45: cof=-1*determ_5order(a11, a12, a13, a14, a16, 
      a21, a22, a23, a24, a26, 
      a31, a32, a33, a34, a36, 
      a51, a52, a53, a54, a56, 
      a61, a62, a63, a64, a66);break;
    case 46: cof=determ_5order(a11, a12, a13, a14, a15, 
      a21, a22, a23, a24, a25, 
      a31, a32, a33, a34, a35, 
      a51, a52, a53, a54, a55, 
      a61, a62, a63, a64, a65);break;

    case 51: cof=determ_5order(a12, a13, a14, a15, a16, 
      a22, a23, a24, a25, a26, 
      a32, a33, a34, a35, a36, 
      a42, a43, a44, a45, a46, 
      a62, a63, a64, a65, a66);break;
    case 52: cof=-1*determ_5order(a11, a13, a14, a15, a16, 
      a21, a23, a24, a25, a26, 
      a31, a33, a34, a35, a36, 
      a41, a43, a44, a45, a46, 
      a61, a63, a64, a65, a66);break;
    case 53: cof=determ_5order(a11, a12, a14, a15, a16, 
      a21, a22, a24, a25, a26, 
      a31, a32, a34, a35, a36, 
      a41, a42, a44, a45, a46, 
      a61, a62, a64, a65, a66);break;
    case 54: cof=-1*determ_5order(a11, a12, a13, a15, a16, 
      a21, a22, a23, a25, a26, 
      a31, a32, a33, a35, a36, 
      a41, a42, a43, a45, a46, 
      a61, a62, a63, a65, a66);break;
    case 55: cof=determ_5order(a11, a12, a13, a14, a16, 
      a21, a22, a23, a24, a26, 
      a31, a32, a33, a34, a36, 
      a41, a42, a43, a44, a46, 
      a61, a62, a63, a64, a66);break;
    case 56: cof=-1*determ_5order(a11, a12, a13, a14, a15, 
      a21, a22, a23, a24, a25, 
      a31, a32, a33, a34, a35, 
      a41, a42, a43, a44, a45, 
      a61, a62, a63, a64, a65);break;

    case 61: cof=-1*determ_5order(a12, a13, a14, a15, a16, 
      a22, a23, a24, a25, a26, 
      a32, a33, a34, a35, a36, 
      a42, a43, a44, a45, a46, 
      a52, a53, a54, a55, a56);break;
    case 62: cof=determ_5order(a11, a13, a14, a15, a16, 
      a21, a23, a24, a25, a26, 
      a31, a33, a34, a35, a36, 
      a41, a43, a44, a45, a46, 
      a51, a53, a54, a55, a56);break;
    case 63: cof=-1*determ_5order(a11, a12, a14, a15, a16, 
      a21, a22, a24, a25, a26, 
      a31, a32, a34, a35, a36, 
      a41, a42, a44, a45, a46, 
      a51, a52, a54, a55, a56);break;
    case 64: cof=-1*determ_5order(a11, a12, a13, a15, a16, 
      a21, a22, a23, a25, a26, 
      a31, a32, a33, a35, a36, 
      a41, a42, a43, a45, a46, 
      a51, a52, a53, a55, a56);break;
    case 65: cof=determ_5order(a11, a12, a13, a14, a16, 
      a21, a22, a23, a24, a26, 
      a31, a32, a33, a34, a36, 
      a41, a42, a43, a44, a46, 
      a51, a52, a53, a54, a56);break;
    case 66: cof=-1*determ_5order(a11, a12, a13, a14, a15, 
      a21, a22, a23, a24, a25, 
      a31, a32, a33, a34, a35, 
      a41, a42, a43, a44, a45, 
      a51, a52, a53, a54, a55);break;
  }
  return cof;
}

void adjoint_6order(double &a11, double &a12, double &a13, double &a14,double &a15, double &a16,
double &a21, double &a22, double &a23, double &a24, double &a25, double &a26,
double &a31, double &a32, double &a33, double &a34, double &a35, double &a36,
double &a41, double &a42, double &a43, double &a44, double &a45, double &a46,
double &a51, double &a52, double &a53, double &a54, double &a55, double &a56,
double &a61, double &a62, double &a63, double &a64, double &a65, double &a66){
  double 
  c11, c12, c13, c14, c15, c16, 
  c21, c22, c23, c24, c25, c26,
  c31, c32, c33, c34, c35, c36,
  c41, c42, c43, c44, c45, c46,
  c51, c52, c53, c54, c55, c56,
  c61, c62, c63, c64, c65, c66;
  c11=a11; c12=a12; c13=a13; c14=a14; c15=a15; c16=a16;
  c21=a21; c22=a22; c23=a23; c24=a24; c25=a25; c26=a26;
  c31=a31; c32=a32; c33=a33; c34=a34; c35=a35; c36=a36;
  c41=a41; c42=a42; c43=a43; c44=a44; c45=a45; c46=a46;
  c51=a51; c52=a52; c53=a53; c54=a54; c55=a55; c56=a56;
  c61=a61; c62=a62; c63=a63; c64=a64; c65=a65; c66=a66;

  a11=cofactor_6order(11, c11, c12, c13, c14, c15, c16, c21, c22, c23, c24, c25, c26, c31, c32, c33, c34, c35, c36, c41, c42, c43, c44, c45, c46, c51, c52, c53, c54, c55, c56, c61, c62, c63, c64, c65, c66);
  a12=cofactor_6order(21, c11, c12, c13, c14, c15, c16, c21, c22, c23, c24, c25, c26, c31, c32, c33, c34, c35, c36, c41, c42, c43, c44, c45, c46, c51, c52, c53, c54, c55, c56, c61, c62, c63, c64, c65, c66);
  a13=cofactor_6order(31, c11, c12, c13, c14, c15, c16, c21, c22, c23, c24, c25, c26, c31, c32, c33, c34, c35, c36, c41, c42, c43, c44, c45, c46, c51, c52, c53, c54, c55, c56, c61, c62, c63, c64, c65, c66);
  a14=cofactor_6order(41, c11, c12, c13, c14, c15, c16, c21, c22, c23, c24, c25, c26, c31, c32, c33, c34, c35, c36, c41, c42, c43, c44, c45, c46, c51, c52, c53, c54, c55, c56, c61, c62, c63, c64, c65, c66);
  a15=cofactor_6order(51, c11, c12, c13, c14, c15, c16, c21, c22, c23, c24, c25, c26, c31, c32, c33, c34, c35, c36, c41, c42, c43, c44, c45, c46, c51, c52, c53, c54, c55, c56, c61, c62, c63, c64, c65, c66);
  a16=cofactor_6order(61, c11, c12, c13, c14, c15, c16, c21, c22, c23, c24, c25, c26, c31, c32, c33, c34, c35, c36, c41, c42, c43, c44, c45, c46, c51, c52, c53, c54, c55, c56, c61, c62, c63, c64, c65, c66);

  a21=cofactor_6order(12, c11, c12, c13, c14, c15, c16, c21, c22, c23, c24, c25, c26, c31, c32, c33, c34, c35, c36, c41, c42, c43, c44, c45, c46, c51, c52, c53, c54, c55, c56, c61, c62, c63, c64, c65, c66);
  a22=cofactor_6order(22, c11, c12, c13, c14, c15, c16, c21, c22, c23, c24, c25, c26, c31, c32, c33, c34, c35, c36, c41, c42, c43, c44, c45, c46, c51, c52, c53, c54, c55, c56, c61, c62, c63, c64, c65, c66);
  a23=cofactor_6order(32, c11, c12, c13, c14, c15, c16, c21, c22, c23, c24, c25, c26, c31, c32, c33, c34, c35, c36, c41, c42, c43, c44, c45, c46, c51, c52, c53, c54, c55, c56, c61, c62, c63, c64, c65, c66);
  a24=cofactor_6order(42, c11, c12, c13, c14, c15, c16, c21, c22, c23, c24, c25, c26, c31, c32, c33, c34, c35, c36, c41, c42, c43, c44, c45, c46, c51, c52, c53, c54, c55, c56, c61, c62, c63, c64, c65, c66);
  a25=cofactor_6order(52, c11, c12, c13, c14, c15, c16, c21, c22, c23, c24, c25, c26, c31, c32, c33, c34, c35, c36, c41, c42, c43, c44, c45, c46, c51, c52, c53, c54, c55, c56, c61, c62, c63, c64, c65, c66);
  a26=cofactor_6order(62, c11, c12, c13, c14, c15, c16, c21, c22, c23, c24, c25, c26, c31, c32, c33, c34, c35, c36, c41, c42, c43, c44, c45, c46, c51, c52, c53, c54, c55, c56, c61, c62, c63, c64, c65, c66);

  a31=cofactor_6order(13, c11, c12, c13, c14, c15, c16, c21, c22, c23, c24, c25, c26, c31, c32, c33, c34, c35, c36, c41, c42, c43, c44, c45, c46, c51, c52, c53, c54, c55, c56, c61, c62, c63, c64, c65, c66);
  a32=cofactor_6order(23, c11, c12, c13, c14, c15, c16, c21, c22, c23, c24, c25, c26, c31, c32, c33, c34, c35, c36, c41, c42, c43, c44, c45, c46, c51, c52, c53, c54, c55, c56, c61, c62, c63, c64, c65, c66);
  a33=cofactor_6order(33, c11, c12, c13, c14, c15, c16, c21, c22, c23, c24, c25, c26, c31, c32, c33, c34, c35, c36, c41, c42, c43, c44, c45, c46, c51, c52, c53, c54, c55, c56, c61, c62, c63, c64, c65, c66);
  a34=cofactor_6order(43, c11, c12, c13, c14, c15, c16, c21, c22, c23, c24, c25, c26, c31, c32, c33, c34, c35, c36, c41, c42, c43, c44, c45, c46, c51, c52, c53, c54, c55, c56, c61, c62, c63, c64, c65, c66);
  a35=cofactor_6order(53, c11, c12, c13, c14, c15, c16, c21, c22, c23, c24, c25, c26, c31, c32, c33, c34, c35, c36, c41, c42, c43, c44, c45, c46, c51, c52, c53, c54, c55, c56, c61, c62, c63, c64, c65, c66);
  a36=cofactor_6order(63, c11, c12, c13, c14, c15, c16, c21, c22, c23, c24, c25, c26, c31, c32, c33, c34, c35, c36, c41, c42, c43, c44, c45, c46, c51, c52, c53, c54, c55, c56, c61, c62, c63, c64, c65, c66);

  a41=cofactor_6order(14, c11, c12, c13, c14, c15, c16, c21, c22, c23, c24, c25, c26, c31, c32, c33, c34, c35, c36, c41, c42, c43, c44, c45, c46, c51, c52, c53, c54, c55, c56, c61, c62, c63, c64, c65, c66);
  a42=cofactor_6order(24, c11, c12, c13, c14, c15, c16, c21, c22, c23, c24, c25, c26, c31, c32, c33, c34, c35, c36, c41, c42, c43, c44, c45, c46, c51, c52, c53, c54, c55, c56, c61, c62, c63, c64, c65, c66);
  a43=cofactor_6order(34, c11, c12, c13, c14, c15, c16, c21, c22, c23, c24, c25, c26, c31, c32, c33, c34, c35, c36, c41, c42, c43, c44, c45, c46, c51, c52, c53, c54, c55, c56, c61, c62, c63, c64, c65, c66);
  a44=cofactor_6order(44, c11, c12, c13, c14, c15, c16, c21, c22, c23, c24, c25, c26, c31, c32, c33, c34, c35, c36, c41, c42, c43, c44, c45, c46, c51, c52, c53, c54, c55, c56, c61, c62, c63, c64, c65, c66);
  a45=cofactor_6order(54, c11, c12, c13, c14, c15, c16, c21, c22, c23, c24, c25, c26, c31, c32, c33, c34, c35, c36, c41, c42, c43, c44, c45, c46, c51, c52, c53, c54, c55, c56, c61, c62, c63, c64, c65, c66);
  a46=cofactor_6order(64, c11, c12, c13, c14, c15, c16, c21, c22, c23, c24, c25, c26, c31, c32, c33, c34, c35, c36, c41, c42, c43, c44, c45, c46, c51, c52, c53, c54, c55, c56, c61, c62, c63, c64, c65, c66);

  a51=cofactor_6order(15, c11, c12, c13, c14, c15, c16, c21, c22, c23, c24, c25, c26, c31, c32, c33, c34, c35, c36, c41, c42, c43, c44, c45, c46, c51, c52, c53, c54, c55, c56, c61, c62, c63, c64, c65, c66);
  a52=cofactor_6order(25, c11, c12, c13, c14, c15, c16, c21, c22, c23, c24, c25, c26, c31, c32, c33, c34, c35, c36, c41, c42, c43, c44, c45, c46, c51, c52, c53, c54, c55, c56, c61, c62, c63, c64, c65, c66);
  a53=cofactor_6order(35, c11, c12, c13, c14, c15, c16, c21, c22, c23, c24, c25, c26, c31, c32, c33, c34, c35, c36, c41, c42, c43, c44, c45, c46, c51, c52, c53, c54, c55, c56, c61, c62, c63, c64, c65, c66);
  a54=cofactor_6order(45, c11, c12, c13, c14, c15, c16, c21, c22, c23, c24, c25, c26, c31, c32, c33, c34, c35, c36, c41, c42, c43, c44, c45, c46, c51, c52, c53, c54, c55, c56, c61, c62, c63, c64, c65, c66);
  a55=cofactor_6order(55, c11, c12, c13, c14, c15, c16, c21, c22, c23, c24, c25, c26, c31, c32, c33, c34, c35, c36, c41, c42, c43, c44, c45, c46, c51, c52, c53, c54, c55, c56, c61, c62, c63, c64, c65, c66);
  a56=cofactor_6order(65, c11, c12, c13, c14, c15, c16, c21, c22, c23, c24, c25, c26, c31, c32, c33, c34, c35, c36, c41, c42, c43, c44, c45, c46, c51, c52, c53, c54, c55, c56, c61, c62, c63, c64, c65, c66);

  a61=cofactor_6order(16, c11, c12, c13, c14, c15, c16, c21, c22, c23, c24, c25, c26, c31, c32, c33, c34, c35, c36, c41, c42, c43, c44, c45, c46, c51, c52, c53, c54, c55, c56, c61, c62, c63, c64, c65, c66);
  a62=cofactor_6order(26, c11, c12, c13, c14, c15, c16, c21, c22, c23, c24, c25, c26, c31, c32, c33, c34, c35, c36, c41, c42, c43, c44, c45, c46, c51, c52, c53, c54, c55, c56, c61, c62, c63, c64, c65, c66);
  a63=cofactor_6order(36, c11, c12, c13, c14, c15, c16, c21, c22, c23, c24, c25, c26, c31, c32, c33, c34, c35, c36, c41, c42, c43, c44, c45, c46, c51, c52, c53, c54, c55, c56, c61, c62, c63, c64, c65, c66);
  a64=cofactor_6order(46, c11, c12, c13, c14, c15, c16, c21, c22, c23, c24, c25, c26, c31, c32, c33, c34, c35, c36, c41, c42, c43, c44, c45, c46, c51, c52, c53, c54, c55, c56, c61, c62, c63, c64, c65, c66);
  a65=cofactor_6order(56, c11, c12, c13, c14, c15, c16, c21, c22, c23, c24, c25, c26, c31, c32, c33, c34, c35, c36, c41, c42, c43, c44, c45, c46, c51, c52, c53, c54, c55, c56, c61, c62, c63, c64, c65, c66);
  a66=cofactor_6order(66, c11, c12, c13, c14, c15, c16, c21, c22, c23, c24, c25, c26, c31, c32, c33, c34, c35, c36, c41, c42, c43, c44, c45, c46, c51, c52, c53, c54, c55, c56, c61, c62, c63, c64, c65, c66);
  
  
}

void inverse_6order(double &a11, double &a12, double &a13, double &a14,double &a15, double &a16,
double &a21, double &a22, double &a23, double &a24, double &a25, double &a26,
double &a31, double &a32, double &a33, double &a34, double &a35, double &a36,
double &a41, double &a42, double &a43, double &a44, double &a45, double &a46,
double &a51, double &a52, double &a53, double &a54, double &a55, double &a56,
double &a61, double &a62, double &a63, double &a64, double &a65, double &a66){
  double determ;
  determ=determ_6order(a11, a12, a13, a14, a15, a16,
  a21, a22, a23, a24, a25, a26,
  a31, a32, a33, a34, a35, a36,
  a41, a42, a43, a44, a45, a46,
  a51, a52, a53, a54, a55, a56,
  a61, a62, a63, a64, a65, a66);
  adjoint_6order(a11, a12, a13, a14, a15, a16,
  a21, a22, a23, a24, a25, a26,
  a31, a32, a33, a34, a35, a36,
  a41, a42, a43, a44, a45, a46,
  a51, a52, a53, a54, a55, a56,
  a61, a62, a63, a64, a65, a66);
  a11=a11/determ; a12=a12/determ; a13=a13/determ; a14=a14/determ; a15=a15/determ; a16=a16/determ;
  a21=a21/determ; a22=a22/determ; a23=a23/determ; a24=a24/determ; a25=a25/determ; a26=a26/determ;
  a31=a31/determ; a32=a32/determ; a33=a33/determ; a34=a34/determ; a35=a35/determ; a36=a36/determ;
  a41=a41/determ; a42=a42/determ; a43=a43/determ; a44=a44/determ; a45=a45/determ; a46=a46/determ;
  a51=a51/determ; a52=a52/determ; a53=a53/determ; a54=a54/determ; a55=a55/determ; a56=a56/determ;
  a61=a61/determ; a62=a62/determ; a63=a63/determ; a64=a64/determ; a65=a65/determ; a66=a66/determ;
}

double  **matrix_mult(int M,int N,int P){
    
	cout << "insert each element in matrix A" << endl;
	double A[M][N] ;
	for(int i = 0; i < M;i++){
		for (int j = 0;j < N;j++){
			cout << "A[" << i << "][" << j << "]=";
			cin >> A[i][j];
		}
	}
	
	cout << "insert each element in matrix B" << endl;
	double B[N][P];
	for(int i = 0; i < N;i++){
		for (int j = 0;j < P;j++){
			cout << "B[" << i << "][" << j << "]=";
			cin >> B[i][j];
		}
	}
  cout<<"---------------------------------------------------------";
  cout<<"\n\nMatrix A \n\n";
  for(int i = 0;i < M;i++){
		for (int j = 0;j < N;j++){
			// cout << result[i][j] << " ";
      printf("%-e    ",A[i][j]);
		}
		cout << "\n\n";
	}
  cout<<" * Matrix B\n\n";
  for(int i = 0;i < N;i++){
		for (int j = 0;j < P;j++){
			// cout << result[i][j] << " ";
      printf("%-e    ",B[i][j]);
		}
		cout << "\n\n";
	}
	
	double **d = (double **)malloc(M*sizeof(double *));
	for ( int i = 0;i < M;i++){
		d[i] = (double *)malloc(P*sizeof(double)); 
	}
	double C[M][P];
	for (int i = 0;i < M;i++){
		for (int j = 0;j < P;j++){
			C[i][j] = 0;
			for(int k = 0; k < N;k++)
				C[i][j] += A[i][k] * B[k][j]; 
				d[i][j] =  C[i][j];
		}
	}
	return d;
    for(int i=0;i<M;i++)
        delete []d[i];
    delete []d;
} 

double input_exec_multiply(){
  int M,N,P;
	cout << "dimension of A is (M,N):" << endl ;
	cout << "M = ";
	cin >> M;
	cout << "N = ";
	cin >> N;
	cout << "Dimension of B is (N,P):" << endl ;
	cout << "P = ";
	cin >> P;

	double **result = (double **)malloc(M * sizeof(double *));
	for (int i = 0; i < M; i++)
	{
	    result[i] = (double *)malloc(P * sizeof(double));
	}
	result = matrix_mult(M,N,P);
	cout << "equals \n\n" << endl;
	for(int i = 0;i < M;i++){
		for (int j = 0;j < P;j++){
			// cout << result[i][j] << " ";
      printf("%-e    ",result[i][j]);
		}
		cout << "\n\n";
	}	
  cout<<"---------------------------------------------------------\n";
	return 0;
}



double **matrix_adds(int M,int N){
    
	cout << "insert each element in matrix A" << endl;
	double A[M][N] ;
	for(int i = 0; i < M;i++){
		for (int j = 0;j < N;j++){
			cout << "A[" << i << "][" << j << "]=";
			cin >> A[i][j];
		}
	}
	
	cout << "insert each element in matrix B" << endl;
	double B[M][N] ;
	for(int i = 0; i < M;i++){
		for (int j = 0;j < N;j++){
			cout << "B[" << i << "][" << j << "]=";
			cin >> B[i][j];
		}
	}

  cout<<"---------------------------------------------------------";
  cout<<"\n\nMatrix A \n\n";
  for(int i = 0;i < M;i++){
		for (int j = 0;j < N;j++){
			// cout << result[i][j] << " ";
      printf("%-e    ",A[i][j]);
		}
		cout << "\n\n";
	}
  cout<<" + Matrix B\n\n";
  for(int i = 0;i < M;i++){
		for (int j = 0;j < N;j++){
			// cout << result[i][j] << " ";
      printf("%-e    ",B[i][j]);
		}
		cout << "\n\n";
	}
  
	
	double **b = (double **)malloc(M*sizeof(double *));
	for ( int i = 0;i < M;i++){
		b[i] = (double *)malloc(N*sizeof(double)); 
	}
	double C[M][N];
	for (int i = 0;i < M;i++){    
		for (int j = 0;j < N;j++){
				C[i][j] = A[i][j] + B[i][j]; 
				b[i][j] =  C[i][j];
	  }
  }
	
	return b;
    for(int i=0;i<M;i++)
        delete []b[i];
    delete []b;
}
  
double input_exec_addition(){
  int M,N;
	cout << "dimension of A and B is (M,N):" << endl ;
	cout << "M = ";
	cin >> M;
	cout << "N = ";
	cin >> N;

	double **result = (double **)malloc(M * sizeof(double *));
	for (int i = 0; i < M; i++)
	{
	    result[i] = (double *)malloc(N * sizeof(double));
	}
	result = matrix_adds(M,N);
	cout << "equals\n\n " << endl;
	for(int i = 0;i < M;i++){
		for (int j = 0;j < N;j++){
			printf("%-e    ",result[i][j]);
		}
		cout << "\n\n";
	}
  cout<<"---------------------------------------------------------\n";
	return 0;
}



double **matrix_subs(int M,int N){
    
	cout << "insert each element in matrix A" << endl;
	double A[M][N] ;
	for(int i = 0; i < M;i++){
		for (int j = 0;j < N;j++){
			cout << "A[" << i << "][" << j << "]=";
			cin >> A[i][j];
		}
	}
	
	cout << "insert each element in matrix B" << endl;
	double B[M][N] ;
	for(int i = 0; i < M;i++){
		for (int j = 0;j < N;j++){
			cout << "B[" << i << "][" << j << "]=";
			cin >> B[i][j];
		}
	}

  cout<<"---------------------------------------------------------";
  cout<<"\n\nMatrix A \n\n";
  for(int i = 0;i < M;i++){
		for (int j = 0;j < N;j++){
			// cout << result[i][j] << " ";
      printf("%-e    ",A[i][j]);
		}
		cout << "\n\n";
	}
  cout<<" - Matrix B\n\n";
  for(int i = 0;i < M;i++){
		for (int j = 0;j < N;j++){
			// cout << result[i][j] << " ";
      printf("%-e    ",B[i][j]);
		}
		cout << "\n\n";
	}
  
	
	double **s = (double **)malloc(M*sizeof(double *));
	for ( int i = 0;i < M;i++){
		s[i] = (double *)malloc(N*sizeof(double)); 
	}
	double C[M][N];
	for (int i = 0;i < M;i++){    
		for (int j = 0;j < N;j++){
				C[i][j] = A[i][j] - B[i][j]; 
				s[i][j] =  C[i][j];
	  }
  }
	return s;
    for(int i=0;i<M;i++)
        delete []s[i];
    delete []s;
}

double input_exec_subtraction(){
  int M,N;
	cout << "dimension of A and B is (M,N):" << endl ;
	cout << "M = ";
	cin >> M;
	cout << "N = ";
	cin >> N;

	double **result = (double **)malloc(M * sizeof(double *));
	for (int i = 0; i < M; i++)
	{
	    result[i] = (double *)malloc(N * sizeof(double));
	}
	result = matrix_subs(M,N);
	cout << "equals\n\n " << endl;
    
	for(int i = 0;i < M;i++){
		for (int j = 0;j < N;j++){
			printf("%-e    ",result[i][j]);
		}
		cout << "\n\n";
	}	
  cout<<"---------------------------------------------------------\n";
	return 0;
}






void matrix_menu() {
  print_matrix_menu();
  int input = get_menu_input();
  select_menu_item(input);
}

int get_menu_input() {
  int input;
  std::string input_string;
  bool valid_input = false;
  int menu_items = 2;

  do {
    std::cout << "\nSelect item: ";
    std::cin >> input_string;
    valid_input = is_integer(input_string);
    // if input is not an integer, print an error message
    if (valid_input == false) {
      std::cout << "Enter an integer!\n";
    } else { // if it is an int, check whether in range
      input = std::stoi(input_string); // convert to int
      if (input >= 1 && input <= menu_items) {
        valid_input = true;
      } else {
        std::cout << "Invalid menu item!\n";
        valid_input = false;
      }
    }
  } while (valid_input == false);

  return input;
}

int get_order_input() {
  int input;
  std::string input_string;
  bool valid_input = false;
  int menu_items = 2;

  do {
    std::cout << "\nSelect order of square matrix: ";
    std::cin >> input_string;
    valid_input = is_integer(input_string);
    // if input is not an integer, print an error message
    if (valid_input == false) {
      std::cout << "Enter integer between 2 and 6!\n";
    } else { // if it is an int, check whether in range
      input = std::stoi(input_string); // convert to int
      if (input >= 2 && input <= 6) {
        valid_input = true;
      } else {
        std::cout << "Invalid order!\n";
        valid_input = false;
      }
    }
  } while (valid_input == false);

  return input;
}

int get_operation_input() {
  int input;
  std::string input_string;
  bool valid_input = false;
  int menu_items = 2;

  do {
    std::cout << "\nSelect which operation to carry out: \n";
    std::cin >> input_string;
    valid_input = is_integer(input_string);
    // if input is not an integer, print an error message
    if (valid_input == false) {
      std::cout << "Enter integer between 1 and 3!\n";
    } else { // if it is an int, check whether in range
      input = std::stoi(input_string); // convert to int
      if (input >= 1 && input <= 3) {
        valid_input = true;
      } else {
        std::cout << "Invalid operation!\n";
        valid_input = false;
      }
    }
  }while (valid_input == false);
  return input;
}

void select_menu_item(int input) {
  switch (input) {
  case 1:
    menu_item_1();
    break;
  case 2:
    menu_item_2();
    break;
  default:
    exit(1);
    break;
  }
}

void print_matrix_menu() {
  std::cout << "\n----------- Matrix menu ---------\n";
  std::cout << "|\t\t\t\t\t\t\t\t|\n";
  std::cout << "|\t1. input single matrix\t\t|\n";
  std::cout << "|\t2. input double matrices\t|\n";
  std::cout << "---------------------------------\n";
}

void go_back_to_main() {
  std::string input;
  do {
    std::cout << "\nEnter 'b' or 'B' to go back to main menu: ";
    std::cin >> input;
  } while (input != "b" && input != "B");
  matrix_menu();
}


bool is_integer(std::string num) {
  return std::regex_match(num, std::regex("[+-]?[0-9]+"));
}

void menu_item_1() {
  int order;
  order=get_order_input();
  switch (order){
    case 2: imple_2order(); break;
    case 3: imple_3order(); break;
    case 4: imple_4order(); break;
    case 5: imple_5order(); break;
    case 6: imple_6order(); break;
  }
  go_back_to_main();
}

void menu_item_2() {
  int order, retn;
  beginning:;
  cout<<"\n\n1. addition\n";
  cout<<"2. subtraction\n";
  cout<<"3. multiplication\n"<<endl;
  order=get_operation_input();
  switch (order){
    case 1:input_exec_addition(); break;
    case 2:input_exec_subtraction(); break;
    case 3:input_exec_multiply(); break;
  }
  cout<<"whether to resume this block\n\n";
  cout<<"1-> resume\n";
  cout<<"0-> exit\n";
  cin>>retn;
  if(retn==1){goto beginning;}
  go_back_to_main();
}

void imple_2order(){
  double a11, a12, a21, a22;
  double c11, c12, c21, c22;
  int conf, mode, location, fur;
  beginning:;
  input_2order(a11, a12, a21, a22);
  c11=a11, c12=a12, c21=a21, c22=a22;
  selection:;
  cout<<"\n-----------------------------------------------------------\n";
  cout<<"\n\nconfirm this matrix pls, correct=1, re-enter=0\n\n";
  display_2order(a11, a12, a21, a22);
  cout<<"\n-----------------------------------------------------------\n";
  cin>>conf;
  if(conf==0){goto beginning; }     
  else{
    cout<<"\n\nwhich operation to carry out\n\n\n";
    cout<<"1 for determinant\n";
    cout<<"2 for adjoint matrix\n";
    cout<<"3 for inverse matrix\n";
    cout<<"4 for cofactor\n\n\n";
    cin>>mode;
    switch (mode){
      case 1: cout<<"\n\n-----------------------------------------------------------\n";
              cout<<"determinant of matrix = "<<determ_2order(a11, a12, a21, a22);
              cout<<"\n-----------------------------------------------------------\n"; break;
      case 2: 
      cout<<"\n-----------------------------------------------------------\n";
      cout<<"adjoint matrix of\n\n";
      display_2order(a11, a12, a21, a22);
      cout<<"is \n\n";
      adjoint_2order(a11, a12, a21, a22);
      display_2order(a11, a12, a21, a22);
      cout<<"-----------------------------------------------------------\n";break;
      
      case 3: 
      cout<<"\n-----------------------------------------------------------\n";
      cout<<"inverse matrix of\n\n";
      display_2order(a11, a12, a21, a22);
      cout<<"is \n\n";
      inverse_2order(a11, a12, a21, a22);
      display_2order(a11, a12, a21, a22); cout; 
      cout<<"\n-----------------------------------------------------------\n";break;     

      case 4: cout<<"\n\npls enter the location with respect to which the cofactor is calculated\n";
              cout<<"location is = ";
              cin>>location;
              cout<<"\n-----------------------------------------------------------\n";
              cout<<"cofactor of a"<<location<<" in matrix\n\n";
              display_2order(a11, a12, a21, a22);
              cout<<" is "<<cofactor_2order(location, a11, a12, a21, a22); 
              cout<<"\n-----------------------------------------------------------\n";break;             
    }
    cout<<"\n1. study further the matrix\n";
    cout<<"2. exit the matrix calculator\n";
    cin>>fur;
    if(fur==1){a11=c11; a12=c12; a21=c21; a22=c22; goto selection;} // re-assign the value
  }
}

void imple_3order(){
  double a11, a12, a13, a21, a22, a23, a31, a32, a33;
  double c11, c12, c13, c21, c22, c23, c31, c32, c33;
  int conf, mode, location, fur;
  beginning:;
  input_3order(a11, a12, a13, a21, a22, a23, a31, a32, a33);
  c11=a11; c12=a12; c13=a13; 
  c21=a21; c22=a22; c23=a23; 
  c31=a31; c32=a32; c33=a33;
  selection:;
  cout<<"\n-----------------------------------------------------------\n";
  cout<<"\nconfirm this matrix pls, correct=1, re-enter=0\n\n";
  display_3order(a11, a12, a13, a21, a22, a23, a31, a32, a33);
  cout<<"\n-----------------------------------------------------------\n";
  cin>>conf;
  if(conf==0){goto beginning; }    
  else{
    cout<<"\n\nwhich operation to carry out\n\n\n";
    cout<<"1 for determinant\n";
    cout<<"2 for adjoint matrix\n";
    cout<<"3 for inverse matrix\n";
    cout<<"4 for cofactor\n\n\n";
    cin>>mode;
    switch (mode){
      case 1: 
        cout<<"\n\n-----------------------------------------------------------\n";
        cout<<"determinant of matrix = "<<determ_3order(a11, a12, a13, a21, a22, a23, a31, a32, a33);
        cout<<"\n-----------------------------------------------------------\n"; break;
      case 2: 
        cout<<"\n-----------------------------------------------------------\n";
        cout<<"adjoint matrix of\n\n";
      display_3order(a11, a12, a13, a21, a22, a23, a31, a32, a33);
      cout<<"is \n\n";
      adjoint_3order(a11, a12, a13, a21, a22, a23, a31, a32, a33);
      display_3order(a11, a12, a13, a21, a22, a23, a31, a32, a33);
        cout<<"-----------------------------------------------------------\n";break;
      
      case 3: 
        cout<<"\n-----------------------------------------------------------\n";
        cout<<"inverse matrix of\n\n";
      display_3order(a11, a12, a13, a21, a22, a23, a31, a32, a33);
      cout<<"is \n\n";
      inverse_3order(a11, a12, a13, a21, a22, a23, a31, a32, a33);
      display_3order(a11, a12, a13, a21, a22, a23, a31, a32, a33);
        cout<<"\n-----------------------------------------------------------\n";break;    

      case 4: cout<<"\n\npls enter the location with respect to which the cofactor is calculated\n";
              cout<<"location is = ";
              cin>>location;
              cout<<"\n-----------------------------------------------------------\n";
              cout<<"cofactor of a"<<location<<" in matrix\n\n";
              display_3order(a11, a12, a13, a21, a22, a23, a31, a32, a33);
              cout<<" is "<<cofactor_3order(location, a11, a12, a13, a21, a22, a23, a31, a32, a33); 
              cout<<"\n-----------------------------------------------------------\n";break;             
    }
    cout<<"\n1. study further the matrix\n";
    cout<<"2. exit the matrix calculator\n";
    cin>>fur;
    if(fur==1){a11=c11; a12=c12; a13=c13; 
    a21=c21; a22=c22; a23=c23; 
    a31=c31; a32=c32; a33=c33; goto selection;} // re-assign the value
  }
}

void imple_4order(){
  double a11, a12, a13, a14, a21, a22, a23, a24, a31, a32, a33, a34, a41, a42, a43, a44;
  double c11, c12, c13, c14, c21, c22, c23, c24, c31, c32, c33, c34, c41, c42, c43, c44;
  int conf, mode, location, fur;
  beginning:;
  input_4order(a11, a12, a13, a14, a21, a22, a23, a24, a31, a32, a33, a34, a41, a42, a43, a44);
    c11=a11; c12=a12; c13=a13; c14=a14;
    c21=a21; c22=a22; c23=a23; c24=a24;
    c31=a31; c32=a32; c33=a33; c34=a34;
    c41=a41; c42=a42; c43=a43; c44=a44;
  selection:;
  cout<<"\n-----------------------------------------------------------\n";
  cout<<"\n\nconfirm this matrix pls, correct=1, re-enter=0\n\n";
  display_4order(a11, a12, a13, a14, a21, a22, a23, a24, a31, a32, a33, a34, a41, a42, a43, a44);
  cout<<"\n-----------------------------------------------------------\n";
  cin>>conf;
  if(conf==0){goto beginning; }    
  else{
    cout<<"\n\nwhich operation to carry out\n\n\n";
    cout<<"1 for determinant\n";
    cout<<"2 for adjoint matrix\n";
    cout<<"3 for inverse matrix\n";
    cout<<"4 for cofactor\n\n\n";
    cin>>mode;
    switch (mode){
      case 1: 
      cout<<"\n\n-----------------------------------------------------------\n";
      cout<<"determinant of matrix = "<<determ_4order(a11, a12, a13, a14, a21, a22, a23, a24, a31, a32, a33, a34, a41, a42, a43, a44);
      cout<<"\n-----------------------------------------------------------\n";break;
      case 2: 
      cout<<"\n-----------------------------------------------------------\n";
      cout<<"adjoint matrix of\n\n";
      display_4order(a11, a12, a13, a14, a21, a22, a23, a24, a31, a32, a33, a34, a41, a42, a43, a44);
      cout<<"is \n\n";
      adjoint_4order(a11, a12, a13, a14, a21, a22, a23, a24, a31, a32, a33, a34, a41, a42, a43, a44);
      display_4order(a11, a12, a13, a14, a21, a22, a23, a24, a31, a32, a33, a34, a41, a42, a43, a44);
      cout<<"-----------------------------------------------------------\n";break;
      
      case 3: 
      cout<<"\n-----------------------------------------------------------\n";
      cout<<"inverse matrix of\n\n";
      display_4order(a11, a12, a13, a14, a21, a22, a23, a24, a31, a32, a33, a34, a41, a42, a43, a44);
      cout<<"is \n\n";
      inverse_4order(a11, a12, a13, a14, a21, a22, a23, a24, a31, a32, a33, a34, a41, a42, a43, a44);
      display_4order(a11, a12, a13, a14, a21, a22, a23, a24, a31, a32, a33, a34, a41, a42, a43, a44);
      cout<<"-----------------------------------------------------------\n";break;     

      case 4: cout<<"\n\npls enter the location with respect to which the cofactor is calculated\n";
              cout<<"location is = ";
              cin>>location;
              cout<<"\n-----------------------------------------------------------\n";
              cout<<"cofactor of a"<<location<<" in matrix\n\n";
              display_4order(a11, a12, a13, a14, a21, a22, a23, a24, a31, a32, a33, a34, a41, a42, a43, a44);
              cout<<" is "<<cofactor_4order(location, a11, a12, a13, a14, a21, a22, a23, a24, a31, a32, a33, a34, a41, a42, a43, a44); 
              cout<<"\n------------------------------------------------------------n";break;             
    }
    cout<<"\n1. study further the matrix\n";
    cout<<"2. exit the matrix calculator\n";
    cin>>fur;
    if(fur==1){a11=c11; a12=c12; a13=c13; a14=c14;
    a21=c21; a22=c22; a23=c23; a24=c24;
    a31=c31; a32=c32; a33=c33; a34=c34;
    a41=c41; a42=c42; a43=c43; a44=c44; goto selection;} // re-assign the value
  }
}

void imple_5order(){
  double a11, a12, a13, a14, a15, a21, a22, a23, a24, a25, a31, a32, a33, a34, a35, a41, a42, a43, a44, a45,  a51, a52, a53, a54, a55;
  double c11, c12, c13, c14, c15, 
  c21, c22, c23, c24, c25,
  c31, c32, c33, c34, c35,
  c41, c42, c43, c44, c45,
  c51, c52, c53, c54, c55;;
  int conf, mode, location, fur;
  beginning:;
  input_5order(a11, a12, a13, a14, a15, a21, a22, a23, a24, a25, a31, a32, a33, a34, a35, a41, a42, a43, a44, a45,  a51, a52, a53, a54, a55);
  c11=a11; c12=a12; c13=a13; c14=a14; c15=a15;
  c21=a21; c22=a22; c23=a23; c24=a24; c25=a25;
  c31=a31; c32=a32; c33=a33; c34=a34; c35=a35;
  c41=a41; c42=a42; c43=a43; c44=a44; c45=a45;
  c51=a51; c52=a52; c53=a53; c54=a54; c55=a55; 
  cout<<"\n-----------------------------------------------------------\n";
  selection:;
  cout<<"\n\nconfirm this matrix pls, correct=1, re-enter=0\n\n";
  display_5order(a11, a12, a13, a14, a15, a21, a22, a23, a24, a25, a31, a32, a33, a34, a35, a41, a42, a43, a44, a45,  a51, a52, a53, a54, a55);
  cout<<"\n-----------------------------------------------------------\n";
  cin>>conf;
  if(conf==0){goto beginning; }    
  else{
    cout<<"\n\nwhich operation to carry out\n\n\n";
    cout<<"1 for determinant\n";
    cout<<"2 for adjoint matrix\n";
    cout<<"3 for inverse matrix\n";
    cout<<"4 for cofactor\n\n\n";
    cin>>mode;
    switch (mode){
      case 1: 
      cout<<"\n\n-----------------------------------------------------------\n";
      cout<<"determinant of matrix = "<<determ_5order(a11, a12, a13, a14, a15, a21, a22, a23, a24, a25, a31, a32, a33, a34, a35, a41, a42, a43, a44, a45,  a51, a52, a53, a54, a55);
      cout<<"\n-----------------------------------------------------------\n"; 
      break;
      case 2: 
      cout<<"\n-----------------------------------------------------------\n";
      cout<<"adjoint matrix of\n\n";
      display_5order(a11, a12, a13, a14, a15, a21, a22, a23, a24, a25, a31, a32, a33, a34, a35, a41, a42, a43, a44, a45,  a51, a52, a53, a54, a55);
      cout<<"is \n\n";
      adjoint_5order(a11, a12, a13, a14, a15, a21, a22, a23, a24, a25, a31, a32, a33, a34, a35, a41, a42, a43, a44, a45,  a51, a52, a53, a54, a55);
      display_5order(a11, a12, a13, a14, a15, a21, a22, a23, a24, a25, a31, a32, a33, a34, a35, a41, a42, a43, a44, a45,  a51, a52, a53, a54, a55);
      cout<<"-----------------------------------------------------------\n";
      break;
      
      case 3:
      cout<<"\n-----------------------------------------------------------\n";
      cout<<"inverse matrix of\n\n";
      display_5order(a11, a12, a13, a14, a15, a21, a22, a23, a24, a25, a31, a32, a33, a34, a35, a41, a42, a43, a44, a45,  a51, a52, a53, a54, a55);
      cout<<"is \n\n";
      inverse_5order(a11, a12, a13, a14, a15, a21, a22, a23, a24, a25, a31, a32, a33, a34, a35, a41, a42, a43, a44, a45,  a51, a52, a53, a54, a55);
      display_5order(a11, a12, a13, a14, a15, a21, a22, a23, a24, a25, a31, a32, a33, a34, a35, a41, a42, a43, a44, a45,  a51, a52, a53, a54, a55);
      cout<<"\n-----------------------------------------------------------\n";break;     

      case 4: cout<<"\n\npls enter the location with respect to which the cofactor is calculated\n";
              cout<<"location is = ";
              cin>>location;
              cout<<"\n-----------------------------------------------------------\n";
              cout<<"cofactor of a"<<location<<" in matrix\n\n";
              display_5order(a11, a12, a13, a14, a15, a21, a22, a23, a24, a25, a31, a32, a33, a34, a35, a41, a42, a43, a44, a45,  a51, a52, a53, a54, a55);
              cout<<" is "<<cofactor_5order(location, a11, a12, a13, a14, a15, a21, a22, a23, a24, a25, a31, a32, a33, a34, a35, a41, a42, a43, a44, a45,  a51, a52, a53, a54, a55); 
             cout<<"\n-----------------------------------------------------------\n";break;             
    }
    cout<<"\n1. study further the matrix\n";
    cout<<"2. exit the matrix calculator\n";
    cin>>fur;
    if(fur==1){a11=c11; a12=c12; a13=c13; a14=c14; a15=c15;
    a21=c21; a22=c22; a23=c23; a24=c24; a25=c25;
    a31=c31; a32=c32; a33=c33; a34=c34; a35=c35;
    a41=c41; a42=c42; a43=c43; a44=c44; a45=c45; 
    a51=c51; a52=c52; a53=c53; a54=c54; a55=c55; goto selection;} // re-assign the value
  }
}

void imple_6order(){
  double a11, a12, a13, a14, a15, a16,
  a21, a22, a23, a24, a25, a26,
  a31, a32, a33, a34, a35, a36,
  a41, a42, a43, a44, a45, a46,
  a51, a52, a53, a54, a55, a56,
  a61, a62, a63, a64, a65, a66;
  double c11, c12, c13, c14, c15, c16, 
  c21, c22, c23, c24, c25, c26,
  c31, c32, c33, c34, c35, c36,
  c41, c42, c43, c44, c45, c46,
  c51, c52, c53, c54, c55, c56,
  c61, c62, c63, c64, c65, c66;
  int conf, mode, location, fur;
  beginning:;
  input_6order(a11, a12, a13, a14, a15, a16,
  a21, a22, a23, a24, a25, a26,
  a31, a32, a33, a34, a35, a36,
  a41, a42, a43, a44, a45, a46,
  a51, a52, a53, a54, a55, a56,
  a61, a62, a63, a64, a65, a66);
  
  c11=a11; c12=a12; c13=a13; c14=a14; c15=a15; c16=a16;
  c21=a21; c22=a22; c23=a23; c24=a24; c25=a25; c26=a26;
  c31=a31; c32=a32; c33=a33; c34=a34; c35=a35; c36=a36;
  c41=a41; c42=a42; c43=a43; c44=a44; c45=a45; c46=a46;
  c51=a51; c52=a52; c53=a53; c54=a54; c55=a55; c56=a56;
  c61=a61; c62=a62; c63=a63; c64=a64; c65=a65; c66=a66;
  selection:;
  cout<<"\n-----------------------------------------------------------\n";
  cout<<"\n\nconfirm this matrix pls, correct=1, re-enter=0\n\n";
  display_6order(a11, a12, a13, a14, a15, a16,
  a21, a22, a23, a24, a25, a26,
  a31, a32, a33, a34, a35, a36,
  a41, a42, a43, a44, a45, a46,
  a51, a52, a53, a54, a55, a56,
  a61, a62, a63, a64, a65, a66);
  cout<<"\n-----------------------------------------------------------\n";
  cin>>conf;
  if(conf==0){goto beginning; }    
  else{
    cout<<"which operation to carry out\n\n\n";
    cout<<"1 for determinant\n";
    cout<<"2 for adjoint matrix\n";
    cout<<"3 for inverse matrix\n";
    cout<<"4 for cofactor\n\n\n";
    cin>>mode;
    switch (mode){
      case 1: 
      cout<<"\n\n-----------------------------------------------------------\n";
      cout<<"determinant of matrix = "<<determ_6order(a11, a12, a13, a14, a15, a16,
  a21, a22, a23, a24, a25, a26,
  a31, a32, a33, a34, a35, a36,
  a41, a42, a43, a44, a45, a46,
  a51, a52, a53, a54, a55, a56,
  a61, a62, a63, a64, a65, a66);
      cout<<"\n-----------------------------------------------------------\n";break;
      case 2: 
        cout<<"\n-----------------------------------------------------------\n";
        cout<<"adjoint matrix of\n\n";
      display_6order(a11, a12, a13, a14, a15, a16,
                      a21, a22, a23, a24, a25, a26,
                      a31, a32, a33, a34, a35, a36,
                      a41, a42, a43, a44, a45, a46,
                      a51, a52, a53, a54, a55, a56,
                      a61, a62, a63, a64, a65, a66);
      cout<<"is \n\n";
      adjoint_6order(a11, a12, a13, a14, a15, a16,
                    a21, a22, a23, a24, a25, a26,
                    a31, a32, a33, a34, a35, a36,
                    a41, a42, a43, a44, a45, a46,
                    a51, a52, a53, a54, a55, a56,
                    a61, a62, a63, a64, a65, a66);
      display_6order(a11, a12, a13, a14, a15, a16,
                    a21, a22, a23, a24, a25, a26,
                    a31, a32, a33, a34, a35, a36,
                    a41, a42, a43, a44, a45, a46,
                    a51, a52, a53, a54, a55, a56,
                    a61, a62, a63, a64, a65, a66);
        cout<<"-----------------------------------------------------------\n";
        break;
      
      case 3:
        cout<<"\n-----------------------------------------------------------\n";
        cout<<"inverse matrix of\n\n";
      display_6order(a11, a12, a13, a14, a15, a16,
                    a21, a22, a23, a24, a25, a26,
                    a31, a32, a33, a34, a35, a36,
                    a41, a42, a43, a44, a45, a46,
                    a51, a52, a53, a54, a55, a56,
                    a61, a62, a63, a64, a65, a66);
      cout<<"is \n\n";
      inverse_6order(a11, a12, a13, a14, a15, a16,
                    a21, a22, a23, a24, a25, a26,
                    a31, a32, a33, a34, a35, a36,
                    a41, a42, a43, a44, a45, a46,
                    a51, a52, a53, a54, a55, a56,
                    a61, a62, a63, a64, a65, a66);
      display_6order(a11, a12, a13, a14, a15, a16,
                      a21, a22, a23, a24, a25, a26,
                      a31, a32, a33, a34, a35, a36,
                      a41, a42, a43, a44, a45, a46,
                      a51, a52, a53, a54, a55, a56,
                      a61, a62, a63, a64, a65, a66);
        cout<<"\n-----------------------------------------------------------\n";
        break;     

      case 4: cout<<"\n\npls enter the location with respect to which the cofactor is calculated\n";
              cout<<"location is = \n";
              cin>>location;
              cout<<"\n-----------------------------------------------------------\n";
              cout<<"cofactor of a"<<location<<" in matrix\n\n";
              display_6order(a11, a12, a13, a14, a15, a16,
                              a21, a22, a23, a24, a25, a26,
                              a31, a32, a33, a34, a35, a36,
                              a41, a42, a43, a44, a45, a46,
                              a51, a52, a53, a54, a55, a56,
                              a61, a62, a63, a64, a65, a66);
              cout<<" is "<<cofactor_6order(location, a11, a12, a13, a14, a15, a16,
                                            a21, a22, a23, a24, a25, a26,
                                            a31, a32, a33, a34, a35, a36,
                                            a41, a42, a43, a44, a45, a46,
                                            a51, a52, a53, a54, a55, a56,
                                            a61, a62, a63, a64, a65, a66); 
              cout<<"\n-----------------------------------------------------------\n";
              break;             
    }
    cout<<"\n1. study further the matrix\n";
    cout<<"2. exit the matrix calculator\n";
    cin>>fur;
    if(fur==1){a11=c11; a12=c12; a13=c13; a14=c14; a15=c15; a16=c16;
    a21=c21; a22=c22; a23=c23; a24=c24; a25=c25; a26=c26;
    a31=c31; a32=c32; a33=c33; a34=c34; a35=c35; a36=c36;
    a41=c41; a42=c42; a43=c43; a44=c44; a45=c45; a46=c46;
    a51=c51; a52=c52; a53=c53; a54=c54; a55=c55; a56=c56;
    a61=c61; a62=c62; a63=c63; a64=c64; a65=c65; a66=c66; goto selection;} // re-assign the value
  }
}