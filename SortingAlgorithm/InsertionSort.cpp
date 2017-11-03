//插入排序
//每一次都保证前i个数字是有序的。
//时间复杂度O(n^2),时间复杂度O(n)

using namespace std;

void printArray(int* array, int begin, int end);
void InsertionSort(int* array, int length, int begin, int end)
{
	if (length < 2)
		return;
	for (int i = begin+1; i <= end; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (array[i] < array[j])
			{
				int temp = array[i];
				for (int k = i; k > j; k--)
					array[k] = array[k-1];
				array[j] = temp;
			}
		}
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
	InsertionSort(array, 9, 0, 8);
	printArray(array, 0, 8);
}