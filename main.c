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
  int i;
  int grade[5];
  int average=0;
  
  for (i=0;i<5;i++) 
  {
      printf("grade[%i] = ", i);
      scanf("%d", &grade[i]);
  }
  
  //반복문 및 포인터 문법으로 grade 배열값 출력  
  for (i=0;i<5;i++) 
  {
      printf("grade[%i] = %i\n", *(grade+i));
      // 평균 값 계산  
      average = average + *(grade+i);
  }
  
  system("PAUSE");	
  return 0;
}
