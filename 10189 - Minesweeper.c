#include<stdio.h>
#include<string.h>
 
 
#define MAXSIZE 101
 
  char MineField[MAXSIZE][MAXSIZE];
 
 
 
int main(){
 
    int n, m;
 
    int FieldNumber = 0;
    int i,j;
 
    while( scanf("%d%d", &n, &m) ){

        if(n==0 && m==0) break;
 
        for( i = 0; i < n; ++i)
            scanf("%s", MineField[i]);
 
 
        if( FieldNumber )
            printf("\n");
 
 
        for( i = 0; i < n; ++i){
            for( j = 0; j < m; ++j){
 
                if( MineField[i][j] == '*' )
                    continue;
 
                int temp = 0;
 
                if( i + 1 < n && MineField[i + 1][j] == '*' )
                    ++temp;
                if( i + 1 < n && j + 1 < m && MineField[i + 1][j + 1] == '*' )
                    ++temp;
                if( j + 1 < m && MineField[i][j + 1] == '*' )
                    ++temp;
                if( i - 1 >= 0 && j + 1 < m && MineField[i - 1][j + 1] == '*' )
                    ++temp;
                if( i - 1 >= 0 && MineField[i - 1][j] == '*' )
                    ++temp;
                if( i - 1 >= 0 && j - 1 >= 0 && MineField[i - 1][j - 1] == '*' )
                    ++temp;
                if( j - 1 >= 0 && MineField[i][j - 1] == '*' )
                    ++temp;
                if( i + 1 < n && j - 1 >= 0 && MineField[i + 1][j - 1] == '*' )
                    ++temp;
 
 
            MineField[i][j] = temp + '0';
 
            }
        }
 
 
        printf("Field #%d:\n", ++FieldNumber);
 
 
       for( i = 0; i < n; ++i){
            for( j = 0; j < m; ++j)
                putchar(MineField[i][j]);
            printf("\n");
       }
 
    }
 
    return 0;
}