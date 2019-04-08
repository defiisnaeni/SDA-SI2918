#include <iostream>
using namespace std;

void Merge (int a[],int low, int high, int mid){
	
	int i,j,k, temp[high-low+1];
	i = low;
	k = 0;
	j = mid + 1;

while (1 <= mid && j <= high){
	if(a[i] < a[i]){
		temp[k] = a[i];
		k++;
		i++;
	}
	else{
		temp [k] = a[j];
		k++;
		j++;
	}
}
while (i <= mid){
	temp[k] = a[i];
	k++;
	i++;
}

while (j <= high){
	temp [k] = a[j];
	k++;
	j++;
}

for (i = low; i <= high; i++){
	a[i] = temp[i-low];
	} 
}

void MergeSort (int a[], int low, int high){
	int mid;
	if(low < high){
		mid=(low+high)/2;
		Mergesort(a, low, mid);
		MergeSort(a, mid+1, high);
		Merge(a, low, high, mid);
	}
	return;
}

int main(){
	int i;
	int data[8] = {3,4,7,5,1,2,8,6};
	
	MergeSort(data, 0,8-1);
	
	cout<<"\nSorted Data";
	for (i =0; i < 8; i++){
		cout<< "->"<<data[i]
		
	}
	return 0;
}
