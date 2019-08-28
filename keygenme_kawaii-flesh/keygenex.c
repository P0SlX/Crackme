#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

int idc(char *argc)

{
    int nameLen;
    uint returnVal = 0;
    int i;

    i = 0;
    while (true)
    {
        nameLen = strlen(argc);
        returnVal = returnVal + argc[i];

        if (nameLen <= i)
            break;

        i++;
    }
    return returnVal;
}

int main(int argc, char *argv[])
{
    char cVar1;
    int uVar3;
    int sVar4;

    if (argc == 2)
    {
        uVar3 = idc(argv[1]);
        cVar1 = *argv[1];
        sVar4 = strlen(*argv);

        int pwd = (uVar3 ^ cVar1 * 3) << (sVar4 & 0x1f);
        printf("Key:  %d\n", pwd);
    }
    else
    {
        printf("usage [name]\n");
    }
    return 0;
}
