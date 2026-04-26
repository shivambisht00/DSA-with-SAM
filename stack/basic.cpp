#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top: " << st.top() << endl; // 30

    st.pop(); // 30 remove

    cout << "Top after pop: " << st.top() << endl; // 20

    cout << "Size: " << st.size() << endl;

    cout << "Is empty: " << st.empty() << endl;

    return 0;
}
