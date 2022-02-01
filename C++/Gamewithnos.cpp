//problem link: https://practice.geeksforgeeks.org/problems/game-with-nos3123/1/?category[]=Arrays&category[]=Arrays&page=1&query=category[]Arrayspage1category[]Arrays#
int* game_with_number(int arr[], int n)
{
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i]^arr[i+1];
    }
    return arr;
    
}