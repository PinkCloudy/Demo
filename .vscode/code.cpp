#include <stdio.h>
#include <string.h>
 
int main() {
 
  char text[100];
  char ch;
  fgets(text,sizeof(text),stdin);
  scanf("%c",&ch);
 
  // khởi tạo số lần xuất hiện (tần xuất) bằng 0
  int frequency = 0;
 
  // truy cập từng ký tự của xâu
  for (int i = 0;i < strlen(text);i++){
    // so sánh từng phần tử, nếu giống nhau thì tăng số lần
    if (text[i] = ch){
       frequency++;}
    else
     continue;
  }
  printf("%d", frequency);   
  return 0;
}