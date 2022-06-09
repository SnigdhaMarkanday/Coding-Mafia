// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i;
        }
        
    }
    return -1;
}



int main(){
	cout<<"Snigdha Markanday"<<endl;
	int arr[] = {1,4,10,8,19,30,34,8};
	int n = sizeof(arr)/sizeof(int);
	cout<<linearSearch(arr,n,10);
	return 0;
}
