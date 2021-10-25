#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (void){
  // 3-1
  int a;
  printf("数値を入力");
  scanf("%d¥n", &a);
  if(a>0){
    printf("入力した値は、正の数です、¥n");
  }

  // 3-2
  int b;
  printf("数値を入力");
  scanf("%d¥n", &b);
  if(b != 1){
    printf("1ではありません");
  }

  // 3-3
  int c;
  printf("数値を入力してください");
  scanf("%d¥n", &c);
  if(c < 50){
    printf("50未満です");
  }

  // 3-4
  int d;
  printf("数値を入力してください");
  scanf("%d¥n", &d);
  if(d >= 10 || d > 90 ){
    printf("10以下か90以上の値です");
  }

  // 3-5
  int e;
  printf("数値を入力してください");
  scanf("%d¥n", &e);
  if(20 <= e && e < 80){
    printf("20以上80未満です");
  }

  // 3-6
  int n;
  srand((unsigned)time(NULL));// rand(整数) 乱数の初期化
  n = rand() % 6 + 1; // 1からnまでの乱数を発生させる
  printf("数値：%d¥n", n);
  if(n > 3){
    printf("3以上です¥n");
  }

  // 3-7
  int f;
  srand((unsigned)time(NULL));
  f = rand() % 10 + 1;
  printf("数値：%d¥n", &f);
  if(f > 5){
    printf("5以上です¥n");
  } else {
    printf("5未満です¥n");
  }

  // 3-8
  int g;
  srand((unsigned)time(NULL));
  g = rand() % 10 + 1;
  printf("数値：%d¥n", &g);
  if(g != 1){
    printf("1ではありません¥n");
  } else {
    printf("1です¥n");
  }

  // 3-9
  int h;
  srand((unsigned)time(NULL));
  h = rand() % 100 + 1;
  printf("%d¥n", &h);
  if (h < 50){
    printf("50未満です¥n");
  } else {
    printf("50以上です¥n");
  }

  // 3-10
  int i;
  srand((unsigned)time(NULL));
  i = rand() % 100 + 1;
  printf("%d¥n", &i);
  if (i < 10 || 90 < i){
    printf("10以下か90以上の値です¥n");
  } else {
    printf("10より大きく90未満です¥n");
  }

  // 3-11
  int j;
  srand((unsigned)time(NULL));
  j = rand() % 100 + 1;
  printf("%d¥n", &j);
  if (20 <= j < 80){
    printf("20以上80未満です¥n");
  } else {
    printf("20未満か、80以上です¥n");
  }

  // 3-12
  int k;
  srand((unsigned)time(NULL));
  k = rand() % 10 - 10;
  printf("%d¥n", &k);
  if (k < 0) {
    printf("負の値です¥n");
  } else {
    printf("正の値です¥n");
  }

  // 3-13
  int l;
  srand((unsigned)time(NULL));
  l = rand() % 3 + 1;
  printf("%d¥n", &l);
  if (l = 1){
    printf("グー¥n");
  } else if (l = 2) {
    printf("パー¥n");
  } else {
    printf("チョキ¥n");
  }

  // 3-14
  int m,z;
  srand((unsigned)time(NULL));
  m = rand() % 10 + 1;
  z = rand() % 10 + 1;
  printf("m=%d, n=%d¥n", &m, &z);
  if (m > z) {
    printf("mの方が大きいです¥n");
  } else if (m < z) {
    printf("nの方が大きいです¥n");
  } else {
    printf("等しいです¥n");
  }

  // 3-15
  int o;
  srand((unsigned)time(NULL));
  o = rand() % 100 + 1;
  printf("%d¥n", &o);
  if (o > 80) {
    printf("優¥n");
  } else if (70 <= o && o < 80) {
    printf("良¥n");
  } else if (60 <= o && o < 70){
    printf("可¥n");
  } else {
    printf("不可¥n");
  }

  // 3-16
  int p;
  srand((unsigned)time(NULL));
  p = rand() % 100 + 1;
  printf("%d¥n", &p);
  if (p % 2 == 0 && p % 3 == 0) {
    printf("2と3の公倍数です¥n");
  } else if (p % 2 == 0) {
    printf("2の倍数です¥n");
  } else if (p % 3 == 0) {
    printf("3の倍数です¥n");
  }

  // 3-17
  int q;
  srand((unsigned)time(NULL));
  q = rand() % 100 + 1;
  printf("%d¥n", &q);
  if (q < 50 && q % 2 == 0){
    printf("50以下の偶数です¥n");
  } else if (q < 50) {
    printf("50以下です¥n");
  } else if (q % 2 == 0) {
    printf("偶数です¥n");
  }

  // 3-18
  int r;
  srand((unsigned)time(NULL));
  r = rand() % 35 - 10;
  printf("摂氏%d度¥n", &r);
  if (r > 30){
    printf("真夏日です¥n");
  } else if(25 <= r && r < 30){
    printf("夏日です¥n");
  } else if(r < 0) {
    printf("真冬日です¥n");
  }

  // 3-19
  int s;
  scanf("%d", &s);
  printf("%d年", s);
  if(s % 4 == 0 && s % 400 == 0 && s % 100 != 0 ){
    printf("閏年です¥n");
  } else {
    printf("閏年ではありません¥n");
  }
}