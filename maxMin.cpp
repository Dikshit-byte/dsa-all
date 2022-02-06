// Maximum and minimum of an array using minimum number of comparisons

// #include<iostream>
// #include<climits>
// using namespace std;
 
// int max(int arr[],int n){
//     int max = INT_MIN;
//     for(int i=0; i<n; i++){
//         if(arr[i]>max)
//             max = arr[i];
//         }
//         return max;
// }
// int min(int arr[],int n){
//     int min = INT_MAX;
//     for(int i=0; i<n; i++){
//         if(arr[i]<min)
//             min = arr[i];
//         }
//         return min;
// }
// int main(){
//     int arr[] = {1,2,3,43,5,6};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     cout<<"The maximum number is : "<<max(arr,size)<<endl;
//     cout<<"The minimum number is : "<<min(arr,size)<<endl;
//     return 0;
// }

// First approach

// #include<iostream>
// #include<climits>
// using namespace std;
 
// int maxFind(int arr[],int n){
//     // int max = INT_MIN;
//     if(n == 0){
//         return arr[0];
//     }
//     return max(arr[n-1],maxFind(arr,n-1));
// }
// int minFind(int arr[],int n){
//         if(n==0) return arr[0];
//         return min(arr[n-1],minFind(arr,n-1));
// }
// int main(){
//     int arr[] = {9,1,2,3,43,5,6};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     cout<<"The maximum number is : "<<maxFind(arr,size)<<endl;
//     cout<<"The minimum number is : "<<minFind(arr,size)<<endl;
//     return 0;
// }
//  2nd approach

// #include<iostream>
// #include<climits>
// using namespace std;

// void find(int arr[], int n){
//     int max,min;
//     if(n==1){
//         max = min = arr[0];
//     }else{
//         if(arr[0]>arr[1]){
//             max = arr[0];
//             min = arr[1];
//         }else{
//             max = arr[1];
//             min = arr[0];
//         }
//     }
//     for(int i=2; i<n; i++){
//         if(arr[i]>max){
//             max = arr[i];
//         }
//         if(arr[i]<min){
//             min = arr[i];
//         }
//     }
//     cout<<"Minimum number is : "<<min<<endl;
//     cout<<"Maximum number is : "<<max<<endl;
// }
    
// int main(){
//     int arr[] = {1,2,3,43,5,6};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     find(arr,size);
//     return 0;
// }
// 3rd approach

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,2,3,43,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr,arr+n);
    cout<<"The maximum number is : "<<arr[n-1]<<endl;
    cout<<"The minimum number is : "<<arr[0]<<endl;
    return 0;
}