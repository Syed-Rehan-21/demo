#include<stdio.h>
void Multi(int n,int i);
int main()
{
    int n;
    printf("Enter the Number: ");
    scanf("%d",&n);
    Multi(n,1);
    return 0;
}
void Multi(int n,int i){
    if(i>10){
        return;
    }
    Multi(n,i+1);
    printf("%d x %d = %d\n",n,i,n*i);
}