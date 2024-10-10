// #include<stdio.h>
// void main(){
//     int num,sqr;
//     printf("Enter a number>> \n");
//     scanf("%d", num);
//     sqr=num**2;
//     printf("The value is : %d is : %d",&num,&sqr);
// }

#include<stdio.h>

void main() {
    int num, sqr;
    printf("Enter a number>> \n");
    scanf("%d", &num);
    sqr = num * num;   
    printf("The square of %d is: %d\n", num, sqr);
}