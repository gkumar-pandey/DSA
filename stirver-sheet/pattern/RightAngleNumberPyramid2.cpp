/*
Right-Angled Number Pyramid – II

Input Format: N = 3
Result: 
1
2 2 
3 3 3

Input Format: N = 6
Result:
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
6 6 6 6 6 6

*/

#include<iostream>
using namespace std;

void printRightAnglePyramid(int n){
    for(int row=1; row<=n; row++){
        for(int col=1; col<=row; col++){
            cout<<row<<" ";
        }
        cout<<"\n";
    }
}

int main(){
    int n; cin>>n;
    printRightAnglePyramid(n);
    return 0;
}