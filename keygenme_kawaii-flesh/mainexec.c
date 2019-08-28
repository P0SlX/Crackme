// The compiled version need to have the same length of the keygenme one, if not, the result will be wrong
// This is why the name is mainexec and not main...
// Took me 1h to figure out that keys was integers and not letters fml

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
    int iVar1;

    if (argc == 3)
    {
        uVar3 = idc(argv[1]);
        cVar1 = *argv[1];
        sVar4 = strlen(*argv);
        iVar1 = atoi(argv[2]);

        if ((uVar3 ^ cVar1 * 3) << (sVar4 & 0x1f) == iVar1)
            printf("Good job!\n");
        else
            printf("Wrong key!\n");
    }
    else
        printf("keygenme [name] [key]\n");
    return 0;
}
