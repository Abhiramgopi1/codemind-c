#include<stdio.h>
int prime(int i)
{
    int j;
    if(i==1)
    {
        return 0;
    }
    for(j=2;j<(i/2)+1;j++)
    {
        if(i%j==0)
        {
            return 0;
        }
    }
    return 1;
};
int main()
{
    int n;
    scanf("%d",&n);
    if (prime(n)){
        printf("prime");
    }
    else
    {
        printf("not a prime");
    }
}