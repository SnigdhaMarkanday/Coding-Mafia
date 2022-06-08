#include<iostream>
using namespace std;
int sum (int a, int b); // function Declaration
int sum (int a,int b,int c); //function Declaration
bool isPrime(int n){
    if(n<2){
        return false;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
void printStar(int n){
    int r,c;
     for(r=1;r<=n;r++){
         for(c=1;c<=r;c++){
             cout<<"*";
             
         }
         cout<<endl;
     }
}
int main(){
    cout<<"Snigdha Markanday"<<endl;
    //Step 1
    //Sum of 2 nos
    int res = sum(10,13);
    cout<<res<<endl;
    
    //Step 2 
    int s = sum(10,12,14);
    cout<<s<<endl;
    
    //Step 3
    //Print Prime numbers from 1 to 100
    int co = 0;
    for(int i=2;i<100;i++){
    if(isPrime (i)){
        cout<<i<<endl;
         co ++;
    }
   
    }
    cout<<"Total Prime nos."<<co<<endl;
    //Step 4
    int n;
    cout<<"Enter to input number of Stars";
    cin>>n;
    printStar(n);
    return 0;
}

int sum (int a,int b){
    int ans = a+b;
    return ans;
}
int sum (int a,int b,int c){
    int ans = a+b+c;
    return ans;
}

