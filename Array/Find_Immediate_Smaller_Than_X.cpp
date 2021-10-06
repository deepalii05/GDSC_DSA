// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    void swap(int&a,int&b){
        int temp=a;a=b;b=temp;
    }
    void heapify(int arr[],int n,int i){
        int largest=i;
        int left=2*i+1;
        int right=2*i+2;
        if(left<n&&arr[left]>arr[largest])
            largest=left;
        if(right<n&&arr[right]>arr[largest])
            largest=right;
        if(largest!=i){
            swap(arr[i],arr[largest]);
            heapify(arr,n,largest);
        }
    }
    void heap_sort(int arr[],int n){
        for(int i=n/2-1;i>=0;i--)
        {heapify(arr,n,i);}
        for(int i=n-1;i>=0;i--){
            swap(arr[0],arr[i]);
            heapify(arr,i,0);
        }
        
    }
    int binary_search(int arr[],int start,int end,int x){
       int mid=(start+end)/2;
        while(start<end){
             if (arr[mid] == x)return mid;
            if(x<arr[mid]) {end=mid-1;binary_search(arr,start,end,x);}
            else if(x>arr[mid]){start=mid;binary_search(arr,start,end,x);}
        }return -1;
    }
    int immediateSmaller(int arr[], int n, int x)
    {
    heap_sort(arr,n);
     int var=binary_search(arr,0,n-1,x);
     return arr[var-1];
    }
};


// { Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    
            int n;
        	cin >> n;
        	
        	int arr[n];
        	
        	for(int i = 0;i<n;i++){
        	    cin >> arr[i];
        	}
        	
        	int x;
        	cin >> x;
        	Solution ob;
        	cout << ob.immediateSmaller(arr, n, x) << endl;
	}
	
	
	return 0;
}
  // } Driver Code Ends
