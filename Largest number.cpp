class Solution {
public:
static bool comp (string a,string b)
{
    string t1 = a+b;
        string t2 = b+a;
        return t1>t2;

}
    string largestNumber(vector<int>& nums) {
        vector<string>num;
        for(auto it:nums)
        {
            num.push_back(to_string(it));
        }
        sort(num.begin(),num.end(),comp);
        if(num[0] =="0")return "0";
        string ans="";
        for(auto it:num)
        {
            ans+=it;
        }
        return ans;
    }
};