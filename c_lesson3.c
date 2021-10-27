#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main (void){
    // 4-1
    int a,b;
    srand((unsigned)time(NULL));// rand(整数) 乱数の初期化
    a = rand() % 10 + 1; // 1から10までの乱数を発生させる
    printf("数：%d\n", a);
    for(b=0;b < a;b++){
      printf("■");
    }

    //4-2
    int c;
    srand((unsigned)time(NULL));// rand(整数) 乱数の初期化
    c = rand() % 10 + 1; // 1から10までの乱数を発生させる
    printf("数：%d\n", c);
    int d = 0;
    while(d < c){
      printf("■");
      d++;
    }

    // 4-3
    int e;
    srand((unsigned)time(NULL));// rand(整数) 乱数の初期化
    e = rand() % 10 + 1; // 1から10までの乱数を発生させる
    printf("数：%d\n", e);
    int f = 0;
    do{
      printf("■");
      f++;
    }while(f < e);

    // 4-4
    int g = 0;
    while(g <= 3){
      printf("a=%d\n", g);
      g++;
    }

    // 4-5
    int h;
    for(h=0;h<=3;h++){
      printf("a=%d\n", h);
    }

    //4-6
    int i = 3;
    while(i >= 0){
      printf("a=%d\n", i);
      i--;
    }

    //4-7
    int j;
    for(j=3;j >= 0;j--){
      printf("a=%d\n", j);
    }

    // 4-8
    int k;
    srand((unsigned)time(NULL));// rand(整数) 乱数の初期化
    k = rand() % 10 + 1; // 1から10までの乱数を発生させる
    while(k > 0){
      k = rand() % 10 + 1; // 1から10までの乱数を発生させる
      printf("%d\n", k);
      if (k == 10){
        break;
      }
    }
    printf("終了します\n");

    // 4-9
    int l;
    srand((unsigned)time(NULL));// rand(整数) 乱数の初期化
    l = rand() % 100 + 1; // 1から10までの乱数を発生させる
    while(l > 0){
      l = rand() % 100 + 1; // 1から10までの乱数を発生させる
      printf("%d\n", l);
      if (l % 10 == 0){
        break;
      }
    }
    printf("終了します\n");

    // 4-10
    int m,n;
    srand((unsigned)time(NULL));// rand(整数) 乱数の初期化
    for(m=0;m<5;m++){
      n = rand() % 100 + 1; // 1から10までの乱数を発生させる
      printf("%d\n", n);
    }

    // 4-11
    int o,p;
    int max = 0;
    srand((unsigned)time(NULL));// rand(整数) 乱数の初期化
    for(o=0;o<5;o++){
      p = rand() % 100 + 1; // 1から10までの乱数を発生させる
      printf("%d\n", p);
      if(max < p){
        max = p;
      }
    }
    printf("最大値%d\n", max);

    // 4-12
    int q,r;
    int min = 100;
    srand((unsigned)time(NULL));// rand(整数) 乱数の初期化
    for(q=0;q<5;q++){
      r = rand() % 100 + 1; // 1から10までの乱数を発生させる
      printf("%d\n", r);
      if(min > r){
        min = r;
      }
    }
    printf("最小値%d\n",min);

    // 4-13
    int s;
    int t;
    srand((unsigned)time(NULL));// rand(整数) 乱数の初期化
    s = rand() % 10 + 1; // 1から100までの乱数を発生させる
    if(s >= 5){
      for(t=0;t<s;t++){
        printf("★");
      }
      printf("\n");
    }else{
      printf("発生した数値：%d\n", s);
    }

    // 4-14 見直し（☆が２種類表示されてしまうgit ）
    int u;
    int v;
    srand((unsigned)time(NULL));// rand(整数) 乱数の初期化
    u = rand() % 10 + 1; // 1から10までの乱数を発生させる
    if(u % 2 == 0){
      for(v=1;v<=u;v++){
        printf("★");
      }
    }else{
      for(v=1;v<=u;v++){
        printf("☆");
      }
    }
    printf("\n");

    // 4-15
    int w;
    for(w=1;w<=100;w++){
      if(w % 10 == 0){
        printf("%d\n",w);
      }else{
        printf("%d", w);
      }
    }

    // 4-16
    int x,y;
    for(x=1;x<10;x++){
      for(y=1;y<10;y++){
        printf("%d * %d = %d\n", x, y, x*y);
      }
    }

    // 4-17
    int ab,bc;
    for(ab=1;ab<=10;ab++){
      for(bc=0;bc<10;bc++){
        if(ab>bc){
          printf("■");
        }else{
          printf("□");
        }
      }
      printf("\n");
    }

    // 4-18
    int cd, de;
    for(cd=0;cd<10;cd++){
      for(de=0;de<10;de++){
        if(cd==de){
          printf("□");
        }else{
          printf("■");
        }
      }
      printf("\n");
    }

}