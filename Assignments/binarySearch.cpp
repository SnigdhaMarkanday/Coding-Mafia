// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int target){
    int l=0;
    int h=n-1;
    while(l<=h){
        int m=(l+h)/2;
        if(arr[m]==target){
            return m;
        }
        else if(arr[m]>target){
            h=m-1;
        }
        else{
            l=m+1;
        }
    }
    return -1;
}



int main(){
	cout<<"Snigdha Markanday"<<endl;
	int arr[] = {1,4,19,30,49,88,100,103,109,112,119};
	int n = sizeof(arr)/sizeof(int);
	cout<<binarySearch(arr,n,112);
	return 0;
}
