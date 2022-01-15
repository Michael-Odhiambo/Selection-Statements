//
// Created by michael on 01/01/2022.
//
/**
 * Write a program that asks the user to enter a two-digit number, then prints the number with its digits reversed.
 */

# include<stdio.h>

int main( void ) {
    int theNumber;
    printf( "Enter a two-digit number: " );
    scanf( "%d", &theNumber );
    printf( "The reversal is: %d%d\n",  theNumber % 10, theNumber / 10 );
    return 0;

}

