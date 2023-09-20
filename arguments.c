#include "monty.h"
/**
 * arguments - entry point
 * @argc: the number of argument
 * @argv: the arguments
 * Return: 0(success) else error set appropriately
 */
int arguments(int argc)
{
    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }
    return (0);
}