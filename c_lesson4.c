#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (void){

// 5-1
srand((unsigned)time(NULL));// rand(整数) 乱数の初期化
int a[6],b;
for(b=0;b<=5;b++){
  a[b] = rand() % 10 + 1;
  printf("a=%d\n", a[b]);
}

// 5-2
double c[4] = { 1.2, -1.3, 5.2, 4.8};
int d;
for(d=0;d<4;d++){
  printf("c[%d]=%1.1f", d, c[d]);
}
printf("\n");

// 5-3
int e[10];
int f;
for(f=0;f<=10;f++){
  e[f] = rand() % 10 + 1;
  printf("%d", e[f]);
}
printf("\n");
printf("奇数：" );
for(f=0;f<=10;f++){
  if(e[f] % 2 != 0){
    printf("%d ", e[f]);
  }
}
printf("偶数：");
for(f=0;f<=10;f++){
  if(e[f] % 2 == 0){
    printf("%d ", e[f]);
  }
}
printf("\n");

// 5-4
int g[10];
int h;
for(h=0;h<=10;h++){
  g[h] = rand() % 10 + 1;
}
printf("5以上の数：");
for(h=0;h<=10;h++){
  if(g[h] >= 5){
    printf("%d ", g[h]);
  }
}
printf("\n");
printf("5未満の数：");
for(h=0;h<=10;h++){
  if(g[h] < 5){
    printf("%d ", g[h]);
  }
}
printf("\n");

// 5-5
int i[10],j;
for(j=0;j<=10;j++){
  i[j] = rand() % 10 + 1;
  printf("%d", i[j]);
}
printf("\n");
printf("3の倍数：");
for(j=0;j<=10;j++){
  if(i[j] % 3 == 0){
    printf("%d ", i[j]);
  }
}
printf("\n");
printf("3の倍数以外の数：");
for(j=0;j<=10;j++){
  if(i[j] % 3 != 0){
    printf("%d ", i[j]);
  }
}
printf("\n");

// 5-6
int k[10],l;
int max = 0;
int min = 10;
for(l=0;l<=10;l++){
  k[l] = rand() % 10 + 1;
  printf("%d", k[l]);
}
printf("\n");
printf("最大値：");
for(l=0;l<=10;l++){
  if(k[l]>max){
    max = k[l];
  }
}
printf("%d\n", max);
printf("最小値；");
for(l=0;l<=10;l++){
  if(k[l]<min){
    min = k[l];
  }
}
printf("%d\n", min);

// 5-7
int m[5],n;
for(n=0;n<5;n++){
  m[n] = rand() % 10 + 1;
  printf("%d", m[n]);
}
double sum = m[0]+m[1]+m[2]+m[3]+m[4]; // sumはint型で良いがaveで平均値を出す際に小数点OKにしないと小数点以下が表示できない（計算できない）
double ave = sum / 5;
printf("\n");
printf("合計値：%d\n", m[0]+m[1]+m[2]+m[3]+m[4]);
printf("平均値：%1.1f\n", ave);
printf("平均値より大きい数：");
for(n=0;n<=5;n++){
  if(ave < m[n]){
    printf("%d ", m[n]);
  }
}
printf("\n");
printf("平均値より小さい数：");
for(n=0;n<=5;n++){
  if(ave > m[n]){
    printf("%d ", m[n]);
  }
}
printf("\n");

// 5-8
int o[5],p;
int count = 0;
for(p=0;p<5;p++){
  o[p] = -10 + rand() % 20 + 1;
  printf("%d ", o[p]);
}
printf("\n");
printf("0より大きい数：");
for(p=0;p<5;p++){
  if(o[p]>0){
    printf("%d ", o[p]);
  }
}
printf("\n");
printf("0より小さい数；");
for(p=0;p<5;p++){
  if(o[p]<0){
    printf("%d ", o[p]);
  }
}
printf("\n");
for(p=0;p<5;p++){
  if(o[p]==0){
    count++;
  }
}
printf("0の個数：%d\n", count);

// 5-9
int q[10],r;
for(r=0;r<10;r++){
  q[r] = 0 + rand() % 100 + 1;
  printf("%d ", q[r]);
}
printf("\n");
printf("50以上の数：");
for(r=0;r<10;r++){
  if(q[r]>=50){
    printf("%d ", q[r]);
  }
}
printf("\n");
printf("50未満の数：");
for(r=0;r<10;r++){
  if(q[r]<50){
    printf("%d ", q[r]);
  }
}
printf("\n");

// 5-10
int s[5],t,u;
for(t=0;t<5;t++){
  s[t] = 1 + rand() % 10;
  printf("%d ", s[t]);
}
printf("\n");
for(t=0;t<5;t++){
  for(u=0;u<=s[t];u++){
    printf("*");
  }
  printf("\n");
}

// 5-11
int v[5],w;
for(w=0;w<5;w++){
  v[w] = 1 + rand() % 100;
  printf("%d ", v[w]);
}
printf("\n");
printf("0以上60未満：");
for(w=0;w<5;w++){
  if(v[w]>0 && v[w]<60){
    printf("%d ", v[w]);
  }
}
printf("\n");
printf("60以上80未満：");
for(w=0;w<5;w++){
  if(v[w]>=60 && v[w]<80){
    printf("%d ", v[w]);
  }
}
printf("\n");
printf("80以上：");
for(w=0;w<5;w++){
  if(v[w]>=80){
    printf("%d ", v[w]);
  }
}
printf("\n");

// 5-12,5-13
int x[3][3], y, z;
int maxnum = 0;
int minnum = 10;
for(y=0;y<3;y++){
  for(z=0;z<3;z++){
    x[y][z] = 0 + rand() % 10;
    printf("%d ", x[y][z]);
  }
  printf("\n");
}
for(y=0;y<3;y++){
  for(z=0;z<3;z++){
    if(x[y][z]>maxnum){
      maxnum = x[y][z];
    }
    if(x[y][z]<minnum){
      minnum = x[y][z];
    }
  }
}
printf("最大値：%d\n", maxnum);
printf("最小値：%d\n", minnum);


}