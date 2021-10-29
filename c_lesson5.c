#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int add(int,int);
int reduce(int, int);
int mul(int,int,int);

void main(){
  // 6-1, 6-2
    int a,b,c;
    int result1;
    int result2;
    int result3;
    printf("a=");
    scanf("%d",&a);     //  1つ目の数、aを入力
    printf("b=");
    scanf("%d",&b);     //  2つ目の数、bを入力
    printf("c=");
    scanf("%d",&c);
    result1 = add(a,b);
    result2 = reduce(a,b);
    result3 = mul(a,b,c);
    printf("%d + %d = %d\n",a,b,result1);
    printf("%d - %d = %d\n",a,b,result2);
    printf("%d * %d * %d = %d\n",a,b,c,result3);

  // 6-3
    double teihen,takasa;   //  底辺と高さを入れる変数
    double menseki;     //  三角形の面積
    printf("底辺=");
    scanf("%lf",&teihen);       //  1つ目の数、aを入力
    printf("高さ=");
    scanf("%lf",&takasa);       //  2つ目の数、bを入力
}

//  二つの整数の和を求める関数
int add(int n1,int n2){
  return n1 + n2;
}

// 二つの整数の減算
int reduce(int n1,int n2){
  return n1 - n2;
}

int mul(int n1,int n2,int n3){
    return n1 * n2 * n3;
}
