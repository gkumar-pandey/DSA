/*
Right-Angled Number Pyramid

Input Format: N = 3
Result: 
1
1 2 
1 2 3

Input Format: N = 6
Result:
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6

*/

#include<iostream>

using namespace std;

void printRightAngleNumberPyramid(int n){
    for(int row=1; row<=n; row++){
        for(int col=1; col<=row; col++){
            cout<<col<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n; 
    cin>>n;
    printRightAngleNumberPyramid(n);
    return 0;
}