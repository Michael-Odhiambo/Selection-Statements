//
// Created by michael on 01/01/2022.
//
// Computes a Universal Product Code check digit.
/*
 * Procedure:
 * - Add the first, third, fifth, seventh, ninth, and eleventh digits.
 * - Add the second fourth, sixth, eighth, and tenth digits.
 * - Multiply the first sum by 3 and add it to the second sum.
 * - Subtract 1 from the total.
 * - Compute the remainder when the adjusted total is divided by 10.
 * - Subtract the remainder from 9.
 */

# include <stdio.h>

int main( void ) {

    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, checkDigit;

    printf( "Enter the first ( single ) digit: " );
    scanf( "%d", &num1 );

    printf( "Enter first group of five digits: " );
    scanf( "%1d%1d%1d%1d%1d", &num2, &num3, &num4, &num5, &num6 );

    printf( "Enter the second group of five digits: " );
    scanf( "%1d%1d%1d%1d%1d", &num7, &num8, &num9, &num10, &num11 );

    checkDigit = 9 - ( ( ( ( num1 + num3 + num5 + num7 + num9 + num11 ) * 3 ) + ( num2 + num4 + num6 + num8 + num10 ) -
            1 ) % 10 );

    printf( "Check digit: %d\n", checkDigit );

    return 0;
}

