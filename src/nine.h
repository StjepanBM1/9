
#pragma once

#include <stdio.h>
#include <stdlib.h>

int res;
int points;
double x, y;
char op;

correct(double x, char op, double y)
{
    printf("\n\t %lf %c %lf = 9\n", x, op, y);
    points++;
    write_scr(points);

    return 0;
}

wrong(double x, char op, double y)
{
    printf("\n\t %lf %c %lf != 9\n", x, op, y);
    points--;
    write_scr(points);

    return 1;
}

write_scr(int points)
{

    FILE *fptr;

    fptr = fopen("nine.scr", "w");

    if (fptr == NULL)
    {
        printf("\t! Error file nine.scr == NULL !\n"); exit(1);
    }

    fprintf(fptr, "%d", points);
    fclose(fptr);

    return 0;

}
