/*Cho biết kết quả của chương trình sau đây:

#include <stdio.h>
#include <conio.h>
void main(){
int a = 10, b = 5,c = 10;
a--;b--;c--;
printf(" Phep thu 1 :a =%d b =%d c =%d \n",a,b,c);
a++;b++;c++;
printf(" Phep thu 2 :a =%d b =%d c =%d \n",a,b,c);
--a;--b;c=--a;
printf(" Phep thu 3 :a =%d b =%d c =%d \n",a,b,c);
a--;b--;c=a--;
printf(" Phep thu 4 :a =%d b =%d c =%d \n",a,b,c);
getch();
}
*/

/*Ket qua tra ve: 
 Phep thu 1 :a =9 b =4 c =9
 Phep thu 2 :a =10 b =5 c =10
 Phep thu 3 :a =8 b =4 c =8
 Phep thu 4 :a =6 b =3 c =7
*/