#include<iostream>
#include<string>

using namespace std;

int getLastDigitOfNumb(int num){
    return num%10;
}

bool checkIsEven(int digit){
    return digit%2==0 ? true: false;
}

int main(){
    int num; 
    cin>>num;
    int evenSum = 0;
    int oddSum = 0;
    while (num)
    {
      int lastDigit = getLastDigitOfNumb(num);
      bool isEven = checkIsEven(lastDigit);
      if(isEven){
        evenSum +=lastDigit;
      }else{
        oddSum += lastDigit;
      }
      num = num/10;
    }
    
    cout<<evenSum<<oddSum;

    return 0;
}