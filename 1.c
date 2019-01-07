//旋转数组
#include <stdio.h>
void rotate(int *nums, int numsSize, int k);
void main()
{
    int i, m, k;
    int nums[99];
    printf("enter the number of the numsSize:");
    scanf("%d", &m);
    printf("enter the number of the k:");
    scanf("%d", &k);

    for (i = 0; i < m; i++)
    {
        printf("enter the nums:");
        scanf("%d", &nums[i]);
    }
    rotate(nums, m, k);
    for (int i = 0; i < m; i++)
    {
        printf("%d", nums[i]);
    }
}

void rotate(int *nums, int numsSize, int k)
{
    int a[numsSize];
    for (int i = 0; i < numsSize; i++)
    {
        a[i] = 0;
    }
    for (int i = 0; i < numsSize; i++)
    {
        if (i + k < numsSize)
        {
            a[i + k] = nums[i];
        }
        else
        {
            //a[i-k-1]=nums[i];//出现数组越界的可能
            int j;
            j = (k + i) % numsSize;
            a[j] = nums[i];
        }
    }
    for (int i = 0; i < numsSize; i++)
    {
        nums[i] = a[i];
    }
}
