#include<stdio.h>
void bubblesort(int* nums, int len)
{
	for (int i = len - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (nums[j] > nums[j + 1])
			{
				//交换
				int temp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = temp;
			}
		}
	}
}
int main()
{
	int nums[] = { 1,8,9,2,3,67,9 };
	int len = sizeof(nums) / sizeof(nums[0]);
	bubblesort(nums, len);
	for (int i = 0; i < len; i++)
	{
		printf("%d ", nums[i]);
	}
	return 0;
}
