#include <stdio.h>
int main(){
    int a,b;
    int c;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Entre the value of b: ");
    scanf("%d", &b);
    printf("Enter your operation: 1 for addition/  2 for substraction/ 3 for multiplication / 4 for division/   5 for average");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        printf("%d",a+b);   // 1 for addition
        break;              // 2 for substraction
        case 2:             // 3 for multiplication
        printf("%d",a-b);   // 4 for division
        break;              // 5 for average
        case 3:
        printf("%d",a*b);
        break;
        case 4:
        printf("%d",a/b);
        break;
        case 5:
        printf("%d",(a+b)/2); // '_' is used here for calculating average
        break;
    
   
    }
    return 0;
}