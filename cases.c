#include <stdio.h>

int main()
{
    char suite =3;
    switch(suite)
    {
        case 1:
        printf("\nDiamond");
        case 2:
        printf("\nSpade");
        case 3:
        printf("\nYes");
	break; 
        default:
        printf("\nHeart");
        }
        printf("\nI thought one wears a suite");
}


