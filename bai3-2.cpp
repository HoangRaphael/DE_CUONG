/*Lập hàm kiểm tra 1 số nguyên x có phải là số đối xứng hay không? Biết rằng số đối xứng là số không đổi
 giá trị khi đọc từ phải qua trái. Ví dụ: 12321 là số đối xứng. 
Lập trình nhập vào số nguyên n, áp dụng hàm vừa viết đưa ra thông báo n có phải là số đối xứng không?*/

#include <bits/stdc++.h>
using namespace std;
int checkdx(int n){
  static int dx=0,rem;
    if(n!=0){
      rem=n%10;
      dx=dx*10+rem;
      checkdx(n/10);
   }
   return dx;
}
int main(){
   int n, dx;
   cout<<"Nhap N: ";
   cin>>n;
   dx = checkdx(n);
   if(n==dx)
      cout<<n<<" la so doi xung";
   else
      cout<<n<<" khong phai la so doi xung";
      return 0;
}