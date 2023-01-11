/*Viết chương trình nhập vào 3 số nguyên a,b,c. Kiểm tra xem 3 số nhập vào có phải là 3 cạnh tam giác không? Nếu là tam giác
 thì kiểm tra xem tam giác đó có phải là tam giác cân không? Đưa kết quả sau khi kiểm tra ra màn hình.*/

#include <bits/stdc++.h>
using namespace std;
int main(){
  float a, b, c;
  cout<<"Nhap a: ";
  cin>>a;
  cout<<"Nhap b: ";
  cin>>b;
  cout<<"Nhap c: ";
  cin>>c;
  if( a<b+c && b<a+c && c<a+b ){
  if(a==b || a==c || b==c){
      cout<<"Day la mot tam giac can";
      } else 
      cout<<"Day la mot tam giac thuong";
    } else 
    cout<<"Ba canh A, B, C khong phai la mot tam giac";
}