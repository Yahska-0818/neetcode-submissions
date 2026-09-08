class MinStack {
private:
    long min;
    stack<long>stc;
public:
    MinStack() {}
    void push(int val) {
        if (stc.empty()) {
            stc.push(0);
            min = val;
        } else {
            stc.push(val - min);
            if (val < min) min = val;
        }
    }
    void pop() {
        if (stc.empty()) return;

        long pop = stc.top();
        stc.pop();

        if (pop < 0) min = min - pop;
    }
    int top() {
        long top = stc.top();
        return (top > 0) ? (top + min) : (int)min;
    }
    int getMin() {
        return (int)min;
    }
};
