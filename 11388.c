#include <stdio.h>
 
int main () {
    int cas;
    scanf ( "%d", &cas );
 
    while ( cas-- ) {
        int G, L;
        scanf ( "%d %d", &G, &L );
 
        int a, b;
         
        a = G;
         
        if ( L % G != 0 ) {
            printf ( "-1\n" );
            continue;
        }
         
        b = L;
         
        printf ( "%d %d\n", a, b );
    }
 
    return 0;
}