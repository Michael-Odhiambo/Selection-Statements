//
// Created by michael on 01/01/2022.
//

# include <stdio.h>

int main( void ) {
    int i = 5, j = ( i -= 2 ) + 1;
    printf( "%d, %d\n", i, j );
    return 0;
}

