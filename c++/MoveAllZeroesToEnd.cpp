// Problem link: https://practice.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	    int index=0;
	    for(int i=0;i<n;i++ ){
	        if(arr[i]!=0){
	            arr[index]=arr[i];
	            index++;
	        }
	    }
	    for(int i = index;i<n;i++){
	        arr[i]=0;
	    }
	}
};