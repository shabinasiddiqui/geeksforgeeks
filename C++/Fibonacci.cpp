//problem link: https://practice.geeksforgeeks.org/problems/print-first-n-fibonacci-numbers1002/1#
class Solution
{
    public:
    vector<long long> printFibb(int n) 
    {    
        long long first=1,second=1,res=0;
        vector<long long> ans;
        if(n==1){
            ans.push_back(1);
            return ans;
        }
        ans.push_back(1);
        ans.push_back(1);
        for(int i=3;i<=n;i++){
            res = first+second;
             ans.push_back(res);
             first =second;
             second =res;
           
        }
        return ans;
    }
    
};