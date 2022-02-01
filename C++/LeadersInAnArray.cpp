//Problem link: https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1/?category[]=Arrays&category[]=Arrays&page=4&query=category[]Arrayspage4category[]Arrays#
class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        vector<int> lead;
        int temp= a[n-1];
        lead.push_back(temp);
        for(int i=n-2;i>=0;i--){
            if(a[i]>=temp){
                temp=a[i];
                lead.push_back(temp);
                
            }
        }
        
    reverse(lead.begin(),lead.end());
    return lead;
    }
};