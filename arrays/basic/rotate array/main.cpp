#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,rotate,temp;

    cin >> t;
    for(int i=0;i<t;i++)
    {
        cin >> n >> rotate;
        vector<int> arr;
        for(int j=0;j<n;j++)
        {
            cin >> temp;
            arr.push_back(temp);
        }
        int r = rotate % n;
        for (int k = r; k < n; k++)
        {
            cout << arr[k] << " ";
        }
        for (int k = 0; k < r; k++)
        {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
    return 0;
}
