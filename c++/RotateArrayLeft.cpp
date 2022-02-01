//problem link: https://practice.geeksforgeeks.org/problems/reversal-algorithm5340/1#

class Solution{   
public:
    void reverse(int arr[],int low,int high){
    while(low<high){
       int temp = arr[low];
       arr[low]=arr[high];
       arr[high]=temp;
       low++;
       high--;
    }
    
}
    void leftRotate(int arr[], int n, int d) {
        reverse(arr,0,d-1);
        reverse(arr,d,n-1);
        reverse(arr,0,n-1);
        
        // code here
    }
};