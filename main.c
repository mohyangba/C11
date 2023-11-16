#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i;
  int grade[5];
  int sum=0; // 합
  
  //grade에 입력 
  for (i=0;i<5;i++) 
  {
      printf("Entergrade[%i] = \n", i);
      scanf("%d", &grade[i]);
  }
  
  //반복문 및 포인터 문법으로 grade 배열값 출력  
  for (i=0;i<5;i++) 
  {
      printf("grade[%i] = %i\n", i, grade[i]);
     sum += *(grade+i);
  }
   // 평균 값 계산  
  float average = (float) sum/5;
  printf("average = %.2f\n", average);
   
  system("PAUSE");	
  return 0;
}
