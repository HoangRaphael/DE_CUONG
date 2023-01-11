/*Có 2 mảng một chiều A, B. Hai mảng này được sắp xếp theo thứ tự tăng dần. 
Hãy viết chương trình trộn 2 mảng A, B lại để có được mảng C có các phần tử tăng dần.*/

#include <bits/stdc++.h>
using namespace std;

int main(){
     int n,m,e=0;
    cout<<"Nhap do dai mang A: "; cin>>n;
     int a[n];
    cout<<"Nhap do dai mang B: "; cin>>m;
     int b[m];
     int c[m+n];
    for(int i=0;i<n;i++){
         cout<<"Nhap a["<<i<<"]: "; 
            cin>>a[i];
     }
     cout<<endl;
    for(int j=0;j<m;j++){
         cout<<"Nhap b["<<j<<"]: ";
             cin>>b[j];
  }

    for(int i=0;i<n;i++){
       c[e]=a[i];
    e++;
  }
    for(int j=0;j<m;j++){
       c[e]=b[j];
    e++;
  }
  cout<<"Mang C da nhap: ";
  for(int g=0;g<e;g++)
  cout<<c[g]<<" ";
  for (int h = 0; h < e; h++) {
        for (int k = h + 1; k < e; k++) {
            if (c[h] > c[k]) {
                int temp = c[h];
                c[h] = c[k];
                c[k] = temp;
            }
        }
    }
    cout<<endl;
    cout<<"Mang C da sap xep: ";
    for (int l = 0; l < e; l++) {
        cout << c[l] << " ";
    }
    return 0;
}