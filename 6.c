/*Write a program to accept a float value and an integer as input. 
The integer represents the precision. Print the float value according to the precision.
Input Format: Two Space Separated numbers 'num' ( Float value ) and 'precision' ( Integer ) Output Format: A Single Float value with appropriate precision.*/
#include<stdio.h>
int main()
{
    float a;
    int b;
    scanf("%f %d",&a,&b);
    printf("%.*f",b,a);
    
}
