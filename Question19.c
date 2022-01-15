//
// Created by michael on 01/01/2022.
//
// Extend the program in Question18.c to handle three digits.

# include<stdio.h>

int main( void ) {
    int firstVal, secondVal, thirdVal;
    printf( "Enter a three-digit number: " );
    scanf( "%1d%1d%1d", &firstVal, &secondVal, &thirdVal );
    printf( "The reversal: %d%d%d\n", thirdVal, secondVal, firstVal );
    return 0;
}

