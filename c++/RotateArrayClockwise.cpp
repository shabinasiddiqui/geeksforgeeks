//problem link:  https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements/0#
#include <iostream>
using namespace std;

int main() {
    int t,n,d;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>d;
        int arr[n];
        int temp[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            temp[i]=arr[(i+d)%n];
        }
        for(int i=0;i<n;i++){
            cout<<temp[i]<<" ";
        }
        cout<<endl;
    }
	//code
	return 0;
}