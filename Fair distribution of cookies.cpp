class Solution {
public:
    int result= INT_MAX;
   
    void solve(int idx, vector<int> & cookies, vector<int>&children, int k ,int n)
    {
        if(idx>=n)
        {
            int unfair=*max_element(begin(children),end(children));
            result= min(result, unfair);
            return;
        }

       int cookie= cookies[idx];
        for(int i =0;i<k;i++)
        {
            children[i]+=cookie;
            solve(idx+1,cookies, children, k,n);
            children[i]-=cookie;
        }
    }

    int distributeCookies(vector<int>& cookies, int k) {
        int n= cookies.size();
        vector<int>children(k,0);
        // int idx=0;
        solve(0, cookies, children,k,n);
        return result;
    }
};