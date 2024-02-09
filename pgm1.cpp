#include<bits/stdc++.h>
using namespace std;
void func(int arr[],int r,int n){
    int flag=0,i=0;
    for(i=0;i<n;i++){
        if(arr[i]==r){
            flag=1;
            break;
        }
    }
    if(flag==0)return;
    int cnt=0,flag1=0;
    while(cnt!=n){
        if(flag1==0){
            cnt++;
            arr[i]+=cnt;
            i+=cnt;
            if(i==n)i=0;
            flag1=1;
        }
        else{
            cnt++;
            arr[i]+=cnt;
            i-=cnt;
            if(i==0)i=n-1;
            flag1=0;
        }
    }
    for(int j=0;j<n;j++)cout<<arr[j]<<" ";

}
int main(){
    int arr[]={1,2,3,4,5,6};
    int r=4;
    int n=6;
    func(arr,r,n);
    return 0;
}