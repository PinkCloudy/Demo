#include <stdio.h>

int main() {

  int year;
  scanf("%d", &year);
  // kiểm tra một số có phải năm nhuận hay không
  //kiểm tra xem có phải năm tròn thế kỉ và năm nhuận hay k
  if ((year % 100 == 0) && (year % 400 == 0)){
    printf("Leap Year");
  }
  //đã biết là k phải năm nhuận của tròn thế kỉ vậy phải xét năm khác k tròn thế kỉ nhưng nhuận
  else if((year % 4 == 0)&&(year % 100 != 0)){
    printf("Leap Year");
  }
  //loại 2 trường hợp trên thì chỉ còn lại năm không nhuận
  else{
    printf("Not a Leap Year");
  }

return 0;
}