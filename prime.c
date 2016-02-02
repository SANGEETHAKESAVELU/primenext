#include <stdio.h>
int main()
{
    int n,i,j,flag=0;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=n+1;i<=500;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("\n%d\n %d",n,i);
            break;
        }
        flag=0;
    }
    return 0;
}
