class MinStack {
private:
    std::stack<int> mainStack; // Main stack to store all elements
    std::stack<int> minStack; // Auxiliary stack to store the minimum elements

public:
    MinStack() {
       
    }
    
    void push(int val) {
       
        mainStack.push(val);
        
        if (minStack.empty() || val <= minStack.top()) {
            minStack.push(val);
        }
    }
    
    void pop() {
       
        if (mainStack.top() == minStack.top()) {
            minStack.pop();
        }
        
        mainStack.pop();
    }
    
    int top() {
        
        return mainStack.top();
    }
    
    int getMin() {
       
        return minStack.top();
    }
};
