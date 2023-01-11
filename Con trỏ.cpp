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
   float sumc=0, countc=0;;
  for(int j=0;j<n;j++){
   if(j%2==0){
      countc++;
      int *pc=&a[j];
      sumc = sumc + *pc;
   }
  }
  float suml=0, countl=0;
  for(int j=0;j<n;j++){
   if(j%2==1){
       countl++;
      int *pl=&a[j];
      suml = suml + *pl;
   }
  }
  cout<<"TB Chan: "<<sumc/countc<<endl;
  cout<<"TB Le: "<<suml/countl<<endl;
}