//Input practice with Scanf
#include<stdio.h>
int main(){
    int num,num2;
    float num3;
    char ch;
    printf("Enter a character: \n");
    scanf("%c",&ch); //Character input
    printf("Your entered character is: %c \n", ch);
    printf("Enter 2 integer num: \n");
    scanf("%d %d", &num, &num2); //Integer input
    printf("You have entered: %d %d \n",num, num2);
    scanf("%d", &num);
    printf("Your new num is: %d \n", num);
    printf("Enter a float number: \n");
    scanf("%f", &num3); //Float input
    printf("Your entered float number is: %.3f \n",num3);
    printf("Now enter 2 integer, 1 float, 1 character which is new: \n");
    scanf("%d %d %f %c",&num,&num2,&num3,&ch);
    printf("All variables new data: %d %d %f %c",num,num2,num3,ch);
    return 0;
}
