#include<bits/stdc++.h>
using namespace std;
        //brute forrce
// int keypair(int arr[],int n,int x){
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]+arr[j]==x){
//                 return 1;
//             }
//         }
//     }
//     return 0;
// }
        //optimal approach
int twopointer(int arr[],int n,int x){
    int l=0;
    int h=n-1;
    while(l<h){
        int csum=arr[l]+arr[h];
        if(csum==x){
           return arr[l];
           
        }
        else if(csum>x){
            h--;
        }
        else{
            l++;
        }
    }
    return -1;
}
int keypair(int arr[],int n,int x){
    sort(arr,arr+n);
    return twopointer(arr,n,x);
}

int main(){
   
    int arr[] = {1, 2, 4, 3, 6};
     int n= 5, x = 10;
    int result=keypair(arr,n,x);
    if(result==-1){
        cout<<"no";
    }
    else{
        cout<<"yes"<<result;
    }
    
}