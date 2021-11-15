#include<bits/stdc++.h>
using namespace.std;
class Solution{
public:
long long int factorial(int n){
    if(n==0||n==1)
    return 1;
    else return n*factorial(n-1);
}};
int main()
{
int t;
cin>>t;
while(t--){
int N;
cin>>N;
Solution ob;
cout<<ob.factorial(N)<<endl;
}
return 0;
}
