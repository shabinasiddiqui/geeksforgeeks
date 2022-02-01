int chocolates(int arr[], int n)
{   
   int left=0,right=n-1;
    for(int i=0;i<n;i++){
        if(left==right){
            return arr[left];
        }
        else if(arr[left]>arr[right]){
            left++;
        }
        else{
            right--;
        }
    }
}