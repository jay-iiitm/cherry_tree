#include<stdio.h>
     
    int main()
    {
    	int n,i,j,k;
    	printf("enter size in array \n");
    	scanf("%d",&n);
        int a[n];
        int sum = 0;
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
         for (int i = 0; i < n; i++)
        {
               for (int j = i+1; j < n; j++)
            {
            
               for (int k = j+1; k < n; k++)
               if (a[i] + a[j] + a[k] == sum)
                printf("\na[i]=%d a[j]=%d a[k]=%d sum is=%d\t",a[i],a[j],a[k],sum);
             }
          }
     }
