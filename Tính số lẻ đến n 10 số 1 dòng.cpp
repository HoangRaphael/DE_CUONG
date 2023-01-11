/*Viết chương trình nhập vào 1 số nguyên n. Thực hiện:
a. Đưa ra màn hình các số lẻ từ 1 đến n, mỗi dòng 10 số, mỗi số dành 4 vị trí
b. Tính trung bình cộng các số lẻ đó và đưa kết quả ra màn hình*/

#include <bits/stdc++.h>
using namespace std;
int main(){
   int n, c=0, d=0;
   cout<<"Nhap N:"; cin>>n;
   for(int i=0;i<n;i++){
    if(i%2==1){
        cout<<"    "<<i;
        c++;
        if(c==10){
            cout<<endl;
            c=0;
        }
        d=d+i;
     }
   }
   int avg=d/(n/2);
   cout<<endl;
cout<<"Trung binh cong: "<<avg;
}
