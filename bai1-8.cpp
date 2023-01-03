//Nhập vào từ bàn phím 1 số nguyên. Đưa ra màn hình thông báo số đó là số nguyên âm, nguyên dương, số chẵn hay số lẻ

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
  cout<<"Nhap N: "; cin>>n;
  if(n%2==0){
    cout<<n<<" la so chan."<<endl;
  } else
    cout<<n<<" la so le."<<endl;
  if(n==0){
    cout<<n<<" la so nguyen."<<endl;
  } else if(n>0){
    cout<<n<<" la so duong."<<endl;
  } else
  cout<<n<<" la so am."<<endl;
  return 0;
}