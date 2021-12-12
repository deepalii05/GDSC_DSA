#include<iostream>
using namespace std;
 bool isPowerOfTwo(int n) {
        if(n==1)
            return true;
        if(n%2==1||n<1)
            return false;
        else return isPowerOfTwo(n/2);
        return true;
    }
int main(){
    int n;
    cout<<"\nenter any value of n to check if that is power of two or not";
    cin>>n;
    if(isPowerOfTwo(n)==true)
    cout<<"yes";
    else cout<<"no";
    return 0;
}