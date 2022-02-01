//problem link: https://practice.geeksforgeeks.org/problems/armstrong-numbers2727/1/
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int temp=n;
        int num=0,res=0;
        while(n>0){
            num=n%10;
            res+=num*num*num;
            n=n/10;
        }
        if(temp==res){
            string str = "Yes";
            return str;
        }
        string str2="No";
        return str2;
    }
};