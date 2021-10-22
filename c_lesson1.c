#include <stdio.h>

int main() {
    printf("syです¥n");
    printf("123¥n456¥n789¥n");
    printf("%d + %d = %d¥n", 2,3,2+3);
    printf("%d + %d + %d = %d¥n", 1,2,3,1+2+3);

    int a;
    int b;
      printf("a=");
      scanf("%d", &a);
      printf("b=");
      scanf("%d", &b);
      printf("a + b = %d¥n", a+b);
      printf(" - b = %d¥n", a-b);
      printf("a * b = %d¥n", a*b);
      printf("a / b = %d¥n", a/b);
      printf("a %% b = %d¥n", a%b);

      int c;
      int d;
      printf("c=");
      scanf("%d", &c);
      printf("d=");
      scanf("%d", &d);
      printf("長方形の幅：%d¥n", c);
      printf("長方形の高さ：%d¥n", d);
      printf("長方形の面積は、%dm%dです¥n", c*d, c%d);
}