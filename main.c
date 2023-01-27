#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// V2

void main(void)
{
    char * strMyName = "Ronnie";
    int lenMyName;

    lenMyName = strlen(strMyName);

    system("cls");

    printf("%s%s", "\n\tTask One:", "\n");
    printf("%s%s%s", "\n\tMy Name Is ", strMyName, "\n");
    printf("%s%d%s", "\n\tThe Name Contains ", lenMyName, " Characters\n\n\n");
    return;
}