//problem link: https://practice.geeksforgeeks.org/problems/c-arrays-sum-of-array-set-14805/1/?category[]=Arrays&category[]=Arrays&page=1&query=category[]Arrayspage1category[]Arrays

class Solution{
    public:
    int getSum(int a[], int n) {
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
        }
        return sum;
        // Your code goes here
    }   
};