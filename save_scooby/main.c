#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
    char path[4096];
    int i = 0;
    int pathLen;

    getcwd(path, 0x1000);
    pathLen = strlen(path);

    while (i < pathLen)
    {
        if (path[i] == '/') // a "/" will be converted into a "$"
            path[i] = '$';
        else
        {
            if ((path[i] < 'a' || path[i] > 'z')) // for other letter than a-z
            {
                if ((path[i] > '@') && (path[i] < '[')) // for caps letter
                    path[i] = path[i] + '\x1e';
            }
            else
            {
                path[i] = path[i] - 0x1e; // shift letter by 0x1e (30 in decimal)
            }
        }
        i++;
    }

    char usrImput[4096];
    printf("Hi Scooby !!\nWhere are you??\n");
    scanf("%s", usrImput);

    int usrImputLen;
    usrImputLen = strlen(usrImput);

    i=0;
    while (true)
    {
        if((usrImputLen <= i) || (pathLen <= i))
        {
            printf("\nYou won a medal Scooby !!\n");
            return 0;
        }
        if (path[i] != usrImput[i])
            break;

        i++;

    }
    printf("\nScooby Doobie Doo!! Not too easy\n");
}