#include<iostream>
using namespace std;

int main(){
	cout<<"Snigdha Markanday"<<endl;
	//Kadane's Algorithm
	//Continuous Sum of sub array
	int arr[9]={2,4,-8,9,10,-2,4,-20,10};
	int max_sum=arr[0];
	int curr_sum = arr[0];
	for(int i = 0;i<9;i++){
	    curr_sum = curr_sum+arr[i];
	    if(curr_sum<0){
	        curr_sum=0;
	    }
	    else{
	        if(max_sum<curr_sum){
	            max_sum=curr_sum;
	        }
	    }
	}
	cout<<max_sum;
	return 0;
}
