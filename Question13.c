//
// Created by michael on 01/01/2022.
//

# include <stdio.h>

int main( void ) {
    int i = 7, j = 6 + ( i = 2.5 );
    printf( "%d, %d\n", i, j );
    return 0;
}

