//
// Created by michael on 01/01/2022.
//

# include <stdio.h>

int main( void ) {
    int i = 6, j = i += i;
    printf( "%d, %d\n", i, j );
    return 0;
}

