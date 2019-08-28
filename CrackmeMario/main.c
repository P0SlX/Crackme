#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
    char *usrImput;
    int usrImputLen;

    if (argc == 2)
    {
        usrImput = argv[1];
        usrImputLen = strlen(usrImput);

        if (usrImputLen == 9 && usrImput[4] == '-')
        {
            int i = 0;
            while (true)
            {
                if (usrImput[i] == '@')
                {
                    printf("good job! now keygen me!\n\n");
                    return 0;
                }

                if (usrImputLen <= i)
                {
                    printf("try again pal.\n\n");
                    return 1;
                }
                i++;
            }
        }
        else
            printf("try again pal.\n");
        return 1;
    }
    else
    {
        printf("usage <password>\n");
        return 1;
    }
}