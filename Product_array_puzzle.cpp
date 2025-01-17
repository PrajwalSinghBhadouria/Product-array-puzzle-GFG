//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        // code here
        int count = 0;
        int pro=1;
        vector<int> p;
        for(int i=0; i<arr.size(); i++){
            pro = pro*arr[i];
            if(arr[i]==0){
                count++;
                p.push_back(i);
            }
        }
        vector<int> v(arr.size(),0);
        if(count==0){
            for(int i=0; i<arr.size(); i++)
            v[i] = (pro/arr[i]);
        }
        else if(count==1){
            pro = 1;
            for(int i=0; i<arr.size(); i++){
                if(arr[i]!=0){
                    pro = pro*arr[i];
                }
            }
            v[p[0]]=pro;
        }
        return v;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;

        while (ss >> number) {
            arr.push_back(number);
        }

        Solution obj;
        vector<int> res = obj.productExceptSelf(arr);

        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends
