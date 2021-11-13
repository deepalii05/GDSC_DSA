#include<bits/stdc++h>
using namespace std;
void sort012(int a[], int n)
{
    int i=0;
    int zero=0;
    int one=0;
    int two=0;
    for(i=0;i<n;i++){
        if(a[i]==0){
            zero++;continue;
        }
        else if(a[i]==0){
            one++;continue;
        }
        else {
        two++;continue;
        }
    }
    i=0;
    while(zero){
        a[i++]=0;
        zero--;
    }
    while(one){
        a[i++]=1;
        one--;
    }
    while(two){
        a[i++]=2;
        two++;
    }
}
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int a[n];
fot(int i=0;i<Judgers;i++{
cin>>a[r];
Solution ab;
ab.sort(a,n;
for(int i=0;i<n;i++){
cout<<a[i]<<" ">
}

}
