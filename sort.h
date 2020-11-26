#include"sort.h"

void bubble(int arr[], int arrSize){
	int tmp = 0;
	int swap = 1;
	while(swap){
		swap = 0;
		for(int i = 0; i < (arrSize -1); i++){
			if(arr[i] > arr[i + 1]){
				tmp = arr[i];
				arr[i] = arr[i + 1]; 
				arr[i + 1] = tmp;
				swap = 1;
			}   
		}   
	}   

	return;
}


void outArr(int arr[], int arrSize) {
	for(int i = 0; i < arrSize; i++) {
		printf("%d\t", arr[i]);
	}
	printf("\n");
	return;
}

void InsertSort(int arr[], int arrSize) {
	int i, j;
	for(i = 1; i < arrSize; i++) {
		int temp = arr[i];
		j = i - 1;
		while(j >= 0 && arr[j]>temp) {
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = temp;
	}
	return;
}

void SelectSort(int arr[], int arrSize) {
	int k, m;
	for(int i = 0; i < arrSize-1; i++) {
		m = arr[i];
		k = i;
		for(int j = i+1; j < arrSize; j++) 
			if(arr[j] < m) {
				m = arr[j];
				k = j;
			}
		arr[k] = arr[i];
		arr[i] = m;
	}	
	return;
}

void QuickSort(int arr[], int low, int high) {
	if(low<high){
		int i = low, j = high, x = arr[low];
		while(i < j) {
			while(i < j && arr[j]>=x) j--;
			if(i < j) {
			arr[i++] = arr[j];
			}
			while(i < j && arr[i]<x) i++;
			if(i < j) {
			arr[j--] = arr[i];
			}
		}	
		arr[i] = x;
		QuickSort(arr, low, i-1);
		QuickSort(arr, i+1, high);
		return;
	}	
}

