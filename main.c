#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i;
  int grade[5];
  int sum=0; // ��
  
  //grade�� �Է� 
  for (i=0;i<5;i++) 
  {
      printf("Entergrade[%i] = \n", i);
      scanf("%d", &grade[i]);
  }
  
  //�ݺ��� �� ������ �������� grade �迭�� ���  
  for (i=0;i<5;i++) 
  {
      printf("grade[%i] = %i\n", i, grade[i]);
     sum += *(grade+i);
  }
   // ��� �� ���  
  float average = (float) sum/5;
  printf("average = %.2f\n", average);
   
  system("PAUSE");	
  return 0;
}
