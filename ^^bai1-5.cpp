/*Viết chương trình sử dụng kiểu con trỏ, nhập một dãy số nguyên từ bàn phím gồm n phần tử, 
tính tổng trung bình cộng các phần tử lẻ, trung bình cộng các phần tử chẵn và in kết quả ra màn hình.*/

#include <bits/stdc++.h>
using namespace std;
int main() {
   int n;
   int *p;
   cout<<"Nhap n: ";cin>>n;
   int a[n];

   for(int i=0;i<n;i++){
    cout<<"Nhap a["<<i<<"]: ";
    cin>>a[i];
   }

   int sum=0;
   p=a;
   cout<<*p<<endl;

   for(int i=0;i<n;i++){
        sum = sum + *p;
        p++;
        cout<<"'"<<a[i]<<"'";

 //       cout<<*p<<" ";
   }
   cout<<"Gia tri: "<<sum;
}