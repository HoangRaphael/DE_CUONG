/*Cho biết kết quả của chương trình sau đây:

#include <stdio.h>
#include <conio.h>
void main(){
int a = 10, b = 5,c = 10;
a=b=c=5;
a--; b--;c--;
printf(" Phep thu 1 :a =%d b =%d c =%d \n",a,b,c);
a++;b++;
printf(" Phep thu 2 :a =%d b =%d c =%d \n",a,b,c);
a+=b+=c;
printf(" Phep thu 3 :a =%d b =%d c =%d \n",a,b,c);
c=a>b?a++:b++;
printf(" Phep thu 4 :a =%d b =%d c =%d \n",a,b,c);
getch();
}
*/

/*Ket qua tra ve:

 Phep thu 1 :a =4 b =4 c =4
 Phep thu 2 :a =5 b =5 c =4
 Phep thu 3 :a =14 b =9 c =4
 Phep thu 4 :a =15 b =9 c =14
 */