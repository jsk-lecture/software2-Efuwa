/* test0.c */
#include <stdio.h>
/*
* 引数：整数i, j
* 返値：iとjの積となる整数
* 機能：引き算の積を計算し返す関数
*/
int test(int i, int j) { /*入力となる整数i, j */
  return (i * j); /* iとjの積 */
}

int main(int argc, char *argv) {
  int i, j;
  int k;
  i = 3;
  j = 2;
  k = test(i, j); /* iとjをかけてkに代入する */
  /* kの値が5より大きければ">5"と表示し、そうでなければ"<=5"を表示する */
  if (k > 5) {
    printf(">5\n");
  } else {
    printf("<=5\n");
  }
  return 0;
}
