class MyStack {
private:
    std::queue<int> q;

public:
    MyStack() {
    }
    
    // Đẩy phần tử vào stack
    // Độ phức tạp: O(n) vì phải đẩy n phần tử ra và vào lại queue
    void push(int x) {
        q.push(x);
        int size = q.size();
        // Xoay vòng: đẩy n-1 phần tử phía trước ra sau phần tử vừa thêm
        for (int i = 0; i < size - 1; ++i) {
            q.push(q.front());
            q.pop();
        }
    }
    
    // Lấy và xóa phần tử trên cùng
    // Độ phức tạp: O(1)
    int pop() {
        int top = q.front();
        q.pop();
        return top;
    }
    
    // Xem phần tử trên cùng
    // Độ phức tạp: O(1)
    int top() {
        return q.front();
    }
    
    // Kiểm tra stack có rỗng không
    // Độ phức tạp: O(1)
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */