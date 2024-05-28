#include<bits/stdc++.h>
using namespace std;  

void print1(int n) {
      for(int i=0; i<n; i++) {
         for(int j=0; j<i; j++){
            cout << "*";
          }
          cout << endl;
      }    
}


//pattern 2
void print2(int n) {
       for(int i=0; i<n; i++) {
         for(int j=0; j<i; j++){
            cout << "*";
          }
          cout << endl;
      }    
}

//pattern 3


void print3(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << j;  // Print the value of j
        }
        cout << endl;
    }    
}

//pattern 4

void print4(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << i;  // Print the value of j
        }
        cout << endl;
    }    
}

//pattern 5

void print5(int n) {
       for(int i=1; i<n; i++) {
         for(int j=1; j<n-i+1; j++){
            cout << "*";
          }
          cout << endl;
      }    
}

int main(){
    int n; 
    cin >> n;
    print5(n);
    return 0;
}