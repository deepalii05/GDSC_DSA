#include <iostream>
#include<vector>
using namespace std;

int main() {
    int t,n,temp;
    vector<int>num;
	cout<<"Enter Number of test cases";
	cin>>t;
	while(t>0){
	cout<<"Enter size of array";
	cin>>n;
	cout<<"Enter array";
	for(int i=0;i<n;i++){
	    cin>>temp;
	    num.push_back(temp);
	}
	for(int i=num.size()-1;i>=0;i--){
	    cout<<num[i];
	}
	num.clear();
	}
	return 0;
}
