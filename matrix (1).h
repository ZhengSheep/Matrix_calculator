#ifndef MATRIX_H
#define MATRIX_H
#include "matrix.h"
#include <iostream>
#include <math.h>
#include <regex>
#include <bits/stdc++.h>
#define pi 3.141592653579
using namespace std;

void display_2order(double a11, double a12, double a21, double a22);
void display_3order(double a11, double a12, double a13, double a21, double a22,
                    double a23, double a31, double a32, double a33);
void display_4order(double a11, double a12, double a13, double a14, double a21,
                    double a22, double a23, double a24, double a31, double a32,
                    double a33, double a34, double a41, double a42, double a43,
                    double a44);
void display_5order(double a11, double a12, double a13, double a14, double a15,
                    double a21, double a22, double a23, double a24, double a25,
                    double a31, double a32, double a33, double a34, double a35,
                    double a41, double a42, double a43, double a44, double a45,
                    double a51, double a52, double a53, double a54, double a55);

void display_6order(double a11, double a12, double a13, double a14, double a15,
                    double a16, double a21, double a22, double a23, double a24,
                    double a25, double a26, double a31, double a32, double a33,
                    double a34, double a35, double a36, double a41, double a42,
                    double a43, double a44, double a45, double a46, double a51,
                    double a52, double a53, double a54, double a55, double a56,
                    double a61, double a62, double a63, double a64, double a65,
                    double a66);

void input_2order(double &a11, double &a12, double &a21, double &a22);
void input_3order(double &a11, double &a12, double &a13, double &a21,
                  double &a22, double &a23, double &a31, double &a32,
                  double &a33);
void input_4order(double &a11, double &a12, double &a13, double &a14,
                  double &a21, double &a22, double &a23, double &a24,
                  double &a31, double &a32, double &a33, double &a34,
                  double &a41, double &a42, double &a43, double &a44);
void input_5order(double &a11, double &a12, double &a13, double &a14,
                  double &a15, double &a21, double &a22, double &a23,
                  double &a24, double &a25, double &a31, double &a32,
                  double &a33, double &a34, double &a35, double &a41,
                  double &a42, double &a43, double &a44, double &a45,
                  double &a51, double &a52, double &a53, double &a54,
                  double &a55);
void input_6order(double &a11, double &a12, double &a13, double &a14,
                  double &a15, double &a16, double &a21, double &a22,
                  double &a23, double &a24, double &a25, double &a26,
                  double &a31, double &a32, double &a33, double &a34,
                  double &a35, double &a36, double &a41, double &a42,
                  double &a43, double &a44, double &a45, double &a46,
                  double &a51, double &a52, double &a53, double &a54,
                  double &a55, double &a56, double &a61, double &a62,
                  double &a63, double &a64, double &a65, double &a66);


double determ_2order(double a11, double a12, double a21, double a22);
double determ_3order(double a11, double a12, double a13,
double a21, double a22, double a23,
double a31, double a32, double a33);
double determ_4order(double a11, double a12, double a13, double a14, 
double a21, double a22, double a23, double a24,
double a31, double a32, double a33, double a34, 
double a41, double a42, double a43, double a44);
double determ_5order(double a11, double a12, double a13, double a14,double a15, 
double a21, double a22, double a23, double a24, double a25, 
double a31, double a32, double a33, double a34, double a35, 
double a41, double a42, double a43, double a44, double a45,
double a51, double a52, double a53, double a54, double a55);
double determ_6order(double a11, double a12, double a13, double a14,double a15, double a16,
double a21, double a22, double a23, double a24, double a25, double a26,
double a31, double a32, double a33, double a34, double a35, double a36,
double a41, double a42, double a43, double a44, double a45, double a46,
double a51, double a52, double a53, double a54, double a55, double a56,
double a61, double a62, double a63, double a64, double a65, double a66);


double cofactor_2order(int location, double a11, double a12, double a21, double a22);
void adjoint_2order(double &a11, double &a12, double &a21, double &a22);
void inverse_2order(double &a11, double &a12, double &a21, double &a22);

