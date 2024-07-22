#include <stdio.h>

int main() {

   /* //第一题
    int a;
    scanf("%d",&a); //输入偶数
    if(a%2==0){
        printf("YES");
    }else{
        printf("NO");
    }*/


    //第二题
    /*int day;
    scanf("%d",&day);
    switch (day) {
        case 1 :
            printf("Monday");
            break;
        case 2 :
            printf("Tuesday");
            break;
        case 3 :
            printf("Wensday");
            break;
        case 4 :
            printf("Thursday");
            break;
        case 5 :
            printf("Friday");
            break;
        case 6 :
            printf("Saturday");
            break;
        case 7 :
            printf("Sunday");
            break;
    }*/

    //第三题
/*    int month;
    scanf("%d",&month);
    if(month>=1&&month<=3){
        printf("Spring");
    }
    if(month>=4&&month<=6){
        printf("Summer");
    }
    if(month>=7&&month<=9){
        printf("Autumn");
    }
    if(month>=10&&month<=12){
        printf("Winter");
    }*/

   //第四题
/*
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>=b){
        printf("%d",a);
    } else{
        printf("%d",b);
    }
*/

   //第五题
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b&&a>=c){
        printf("%d",a);
    }
    if(b>a&&b>c) {
        printf("%d", b);
    }
    if(c>a&&c>b){
        printf("%d",c);
    }


    return 0;
}
