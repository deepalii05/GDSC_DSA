<h1>Solution 1:-</h1>
class MinStack {
public:
    stack<int>Stack1;
    stack<int>MinStack1;
    MinStack() {
        stack<int>Stack1;
        stack<int>MinStack1;
    }
    
    void push(int val) {
        if(Stack1.size()==0||MinStack1.top()>val){
            Stack1.push(val);
            MinStack1.push(val);
            return;
        }
        Stack1.push(val);
    }
    
    void pop() {
        
        if(MinStack1.top()==Stack1.top()){
            Stack1.pop();
            MinStack1.pop();
            return;
        }
        Stack1.pop();
    }
    
    int top() {
        return Stack1.top();
    }
    
    int getMin() {
        return MinStack1.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
 
 <h1>Solution 2:-</h1>
 class MinStack {
private:
    stack<int> s1;
    stack<int> s2;
public:
    void push(int x) {
	    s1.push(x);
	    if (s2.empty() || x <= getMin())  
            s2.push(x);	    
    }
    void pop() {
	    if (s1.top() == getMin())  
            s2.pop();
	    s1.pop();
    }
    int top() {
	    return s1.top();
    }
    int getMin() {
	    return s2.top();
    }
};
/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