double cofactor_3order(int location, //remaint have positive and negative sign
double a11, double a12, double a13,
double a21, double a22, double a23,
double a31, double a32, double a33);
void adjoint_3order(double &a11, double &a12, double &a13,
double &a21, double &a22, double &a23,
double &a31, double &a32, double &a33);
void inverse_3order(double &a11, double &a12, double &a13,
double &a21, double &a22, double &a23,
double &a31, double &a32, double &a33);


double cofactor_4order(int location, 
double a11, double a12, double a13, double a14, 
double a21, double a22, double a23, double a24,
double a31, double a32, double a33, double a34, 
double a41, double a42, double a43, double a44);
void adjoint_4order(double &a11, double &a12, double &a13, double &a14, 
double &a21, double &a22, double &a23, double &a24,
double &a31, double &a32, double &a33, double &a34, 
double &a41, double &a42, double &a43, double &a44);
void inverse_4order(double &a11, double &a12, double &a13, double &a14, 
double &a21, double &a22, double &a23, double &a24,
double &a31, double &a32, double &a33, double &a34, 
double &a41, double &a42, double &a43, double &a44);

double cofactor_5order(int location, 
double a11, double a12, double a13, double a14,double a15, 
double a21, double a22, double a23, double a24, double a25, 
double a31, double a32, double a33, double a34, double a35, 
double a41, double a42, double a43, double a44, double a45,
double a51, double a52, double a53, double a54, double a55);
void adjoint_5order(
double &a11, double &a12, double &a13, double &a14, double &a15, 
double &a21, double &a22, double &a23, double &a24, double &a25, 
double &a31, double &a32, double &a33, double &a34, double &a35, 
double &a41, double &a42, double &a43, double &a44, double &a45,
double &a51, double &a52, double &a53, double &a54, double &a55);
void inverse_5order(double &a11, double &a12, double &a13, double &a14, double &a15, 
double &a21, double &a22, double &a23, double &a24, double &a25, 
double &a31, double &a32, double &a33, double &a34, double &a35, 
double &a41, double &a42, double &a43, double &a44, double &a45,
double &a51, double &a52, double &a53, double &a54, double &a55);


double cofactor_6order(int location, double a11, double a12, double a13, double a14,double a15, double a16,
double a21, double a22, double a23, double a24, double a25, double a26,
double a31, double a32, double a33, double a34, double a35, double a36,
double a41, double a42, double a43, double a44, double a45, double a46,
double a51, double a52, double a53, double a54, double a55, double a56,
double a61, double a62, double a63, double a64, double a65, double a66);
void adjoint_6order(double &a11, double &a12, double &a13, double &a14,double &a15, double &a16,
double &a21, double &a22, double &a23, double &a24, double &a25, double &a26,
double &a31, double &a32, double &a33, double &a34, double &a35, double &a36,
double &a41, double &a42, double &a43, double &a44, double &a45, double &a46,
double &a51, double &a52, double &a53, double &a54, double &a55, double &a56,
double &a61, double &a62, double &a63, double &a64, double &a65, double &a66);
void inverse_6order(double &a11, double &a12, double &a13, double &a14,double &a15, double &a16,
double &a21, double &a22, double &a23, double &a24, double &a25, double &a26,
double &a31, double &a32, double &a33, double &a34, double &a35, double &a36,
double &a41, double &a42, double &a43, double &a44, double &a45, double &a46,
double &a51, double &a52, double &a53, double &a54, double &a55, double &a56,
double &a61, double &a62, double &a63, double &a64, double &a65, double &a66);


double  **matrix_mult(int M,int N,int P);
double input_exec_multiply();

double **matrix_adds(int M,int N);
double input_exec_addition();

double **matrix_subs(int M,int N);
double input_exec_subtraction();





void matrix_menu();
int get_menu_input();
int get_order_input();
int get_operation_input();
void select_menu_item(int input);
void print_matrix_menu();
void go_back_to_main_menu();
bool is_integer(std::string num);
void menu_item_1();
void menu_item_2();
void imple_2order();
void imple_3order();
void imple_4order();
void imple_5order();
void imple_6order();


#endif