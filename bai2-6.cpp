/*Viết chương trình có hàm tính tổng:
𝑆=1+1/2+1/3+⋯+1/𝑛 với n>0, Áp dụng: nhập số nguyên n từ bàn phím in ra kết quả áp dụng hàm vừa viết trên*/

#include <bits/stdc++.h>
using namespace std;
float giatri(int n){
    float s=1;
   for(int i=2;i<=n;i++)
   s=s+1/i;
   return s;

}
int main(){
    int n;
    cout<<"Nhap N: ";
    cin>>n;
    cout<<"Gia tri: "<<giatri(n);
    return 0;
}