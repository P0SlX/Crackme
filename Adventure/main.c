/*

    How I solved it, very simple :

        Ex : $ ./adventure hello

        Use ltrace : $ ltrace ./adventure hello

        aaaaand we can see that the password is just the program's name.

        So if your program's name is "Windows_is_shit", your have to type: 

        $ ./Windows_is_shit hello
        $ Friendly greetings to you, hacker from another world !
        $ So, why are you here ? : ./Windows_is_shit
        $ ./Windows_is_shit ?  good, good, welcome to the guild hall!


 */



    //Here is my version of the source code:


#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        if (strlen(argv[1]) == 5 && !strcmp(argv[1], "hello"))
        {
            printf("Friendly greetings to you, hacker from another world !\n");
            printf("So, why are you here ? : \n");
            char test[180];
            scanf("%179s", test);
            printf("%s ?  ", test);

            if (strlen(test) == strlen(argv[0]) && !strcmp(test, argv[0]))
            {
                printf("good, good, welcome to the guild hall!\n");
            }
            else
            {
                printf("This is the guild hall, i can\'t let you in, sorry, i need to kill you now. Byyye~~~\n");
            }
        }
        else
        {
            printf("no no no ! it\'s not a socially appropriate greeting !\n");
        }
    }
    else
    {
        printf("Woaaa ! what about being polite ? huh ?\n");
    }
    return 0;
}