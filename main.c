#include <stdio.h>
#include <stdlib.h>

void setPointer (char **q)
{
      *q = "proverb ver2";
}
int main(int argc, char *argv[]) {
    
    char *p = "zzz";
    setPointer(&p);
    printf("%s\n", p);
    
    system("PAUSE");
    return 0;
}
