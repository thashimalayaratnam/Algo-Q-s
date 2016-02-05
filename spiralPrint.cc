#include <stdio.h>
#define R 3
#define C 6
 
void spiralPrint(int m, int n, int a[R][C])
{
    int i, top = 0, left = 0;
    int bottom = m;
    int right = n;
  
  
    /*  k - starting row index
        m - ending row index
        l - starting column index
        n - ending column index
        i - iterator
    */
 
    while (top < bottom && left < right)
    {
        /* Print the first row from the remaining rows */
        for (i = left; i < right; ++i)
        {
            printf("%d ", a[top][i]);
        }
        top++;
 
        /* Print the last column from the remaining columns */
        for (i = top; i < bottom; ++i)
        {
            printf("%d ", a[i][right-1]);
        }
        right--;
 
        /* Print the last row from the remaining rows */
        if ( top < bottom)
        {
            for (i = right-1; i >= left; --i)
            {
                printf("%d ", a[bottom-1][i]);
            }
            bottom--;
        }
 
        /* Print the first column from the remaining columns */
        if (left < right)
        {
            for (i = bottom-1; i >= top; --i)
            {
                printf("%d ", a[i][left]);
            }
            left++;    
        }        
    }
}
 
/* Driver program to test above functions */
int main()
{
    int a[R][C] = { {1,  2,  3,  4,  5,  6},
        {7,  8,  9,  10, 11, 12},
        {13, 14, 15, 16, 17, 18}
    };
 
    spiralPrint(R, C, a);
    return 0;
}
 
/* OUTPUT:
  1 2 3 4 5 6 12 18 17 16 15 14 13 7 8 9 10 11
*/