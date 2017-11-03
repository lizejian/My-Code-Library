//快速排序
//把整个数组分成若干个小组，分别进行排序。
//时间复杂度O(nlogn)，空间复杂度O(n)

using namespace std;

int Partition(int* array, int length, int begin, int end);
void printArray(int* array, int begin, int end);
void QuickSort(int* array, int length, int begin, int end)
{
	if (begin == end)
		return;
	int index = Partition(array, length, begin, end);
	if (begin < index)
		QuickSort(array, length, begin, index-1);
	if (index < end)
		QuickSort(array, length, index+1, end);
}
//重排，比end小的在左，比end大的在右
int Partition(int* array, int length, int begin, int end)
{
	if (array == nullptr || length <= 0 || begin < 0 || end >= length)
		return -1;
	int index = begin-1;
	for (int j = begin; j < end; j++)
	{
		if (array[j] <= array[end])
		{
			index++;
			swap(array[index], array[j]);
		}
	}
	index++;
	swap(array[index], array[end]);
	return index;
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
	QuickSort(array, 9, 0, 8);
	printArray(array, 0, 8);
}