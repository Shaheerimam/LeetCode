class MyQueue {
public:
    MyQueue() {
        
    }
    stack<int> s;
    void push(int x) {
        s.push(x);
    }
    
    int pop() {
        stack<int> s2;
        int val;
        while(!s.empty()){
            val=s.top();
            s.pop();
            if(s.empty()==true){
                break;
            }
            s2.push(val);
        }
        while(!s2.empty()){
            s.push(s2.top());
            s2.pop();
        }
        return val;
    }
    
    int peek() {
        stack<int> s2;
        int val;
        while(!s.empty()){
            val=s.top();
            s.pop();
            s2.push(val);
        }
        while(!s2.empty()){
            s.push(s2.top());
            s2.pop();
        }
        return val;
    }
    
    bool empty() {
        return s.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */