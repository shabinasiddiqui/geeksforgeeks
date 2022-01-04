//problem link: https://practice.geeksforgeeks.org/problems/largest-element-in-array4009/1/?category[]=Arrays&category[]=Arrays&page=1&query=category[]Arrayspage1category[]Arrays#

class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
      int large=arr[0];
      for(int i=1;i<n;i++){
          if(arr[i]>large){
              large = arr[i];
          }
      }
      return large;
      
      
        
    }
};