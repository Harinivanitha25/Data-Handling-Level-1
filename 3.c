/*Write a program to accept 2 numbers as input from the user.
Print the 2 numbers such that the second number is 17 width spaces away from the first. 
Input Format: Two Space Separated integers - num1, num2 Output Format: Display the two numbers with correct width space and without space in between.*/
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d%.017d",a,b);
}
