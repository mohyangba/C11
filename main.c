#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int i = 4;

    int *pi = &i;
    char *pc = (char *)&i; // Cast the pointer to char

    printf("%i, %i, %i\n", i, *pi, *pc); // Corrected pointer dereference

    system("PAUSE");
    return 0;
}
