#include <stdio.h>
#include <stdlib.h>

void swap (int *x, int *y) {
     int temp;
     temp = *x;
     *x = *y;
     *y = temp;
     }
     
int main(int argc, char *argv[])
{
  int a = 3;
  int b = 5;
  
  swap(&a, &b); // 포인터를 받는 형태니까 변수의 주솟값을 입력 
  
  printf("a: %i, b: %i \n", a, b);
  
  system("PAUSE");	
  return 0;
}
