#include <stdio.h>
//printing o to 400 fah and its corresponing in cel
main()
{
    int fah, cel;
    int lower, upper, step;

    upper = 400; /* upper limit */
    step=20;

    fah = lower = 0; /* lower limit of the temperature*/

    printf("FAH\tCEL\n");
    do{
        cel=5*(fah-32)/9;
        printf("%d\t%d\n",fah,cel);
        fah += step;
    }while(fah <= 400);
}
