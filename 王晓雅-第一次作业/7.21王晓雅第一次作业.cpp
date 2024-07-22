#include<stdio.h>
//函数声明：判断奇数偶数
void isOdd(int a);
//函数生命：输出星期几
void oneWeek(int day);
//函数声明：月份对应季节
void monSeason(int month);
//函数声明：两数取最大
int isBig1(int s1,int s2);
//函数声明：三数取最大
int isBig2(int s3,int s4,int s5);
//主函数 返回值int整型
int main(){
    printf("-------------------------------------------------------------------------------\n");
    printf("一、从键盘输入一个整数，判断是否是偶数，如果是偶数就输出yes，否则输出no\n");
    //定义局部变量
    int a,day,month,s1,s2,s3,s4,s5;
    scanf("%d",&a);//键盘输入整数
    isOdd(a);//调用isOdd函数，传参为输入的a
    printf("-------------------------------------------------------------------------------\n");
    printf("二、用户输入的1-7的整数，根据用户输入的整数，输出对应的星期几\n");
    scanf("%d",&day);//键盘输入整数
    oneWeek(day);
    printf("-------------------------------------------------------------------------------\n");
    printf("三、用户输入的一个整数month代表月份，根据月份输出对应的季节\n");
    scanf("%d",&month);//键盘输入整数
    monSeason(month);
    printf("-------------------------------------------------------------------------------\n");
    printf("四、用户输入的两个整数,用空号隔开，判断大小后输出较大的那个数\n");
    scanf("%d%d",&s1,&s2);//键盘输入两个整数，中间空格隔开
    int h1=isBig1(s1,s2);//调用isBig1函数，传参，调用函数完毕返回值赋值给h1
    printf("输入的数分别为%d,%d,较大数为%d\n",s1,s2,h1);
    printf("-------------------------------------------------------------------------------\n");
    printf("五、接收用户输入的三个整数,逗号隔开，判断大小后输出较大的那个数\n");
    scanf("%d,%d,%d",&s3,&s4,&s5);//键盘输入三个整数，中间逗号隔开
    int h2 = isBig2(s3,s4,s5);//调用isBig2函数，传参，调用函数完毕返回值赋值给h2
    printf("输入的数分别为%d,%d,%d较大的那个数为%d",s3,s4,s5,h2);
    return 0;

}
//判断偶数
void isOdd(int a){
    /*if(a%2==0){
        printf("这个整数为偶数,yes");
    }else{
        printf("这个整数为奇数,no");
    }*/
    //三目运算符判断a对2取余是否等于0，如果等于0则输出printf偶数，否则就是有余数，输出printf奇数
    a%2==0?printf("yes,偶数\n"):printf("no,奇数\n");
}
//输出星期
void oneWeek(int day){
    //判断输入的星期是否合法
    if(day>7||day<1){
        //不合法提示重新输入
        printf("请重新输入1-7的整数\n");
        int days;
        //重新输入
        scanf("%d",&days);
        //重新调用函数验证是否合法
        oneWeek(days);
    }else{
        //验证输入合法，输出对应的星期几
        printf("整数对应的是星期%d\n",day);
    }
}
//判断月份季节
void monSeason(int m){
    //判断输入的数是否合法
    if(m>12||m<1){
        printf("请重新输入合法的月份\n");
        //如果不合法重新输入，定义局部变量
        int month;
        scanf("%d",&month);
        //重新调用函数判断
        monSeason(month);
    }
    //输入合法，判断m的值为那个区间，输出对应的printf语句
    if(m>=3&&m<=5){
        printf("%d月代表的季节为春季\n",m);
    }
    if(m>=6&&m<=8){
        printf("%d月代表的季节为夏季\n",m);
    }
    if(m>=9&&m<=11){
        printf("%d月代表的季节为秋季\n",m);
    }
    if((m>=1&&m<=2)||m==12){
        printf("%d月代表的季节为冬季\n",m);
    }
}
//找到并返回两数中较大的数
int isBig1(int s1,int s2){
    /*if(s1>s2)
        return s1;
    else
        return s2;*/
    //三目运算符判断如果s1>=s2那么返回s1否则s2
    return s1>=s2?s1:s2;
}
//找到并返回三数中较大的数，
int isBig2(int s1,int s2,int s3){
    int max;//定义局部变量max用于函数结果返回给主函数
    max = s1>=s2?s1:s2;//先判断s1与s2谁大就赋值给max
    if(max>s3) return max;//max值和第三个数s3比较 结果大的return
    else return s3;
}
