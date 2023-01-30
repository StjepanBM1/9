#include "nine.h"

main()
{

    printf("[ +, -, /, * ] ? ");
    scanf("%c", &op);

    printf("[ x & y ] ? ");
    scanf("%lf %lf", &x, &y);

    switch (op)
    {
        case '+':
            res = x+y;

            if (res == 9)
                correct(x, op, y);
            
            else { wrong(x, op, y); }

            break;

        case '-':
            res = x-y;

            if (res == 9)
                correct(x, op, y);
            
            else { wrong(x, op, y); }

            break;

        case '*':
            res = x*y;

            if (res == 9)
                correct(x, op, y);
            
            else { wrong(x, op, y); }

            break;

        case '/':
            res = x/y;

            if (res == 9)
                correct(x, op, y);
            
            else { wrong(x, op, y); }

            break;

    };
}
