//
// Created by michael on 01/01/2022.
//

# include <stdio.h>

int main( void ) {
    int i = 10, j = 5;
    printf( "%d\n", i++ - ++j );
    printf( "%d, %d\n", i, j );
    return 0;
}

