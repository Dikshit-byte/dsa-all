// #include<iostream>
// using namespace std;
 
// void reverse(int arr[], int n){
//     int arr1[n];
//     for(int i=n-1; i>=0; i--){
//         arr1[n-i-1] = arr[i];
//     }
//     for(int i=0; i<n; i++){
//         arr[i] = arr1[i];
//     }
// }

// void display(int arr[], int n){
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     int arr[] = {1,2,3,4,5,7};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     reverse(arr,size);
//     display(arr,size);
//     return 0;
// }

// First Approach

#include<iostream>
using namespace std;
 
void reverse(int arr[], int n){
    int start = 0;
    int end = n-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++; end--;
    }
}

void display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {1,2,3,4,5,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    reverse(arr,size);
    display(arr,size);
    return 0;
}

// 2nd approach