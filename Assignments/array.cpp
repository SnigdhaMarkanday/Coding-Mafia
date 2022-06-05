#include<iostream>
using namespace std;
int main(){
    cout<<"Snigdha Markanday"<<endl;
    //Step 1
    int arr[] ={1,2,3,4};
    for(int i=0;i<4;i++){
        cout<<arr[i]<<endl;
    }
    //Step 2
    for(int i=0;i<4;i++){
        arr[i]=arr[i]+100;
        cout<<arr[i]<<endl;
    }
    //Step 3
    int s=0;
    for(int i=0;i<4;i++){
        s=s+arr[i];
        cout<<s<<endl;
    }
    return 0;
}
