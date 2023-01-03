/*Viết chương trình nhập mảng một chiều A có n phần tử nguyên dương (0<n<=100).
 Viết chương trình sắp xếp các phần tử là số dương về đầu mảng và tăng dần từ trái qua phải; 
 các phần tử là số âm về cuối mảng và giảm dần từ trái qua phải; các số 0 ở giữa. Xuất mảng sau khi sắp xếp ra màn hình.
Ví dụ:
+ Mảng nhập -2 9 0 -4 16 0 25
+ Mảng xuất (sau khi sắp xếp): 9 16 25 0 0 -2 -4*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Nhap chieu dai mang: "; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"Nhap A["<<i<<"]: "; cin>>a[i];
    }
    cout<<endl;
    cout<<"Sap xep: ";
    for (int i=0;i<n;i++) {
        for (int j=i+1;j<n;j++) {
            if (a[i]>a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i=0;i<n;i++) {
        if(a[i]>0){
        cout<<a[i]<<" ";
    }
  } 
    for (int i=0;i<n;i++) {
        if(a[i]==0){
        cout<<a[i]<<" ";
    }
  }

  for (int i=0;i<n;i++) {
        for (int j=i+1;j<n;j++) {
            if (a[i]<a[j]) {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    for (int i=0;i<n;i++) {
        if(a[i]<0){
        cout<<a[i]<<" ";
    }
    }
    return 0;
}
