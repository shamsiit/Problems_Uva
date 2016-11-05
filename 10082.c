#include<stdio.h>
#include<string.h>
int main()
{
long int l,i;
char key[100000];
while(gets(key))
    {
    l=strlen(key);
    for(i=0;i<l;i++)
        {
            if(key[i] == 'W')
            printf("Q");
            if(key[i] =='E')
            printf("W");
            if(key[i] =='R')
            printf("E");
            if(key[i] =='T')
            printf("R");
            if(key[i] =='Y')
            printf("T");
            if(key[i] =='U')
            printf("Y");
            if(key[i] =='I')
            printf("U");
            if(key[i] =='O')
            printf("I");
            if(key[i] =='P')
            printf("O");
            if(key[i] =='S')
            printf("A");
            if(key[i] =='D')
            printf("S");
            if(key[i] =='F')
            printf("D");
            if(key[i] =='G')
            printf("F");
            if(key[i] =='H')
            printf("G");
            if(key[i] =='J')
            printf("H");
            if(key[i] =='K')
            printf("J");
            if(key[i] =='L')
            printf("K");
            if(key[i] =='X')
            printf("Z");
            if(key[i] =='C')
            printf("X");
            if(key[i] =='V')
            printf("C");
            if(key[i] =='B')
            printf("V");
            if(key[i] =='N')
            printf("B");
            if(key[i] =='M')
            printf("N");
            if(key[i] =='2')
            printf("1");
            if(key[i] =='3')
            printf("2");
           if(key[i] =='4')
            printf("3");
            if(key[i] =='5')
            printf("4");
            if(key[i] =='6')
            printf("5");
            if(key[i] =='7')
            printf("6");
            if(key[i] =='8')
            printf("7");
            if(key[i] =='9')
            printf("8");
            if(key[i] =='0')
            printf("9");
            if(key[i] =='-')
            printf("0");
            if(key[i] =='=')
            printf("-");
            if(key[i] =='[')
            printf("P");
            if(key[i] ==']')
            printf("[");
            if(key[i] =='\\')
            printf("]");
            if(key[i] ==';')
            printf("L"); 
            if(key[i] =='1')
            printf("`");
            if(key[i] ==',')
            printf("M");
            if(key[i] =='.')
            printf(",");
            if(key[i] =='/')
            printf(".");
            if(key[i] ==' ')
            printf(" ");                 
            if(key[i] =='\'')
            printf(";");    
        
        }
    printf("\n");
    }
return 0;
}
