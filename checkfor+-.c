#include<stdio.h>
int main(){
    int num;
    printf("enter the value of number\n");
    scanf("%d",&num);
    if(num>0)
    printf("%d is positive number\n", num );
    else if(num<0)
    printf("%d is negative number",num);
    else
    printf("number is neither positive nor negative\n");
    return 0;
}