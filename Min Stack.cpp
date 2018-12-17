class MinStack {
    stack<int> s;
    stack<int> trackMin;

public:
    /** initialize your data structure here. */
    MinStack() {

    }

    void push(int x) {
        if(trackMin.empty() || x<=trackMin.top()) trackMin.push(x);
        s.push(x);
    }

    void pop() {
        if(s.empty()) return;
        if(s.top() == trackMin.top()) trackMin.pop();
        s.pop();
    }

    int top() {
        return s.top();
    }

    int getMin() {
        return trackMin.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */
