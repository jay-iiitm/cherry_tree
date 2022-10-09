#include <stdio.h>
int main()
{
    int a[8][8], b[8][8], result[8][8], m, n, r2, c2, i, j, k;
    printf("Enter rows and column for first matrix: ");
    scanf("%d %d", &m, &n);
    printf("Enter rows and column for second matrix: ");
    scanf("%d %d",&r2, &c2);
    while (n != r2)
    {
        printf("number of rows should be equal\n");
        printf("Enter rows and column for first matrix: ");
        scanf("%d %d", &m, &n);
        printf("Enter rows and column for second matrix: ");
        scanf("%d %d",&r2, &c2);
    }
    printf("\nEnter elements of matrix 1:\n");
    for(i=0; i<m; ++i)
        for(j=0; j<n; ++j)
        {
            printf("Enter elements a%d%d: ",i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    printf("\nEnter elements of matrix 2:\n");
    for(i=0; i<r2; ++i)
        for(j=0; j<c2; ++j)
        {
            printf("Enter elements b%d%d: ",i+1, j+1);
            scanf("%d",&b[i][j]);
        }
    for(i=0; i<m; ++i)
        for(j=0; j<c2; ++j)
        {
            result[i][j] = 0;
        }
    for(i=0; i<m; ++i)
        for(j=0; j<c2; ++j)
            for(k=0; k<n; ++k)
            {
                result[i][j]+=a[i][k]*b[k][j];
            }
    printf("\nOutput Matrix:\n");
    for(i=0; i<m; ++i)
        for(j=0; j<c2; ++j)
        {
            printf("%d  ", result[i][j]);
            if(j == c2-1)
                printf("\n\n");
        }
    return 0;
}

