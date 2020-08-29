#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printx(vector<int> arr, int n);

int main() {
	int t,n,temp;
	cin >> t;
	while(t--) {
	    cin >> n;
	    vector<int> arr;
	    for(int i=0;i<n;i++) {
	        cin >> temp;
	        arr.push_back(temp);
	    }
	    printx(arr,n);
	}
	return 0;
}

void printx(vector<int> arr, int n) {
    stack<int> st;
    int max = arr[n-1];
    st.push(max);
    for(int i=n-2;i>=0;i--) {
        if(arr[i]>=max) {
            max = arr[i];
            st.push(max);
        }
    }
    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}