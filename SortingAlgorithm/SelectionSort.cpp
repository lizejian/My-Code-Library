//选择排序
//每一次都选出数组中选取最小的放在当前排放的位置处 
//时间复杂度O(n^2),空间复杂度O(n)。
//与冒泡相比，交换次数少。

using namespace std;

void printArray(int* array, int begin, int end);
void SelectionSort(int* array, int length, int begin, int end)
{
	if (length < 2)
		return;
	int minNum;
	int minIdx;
	for (int i = begin; i <= end; i++)
	{
		minNum = array[i];
		minIdx = i;
		for (int j = i+1; j <= end; j++)
		{
			if (array[j] < minNum)
			{
				minNum = array[j];
				minIdx = j;
			}
		}
		swap(array[i], array[minIdx]);
		printArray(array, 0, 8);
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
	SelectionSort(array, 9, 0, 8);
	printArray(array, 0, 8);
}