#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key){
    //start, end anf mid
    int start=0, end= n-1, mid;

    //find mid
    mid=(start+end)/2;

    //arr[mid]==key
    if(arr[mid] == key){ 
    return mid;
    }

    //arr[mid]<key
    else if(start=mid+1);

    //arr[mid]>key
    else(end=mid-1);

    return -1;  //for element not present
}



int main(){
    int arr[1000];
    cout<<"enter size of array ";
    int n;
    cin>>n;
    cout<<"enter elements ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int key;
    cout<<"enter key to find ";
    cin>>key;

    cout<<BinarySearch(arr,n,key);
    return 0;


}
