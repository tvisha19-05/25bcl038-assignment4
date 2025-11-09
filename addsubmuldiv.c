#include <stdio.h>

float add(float a, float b){ return a+b; }
float sub(float a, float b){ return a-b; }
float mul(float a, float b){ return a*b; }
float divi(float a, float b){ return (b!=0)? a/b : 0; }

int main(){
    float a,b;
    int ch;
    printf("1.Add 2.Sub 3.Mul 4.Div\nEnter choice: ");
    scanf("%d",&ch);
    printf("Enter two numbers: ");
    scanf("%f%f",&a,&b);

    switch(ch){
        case 1: printf("Result = %.2f", add(a,b)); break;
        case 2: printf("Result = %.2f", sub(a,b)); break;
        case 3: printf("Result = %.2f", mul(a,b)); break;
        case 4: 
            if(b==0) printf("Error! Divide by zero");
            else printf("Result = %.2f", divi(a,b));
            break;
        default: printf("Invalid choice");
    }
    return 0;
}