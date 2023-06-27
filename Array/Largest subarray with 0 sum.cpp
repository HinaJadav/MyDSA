//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        
        int preSum[n+1];
        preSum[1] = A[0];
        
        for(int i = 2; i <= n; i++) {
            preSum[i] = preSum[i-1] + A[i-1];
        }
        
        // for(int i = 0; i < n; i++) {
        //     cout << preSum[i] << " ";
        // }
        
        unordered_map<int, int> Hash_map;
        int ans = 0;
        if(preSum[1] == 0) {
            ans = 1;
        }
        else {
            Hash_map[preSum[1]] = 1;
        }
        
        for(int i = 2; i <= n; i++) {
            if(preSum[i] == 0) {
                ans = max(ans, i);
            }
            else {
                if(Hash_map[preSum[i]] != 0) {
                    ans = max(ans, i - Hash_map[preSum[i]]);
                }
                else {
                    Hash_map[preSum[i]] = i;
                }
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends