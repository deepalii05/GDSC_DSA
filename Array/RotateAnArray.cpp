#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void rotateArr(int*arr, int d, int n){
        int temp[n];
        int c=0;
        for(int i=d;i<n;i++)
            temp[c++]=arr[i];
        for(int i=0;i<d;i++)
            temp[c++]=arr[i];
        arr=temp;
        cout<<"\nnew array after rotation";
    for(int i=0;i<n;i++)
    cout<<arr[i];
    }
};
int main(){
    int arr[5]={1,2,3,4,5};
    Solution S;
    S.rotateArr(arr,2,5);
    cout<<"\nnew array after rotation";
    for(int i=0;i<5;i++)
    cout<<arr[i];
}