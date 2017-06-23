/* 
 * printargs prints the list of arguments from the command line.
 * It returns EXIT_SUCCESS if at least one argument was specified,
 * or EXIT_FAILURE if no arguments were specified.
 *
 * 2017 Steve Branam <sdbranam@gmail.com> learntocode
 */

#include <stdio.h>
#include <stdlib.h>

#define MIN_ARGS 2

int main(int argc, char *argv[])
{
    int i;

    if (argc < MIN_ARGS)
    {
        printf("Usage: %s <arguments>\n"
               "Prints command line arguments.\n",
               argv[0]);
        return EXIT_FAILURE;
    }
    else
    {
        for (i = 0; i < argc; ++i)
        {
            printf("%d: %s\n", i, argv[i]);
        }
    }
    return EXIT_SUCCESS;
}
