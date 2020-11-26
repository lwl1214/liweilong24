#include"sort.h"

int main(int argc, char **argv) {
	int arr[] = {52, 12, 16, 78, 82, 65, 28, 36};
	int arrSize = sizeof(arr)/sizeof(int);
	outArr(arr, arrSize);
//	bubble(arr, arrSize);
//	InsertSort(arr, arrSize);
//	SelectSort(arr, arrSize);
	QuickSort(arr, 0, arrSize-1);
	outArr(arr, arrSize);
	return 0;
}
