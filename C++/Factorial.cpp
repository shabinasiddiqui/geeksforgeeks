//problem link: https://practice.geeksforgeeks.org/problems/factorial5739/1
class Solution{
    public:
    long long int factorial(int N){
        //code here
        long long int fact=1;
        for(int i=N;i>=1;i--){
            fact*=i;
        }  
        return fact;
    }
  
};