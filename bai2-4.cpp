/*Viết chương trình tính:
𝑆=𝑥/1!+𝑥²/2!+𝑥³/3!+⋯+𝑥ⁿ/𝑛!; Với n là số nguyên được nhập từ bàn phím. Đưa kết quả S ra màn hình.*/

#include <bits/stdc++.h>
using namespace std;
int main(){
  int x;
    cout<<"Nhap X: "; cin>>x;
  float n, s=0, p=1;
    cout<<"Nhap N: "; cin>>n;
      for(int i=1;i<=n;i++){
    p=p*i;
    s=s+ (pow(x,i)/p);
}
cout<<"Gia tri: "<<s;
}