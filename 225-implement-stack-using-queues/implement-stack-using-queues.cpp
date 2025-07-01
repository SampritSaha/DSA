class MyStack {
public:
    queue<int> q1, q2;

    MyStack() {}

    void push(int x) {
        // Step 1: Push x to q2
        q2.push(x);

        // Step 2: Push all elements of q1 into q2
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }

        // Step 3: Swap q1 and q2
        swap(q1, q2);
    }

    int pop() {
        // Top element is at the front of q1
        int topElem = q1.front();
        q1.pop();
        return topElem;
    }

    int top() {
        return q1.front();  // Front is the top of stack
    }

    bool empty() {
        return q1.empty();
    }


    // deque<int> q;
    // MyStack() {       
    // }
    
    // void push(int x) {
    //     q.push_back(x);
    // }
    
    // int pop() {
    //     int b=q.back();
    //     q.pop_back();
    //     return b;
    // }
    
    // int top() {
    //     return q.back();
    // }
    
    // bool empty() {
    //     if(q.empty()){
    //         return true;
    //     }
    //     return false;
    // }
};




/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */