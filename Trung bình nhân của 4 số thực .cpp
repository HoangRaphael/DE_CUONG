/*Viết chương trình nhập vào 4 số thực a, b, c, d bất kỳ từ bàn phím, 
tính trung bình nhân của chúng in kết quả ra màn hình, in ra màn hình số lớn nhất, bé nhất.*/

#include <bits/stdc++.h>
using namespace std;
float MaxOfFour(float a,float b, float c, float d){
   float max = a;
   if(b > max){
      max = b;}
   if(c > max){
      max = c;}
   if(d > max){
      max = d;}
return max;
}
float MinOfFour(float a, float b, float c, float d){
  float min = a;
   if(b < min){
      min = b;}
   if(c < min){
      min = c;}
   if(d < min){
      min = d;}
return min;
}
int main(){
    float a,b,c,d;
    cout<<"Nhap A: "; cin>>a;
    cout<<"Nhap B: "; cin>>b;
    cout<<"Nhap C: "; cin>>c;
    cout<<"Nhap D: "; cin>>d;

    cout<<"Trung binh nhan: "<<pow(a+b+c+d,0.25)<<endl;
    cout<<"Max: "<<MaxOfFour(a,b,c,d)<<endl;
    cout<<"Min: "<<MinOfFour(a,b,c,d);
    return 0;
}