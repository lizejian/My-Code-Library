//冒泡排序 从小到大
//在同一个数组中，从数组第一个数开始，相邻两个数进行比较，
//按照小左大右的顺序，依次循环遍历，进行排序。
//时间复杂度O(n^2),空间复杂度(n)

using namespace std;

void printArray(int* array, int begin, int end);
void BubbleSort(int* array, int length, int begin, int end)
{
	if (length < 2)
		return;
	bool exchanged;
	for (int i = begin; i <= end; i++)
	{
		exchanged = false;
		for (int j = 0; j <= end-1; j++)
		{
			if (array[j] > array[j+1])
			{
				swap(array[j], array[j+1]);
				exchanged = true;
			}
		}
		printArray(array, 0, 8);
		if (!exchanged)
			return;
	}
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
	BubbleSort(array, 9, 0, 8);
	printArray(array, 0, 8);
}