#include <stdio.h>
void shellsort(int arr[], int num)
{
    int i, j, k, tmp;
    for (i = num / 2; i > 0; i = i / 2)
    {
        for (j = i; j < num; j++)
        {
            for(k = j - i; k >= 0; k = k - i)
            {
                if (arr[k+i] >= arr[k])
                    break;
                else
                {
                    tmp = arr[k];
                    arr[k] = arr[k+i];
                    arr[k+i] = tmp;
                }
            }
        }
	}
}
int main()
{
    int i,num=8,a[8]={5,12,19,2,1,54,13,56};
    shellsort(a, num);
    printf("\n Sorted array is: ");
    for (i=0;i<num;i++)
        printf("%d ", a[i]);
    return 0;

}
