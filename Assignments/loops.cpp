#include<iostream>
using namespace std;
int main(){
    //Snigdha Markanday
    int n,s=0,i=0;
    cin>>n;
    //Step 1 
    while(i<=n){
        s=s+i;
        i++;
    }
    cout<<"Sum is "<<s<<endl;
    //Step 2
    int sum=0;
    for(i=0;i<=5;i++){
        sum=sum+i;
        //cout<<<<endl;
    }
    cout<<"Sum is "<<sum<<endl;
    //Step 3
    int n1,t=0;
    
    for(i=0;i<5;i++){
        cin>>n1;
        t=t+n1;
    }
    cout<<"Sum of given no.s is "<<t<<endl;
     //Step 4
     int r,c;
     for(r=1;r<=5;r++){
         for(c=1;c<r;c++){
             cout<<"1";
             
         }
         cout<<endl;
     }
    
    
    
    
    return 0;
    
    
    
    
}
