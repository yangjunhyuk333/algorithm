#include <iostream>
#include <stack>

using namespace std;

int main() {

    stack<int> st;
    st.push(100);
    st.push(200);
    st.push(300);

    int a = 400;

    st.push(a);
    cout << st.top() << '\n';

    st.push(200 + 300);

    cout << st.top() << '\n';

    return 0;
}