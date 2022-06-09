// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;
int selSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        int temp = arr[i];
        arr[i]=arr[min_index];
        arr[min_index]=temp;
    }
    return -1;
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" " ;
    }
}


int main(){
	cout<<"Snigdha Markanday"<<endl;
	int arr[] = {4,19,30,1,34,8};
	int n = sizeof(arr)/sizeof(int);
	selSort(arr,n);
	printArray(arr,n);
	return 0;
}
