// Maximum and minimum of an array using minimum number of comparisons

#include<iostream>
#include<climits>
using namespace std;
 
int max(int arr[],int n){
    int max = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>max)
            max = arr[i];
        }
        return max;
}
int min(int arr[],int n){
    int min = INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i]<min)
            min = arr[i];
        }
        return min;
}
int main(){
    int arr[] = {1,2,3,43,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"The maximum number is : "<<max(arr,size)<<endl;
    cout<<"The minimum number is : "<<min(arr,size)<<endl;
    return 0;
}
// First approach