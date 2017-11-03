//归并排序
//将数组一直二分，再接着合并。
//时间复杂度O(nlogn),空间复杂度O(n)

#include<iostream>

void printArray(int* array, int begin, int end);
void Merge(int* array, int begin, int mid ,int end);
void MergeSort(int* array, int length, int begin, int end)
{
	if (end == begin)
		return;
	int mid = (begin + end)/2;
	MergeSort(array, length, begin, mid);
	MergeSort(array, length, mid+1, end);
	Merge(array, begin, mid, end);
}
void Merge(int* array, int begin, int mid ,int end)
{
	int i = begin, j = mid+1;
	int k = 0;
	int *tempArray = new int[end-begin+1];
	while(i <= mid && j <= end)
	{
		if (array[i] < array[j]) 
		{
			tempArray[k] = array[i];
			k++;
			i++;
		}
		else
		{
			tempArray[k] = array[j];
			k++;
			j++;
		}
	}
	while (j <= end)
	{
		tempArray[k] = array[j];
		k++;
		j++;
	}
	while (i <= mid)
	{
		tempArray[k] = array[i];
		k++;
		i++;
	}
	for (i = 0; i < k; i++)
		array[begin+i] = tempArray[i];
}
//打印
void printArray(int* array, int begin, int end)
{
	for (int i = begin; i <= end; i++)
		printf("%d ", array[i]);
	printf("\n");
}
int main()
{
	int array[] = {1,3,5,9,8,6,4,2,7};
	MergeSort(array, 9, 0, 8);
	printArray(array, 0, 8);
}