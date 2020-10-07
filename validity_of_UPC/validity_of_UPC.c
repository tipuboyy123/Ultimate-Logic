#include <stdio.h>
int main()
{
    int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,d;
    printf("enter UPC: ");
    scanf ("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &a1,&a2,&a3,&a4,&a5,&a6,&a7,&a8,&a9,&a10,&a11,&a12);
    d = 9 - (((3*(a1+a3+a5+a7+a9+a11) + a2+a4+a6+a8+a10) -1)%10 );
    if (a12 == d)
        printf("Valid\n");
    else
        printf("Invalid");
}