#ifndef HEAD_H
#define HEAD_H

#include "iostream"
using namespace std;

void main_menu();
int cppout();
int LC();
int SC();
int V();
int changeV();
int size();
int Unsigned();
int String_C();
int Cin();
int AO();
int CO();
int TO();
int IF();
int get_random_number(int min,int max);
int logical();
int Switch();
int Enum();
int While_SUM();
int While_guess();
int W_nine_nine();
int For_even();
int F_nine_nine();
int love();
int salary();
int array_comp();
int array_iteration();
int pointer_array();
int new_delete();
int memory_free();
int select_sort();
int Struct();
int Struct_default();
int Struct_point();
int Struct_point_new();
int compare_max(int a,int b);
int compare_min(int a,int b);

struct max_min
{
    int max;
    int min;
};
struct max_min MAX_MIN(int max,int min);

int bank_menu();
int Balance_check(int Blance,string name);
int Balance_in(int *p,string name);
int Balance_out(int *p,string name);

int * get_random_int_arr();
void int_arr_sort(int arr[],int length);

#endif