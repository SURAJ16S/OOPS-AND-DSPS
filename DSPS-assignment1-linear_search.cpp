#include<iostream>
using namespace std;

void count(int arr[],int n,int target){
    int count = 0, i=0;
    for(i=0;i<n;i++){
        if(arr[i]==target){
            count+=1;

        }
    }
    cout<<"Element "<<target<<" is repeated "<<count<<" Times";
}

int main(){
    int arr[10];
    int n , i=0 , target ,flag=0;
    cout<<"Enter Array Size :";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"Enter "<<i<<" Position Element :";
        cin>>arr[i];
    }
    cout<<"Enter Element To Search :";
    cin>>target;
    
    for(i=0;i<n;i++){
        if(arr[i]==target){
            flag = 1;
            break;
        }
    }
    
    if(flag){
        cout<<"Element "<<target<<" Present At "<<i<<" Position"<<endl;
    }
    else{
        cout<<"Element "<<target<<" Not Present";
    }
    
   count(arr,n,target);
    
    return 0;
}
