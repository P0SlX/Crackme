#include <stdio.h>
#include <string.h>
#include <unistd.h> // needed to use getcwd()

int main(int argc, char *argv[])
{
    char path[4096];
    int lenPath;
    int i = 0;

    getcwd(path, 0x1000);   // get the program's path
    lenPath = strlen(path); // get the path length and store it as an integer

    while (i < lenPath)
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
    printf("Key:  %s\n", path);
    return 0;
}
