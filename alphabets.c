// ABCDE
// ABCDE
// ABCDE
// ABCDE
// ABCDE





#include<stdio.h>
int main(){
    iint a;
    printf("enter the row: ");
    scanf("%f",&a);
    int b;
    printf("enter the row: ");
    scanf("%f",&b);
    // int ch=65;
    for (int i = 1; i <= a; i++)//no. of lines
    {
        int ch=65;
        for (int j = 1; j <=b; j++)//no.of star
        {
            printf("%c",ch);
            ch=ch+1;
            /* code */
        }
        printf("\n");
        
        /* code */
    }
    
    return 0;
}
