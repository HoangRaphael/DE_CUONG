//Nhập vào dãy n số nguyên. Hãy in ra dãy số vừa nhập, số lớn nhất, bé nhất của dãy.

#include <bits/stdc++.h>
using namespace std;

int max(int a[], int n){
   int max = a[0];
   for(int i=1;i<n;i++){
      if(max<a[i])
      max=a[i];
   }
   return max;
 }
int min(int a[], int n){
   int min=a[0];
   for(int i=1;i<n;i++){
      if(min>a[i])
      min=a[i];
   }
   return min;
 }
 int main(){
    int n;
    cout<<"Nhap N: ";cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"Nhap gia tri a["<<i<<"]: ";
        cin>>a[i];
    } cout<<"Cac gia tri da nhap: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
 cout<<endl;
 cout<<"Gia tri lon nhat: "<<max(a,n)<<endl;
 cout<<"Gia tri nho nhat: "<<min(a,n);
 }