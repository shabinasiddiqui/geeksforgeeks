// problem link: https://practice.geeksforgeeks.org/problems/product-of-maximum-in-first-array-and-minimum-in-second3943/1/?category[]=Arrays&category[]=Arrays&page=1&query=category[]Arrayspage1category[]Arrays#

class Solution{
public:
        long long find_multiplication(int a[], int b[], int n, int m)
    {
        int max=a[0];
        long long ans;
        for(int i=1;i<n;i++){
            if(a[i]>max){
                max=a[i];
            }
        }
        
        int min=b[0];
        for(int i=1;i<m;i++){
            if(b[i]<min){
                min=b[i];
            }
        }
        
        return ans=max*min;
    }
};
