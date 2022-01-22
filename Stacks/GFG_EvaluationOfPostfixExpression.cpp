// { Driver Code Starts
// C++ program to evaluate value of a postfix expression

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {
        int n=S.size();
        stack<int>Stack;
        for(int i=0;i<n;i++){
            if((S[i]-'0')>=0&&(S[i]-'0')<=9){
                Stack.push(S[i]-'0');
            }
            else {
                int b=Stack.top();
                Stack.pop();
                int a=Stack.top();
                Stack.pop();
                if(S[i]=='+'){
                    Stack.push(a+b);
                }
                else if(S[i]=='-'){
                    Stack.push(a-b);
                }
                else if(S[i]=='*'){
                    Stack.push(a*b);
                }
                else if(S[i]=='/'){
                    Stack.push(a/b);
                }
            }
        }
        return Stack.top();
    }
};

// { Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
    
    cout<<obj.evaluatePostfix(S)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
