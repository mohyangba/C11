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
  
  //�ݺ��� �� ������ �������� grade �迭�� ���  
  for (i=0;i<5;i++) 
  {
      printf("grade[%i] = %i\n", *(grade+i));
      // ��� �� ���  
      average = average + *(grade+i);
  }
  
  system("PAUSE");	
  return 0;
}
