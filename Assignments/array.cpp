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
    //Step 4 
    char matrix[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           cin>>matrix[i][j]; 
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           cout<<matrix[i][j]<<" "; 
        }
        cout<<endl;
    }
    return 0;
}
