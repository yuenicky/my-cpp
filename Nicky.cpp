简单的自我介绍
/*
 *author:Nicky yue
 *file name:Nicky
 *function:my introduction of my self
 *date:2/14/2020
 */

 #include<iostream>
 using namespace std;
 int main()
 {
     string m;
     cout<<"input your name"<<endl;
     cin>>m;
     cout << "yes,thank you "<< m <<endl;
     cout << "input your interest please"<<endl;
     string n;
     cin>>n;
     cout << "you like "<<n<<" the most"<<endl;
     return 0;
 }


判断5位数的回文数游戏
/* 
 * FileName: Nicky4.cpp
 * Author:Yue  linbing
 * Function: Judging of Palindrome
 * Date: Jan 07, 2020
 * E-mail: yuntianqinghe@qq.com
 */
#include <iostream>

using namespace std;

int main()

{
    int data ;
    char a;
    int myriabit, kilobit, decade, unit;
    while(1)
    {
        cout << "你想玩回文数游戏吗？如果想，请输入y；否则输入n"<<endl;
        cin>>a;
        if(a!='y'&&a!='n')
        {

            cout<<"您输入的是非法字符，请输入“y”或者“n”"<<endl;
            cin>>a;
        }
        if(a=='n')
            break;
        if(a=='y')
        {
            cout << "请输入一个五位整数：";
            cin >> data;
            if(data<=10000||data>=100000)
            {
                cout<<"您输入的数字不是五位数，请输入5位正整数"<<endl;
                cin >> data;
                do
                {
                    if(data<=10000||data>=100000)
                    {
                        cout<<"您输入的数字不是五位数，请输入5位正整数"<<endl;
                        cin >> data;
                    }
                }
                while(data<=10000||data>=100000);
                myriabit=data/10000;
                kilobit=(data%10000)/1000;
                decade=(data%100)/10;
                unit=(data%10);
                if(myriabit==unit && kilobit==decade)
                    cout << "YES!" <<  endl;
                else
                    cout << "NO!" << endl;
            }
            else
            {
                myriabit=data/10000;
                kilobit=(data%10000)/1000;
                decade=(data%100)/10;
                unit=(data%10);

                if(myriabit==unit && kilobit==decade)
                    cout << "YES!" <<  endl;
                else
                    cout << "NO!" << endl;
            }
        }
    }
    return 0;
}

copy from other person's 
包含回文数，日期判定，和某一区间的素数个数判定。
But there is some wrong in date judging, thanks for your advice. 

#include<iostream>
#include<cstring>
#include<string>
#include<iomanip>

using namespace std;


int main()
{
    cout << "***********************************************************************" << endl;
    cout << "*                    我可以和你一起玩一些小游戏嘛？                   *" << endl;
    cout << "*            输入1 进行判断一个五位数是否为回文数的小游戏             *" << endl;
    cout << "*       输入2 进行判断一个日期是该年份的第几天和星期几的小游戏        *" << endl;//日期所在日历位置有错误 例如：2013 2 9 周几与日历所表现的情况不符。
    cout << "*            小游戏2还可以生成你输入日期那个月份的日历哦！            *" << endl;
    cout << "*         输入3 进行求出一个区间内素数个数和所有素数的小游戏          *" << endl;
    cout << "*                     不想玩的话就输入0退出程序吧                     *" << endl;
    cout << "***********************************************************************\n\n" << endl;
    cout << "来输入你的选择吧：";

    while (1)
    {
        string a;
        int b;
        int x=0;
        cin >> a;

        if("0"==a)
        {
            cout << "那再见啦！" << endl;
            break;
        }

        while ("1"!=a && "2"!=a && "3"!=a)
        {
            cout << "你输入的不是1,2或者3哎QwQ，小可爱你是猪嘛？再输入一次吧······" << endl;
            cin >> a;
        }
        if ("1" == a )
        {
            x=1;
        }
        if ("2" == a)
        {
            x=2;
        }
        if ("3" == a)
        {
            x=3;
        }

        switch (x)
        {
        case 1:
        {
            long long int a,b,c,d,e,f;
            char x;
            while(1)
            {
                string y;
                cout<<"\n小可爱要玩判断一个数是否是回文数的小游戏嘛？\n如果是的话，请输入y   不玩的话请输入n"<<endl;
                cin>>y;

                while ("y" != y && "n" != y)
                {
                    cout <<"你输入的是个啥玩意？你把这玩意叫y或者n？？？重输重输！！！"<<endl;
                    cin >> y;
                }



                if("y" == y)
                {
                    cout<<"来输入一个五位数啦：";
                    cin>>a;

                    while ( a < 10000 || a > 99999 )
                    {
                        cout<<"宝宝这是五位嘛？？？！教你小学数学的体育老师都要气疯啦！！！！\n再输一次麻溜的！"<<endl;
                        cin >> a;
                    }

                    f=a;
                    e=0;
                    while (f>0)
                    {
                        d=f%10;
                        e=e*10+d;
                        f/=10;
                    }

                    if(a==e)
                    {
                        cout<<"Yes!完美的回文数\n\n"<<endl;
                    }
                    else
                    {
                        cout<<"Sorry···这个不是回文数哦\n\n"<<endl;
                    }

                }

                if ("n" == y)
                {
                    break;
                }
            };
            break;
        }

        case  2:
        {
            while (1)
            {
                cout << "\n小可爱要玩判断一个日期是该年份的第几天的小游戏鸭？\n如果要一起来玩的话请输入y  不想玩的话请输入n" << endl;
                string x;
                cin >> x ;

                while ( "y" != x  && "n" != x  )
                {
                    cout << "你家y和n长这个鬼样子嘛？？？！你就这没和我过不去嘛？？再给你最后一次机会哦" << endl;
                    cin >> x ;
                }

                if ( "y" == x )
                {
                    long long int year, month, day,i;
                    int sum = 0;
                    int temp, W,Z;
                    int j,k;

                    int arr [13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
                    cout << "你来啦！等你好久了哦~\n那么来输入一个年月日吧，输入格式例如：2020 1 8\n按下回车键就会显示结果哦" << endl;
                    cin >> year >> month >> day ;
                    if (( 0==year%4 && 0!=year%100 )||( 0==year%400 ))
                    {
                        arr[2]++ ;
                    }

                    while (( 1 > month || 12 < month  )||( 1 > day || arr[month] < day ))
                    {
                        cout << "来自外星的友人你好，我原谅你不了解地球公历是什么亚子的了，你再输入一个吧" << endl;
                        cin >> year >> month >> day ;
                    }


                    for ( i=1; i<month; i++)
                    {
                        sum += arr[i];
                    }
                    sum += day;
                    cout << "\n你输入的日期是" << year << "年的第" << sum << "天" << endl;

                    /*
                        C语言根据日期判断星期几（使用基姆拉尔森计算公式）
                        算法如下：
                        基姆拉尔森计算公式
                        W= (d+2*m+3*(m+1)/5+y+y/4-y/100+y/400) mod 7
                        在公式中d表示日期中的日数，m表示月份数，y表示年数
                    */

                    temp=month;
                    if ( 1 == temp || 2 == temp )
                    {
                        temp+=12;
                        year--;
                    }
                    W = ( day + 2*temp + 3*(temp+1)/5 + year + year/4 - year/100 + year/400 ) % 7;
                    switch (W)
                    {
                    case 0:
                    {
                        cout << "哦对了，这天是星期一哦！\n\n" << endl;
                        Z=1;
                        break;
                    }
                    case 1:
                    {
                        cout << "哦对了，这天是星期二哦！\n\n" << endl;
                        Z=2;
                        break;
                    }
                    case 2:
                    {
                        cout << "哦对了，这天是星期三哦！\n\n" << endl;
                        Z=3;
                        break;
                    }
                    case 3:
                    {
                        cout << "哦对了，这天是星期四哦！\n\n" << endl;
                        Z=4;
                        break;
                    }
                    case 4:
                    {
                        cout << "哦对了，这天是星期五哦！\n\n" << endl;
                        Z=5;
                        break;
                    }
                    case 5:
                    {
                        cout << "哦对了，这天是星期六哦！\n\n" << endl;
                        Z=6;
                        break;
                    }
                    case 6:
                    {
                        cout << "哦对了，这天是星期日哦！\n\n" << endl;
                        Z=7;
                        break;
                    }
                    }
                    cout << "你所输入的这个日期所在月份的日历是\n" << endl;
                    cout << "日 一 二 三 四 五 六" << endl;

                    for (i=7-Z; i<7; i++)
                    {
                        cout << "   ";
                    }
                    k = Z;
                    for (j=1; j <= arr[month]; j++)
                    {
                        if (7 == k)
                        {
                            cout << endl;
                            k=0;
                        }
                        k++;
                        cout << setfill('0') << setw(2) << j <<" ";
                    }
                    cout << "\n\n";
                }

                if ("n" == x)
                {
                    break;
                }
            };
            break;
        }

        case 3:
        {
            long long int a,b,c,d,e,f;
            char x;
            while(1)
            {
                string y;
                cout<<"\n寻找一个区间内所有的素数的游戏也蛮有趣的\n如果玩的话，请输入y   不玩的话请输入n"<<endl;
                cin>>y;

                while ("y" != y && "n" != y)
                {
                    cout <<"？？？你欠我的钱不用还了好不好？？？求求了输对一次吧"<<endl;
                    cin >> y;
                }

                if("y" == y)
                {
                    {
                        cout << "这个程序可以输出一个区间内所有的素数" << endl;
                        cout << "请输入两个数作为一个区间【m，n】：\n（两个数中间用空格隔开，按回车结束）例如 1 10" << endl;
                        int m, n, i, j, sum=0, flag, temp;
                        cin >> m >> n;
                        if( m > n )
                        {
                            swap( m , n );
                        }

                        for (i=m; i<=n; i++)
                        {

                            if(2 <= i)
                            {
                                flag=0;
                                for (j=2; j<i; j++)
                                {
                                    if(0 == i%j)
                                    {
                                        flag=1;
                                        break;
                                    }

                                }
                                if (0 == flag)
                                {
                                    sum++;
                                }
                            }
                        }
                        if (0 != sum )
                        {
                            cout << "这个区间一共有" << sum << "个素数，它们分别是：";
                        }
                        else
                        {
                            cout << "素数不屑于待在这个区间"<<endl;
                        }

                        for (i=m; i<=n; i++)
                        {
                            flag = 0;
                            if(2 <= i)
                            {
                                for (j=2; j<i; j++)
                                {

                                    if(0 == i%j)
                                    {
                                        flag=1;
                                    }
                                }
                                if (0 == flag)
                                {
                                    cout << i << " ";
                                }
                            }
                        }
                        cout << endl;
                    }
                }

                if ("n" == y)
                {
                    break;
                }
            };
            break;
        }
        }
        cout << "***********************************************************************" << endl;
        cout << "还玩嘛？输入1是判断回文数，输入2是判断日期，输入3是寻找素数\n不想玩的话输入0结束哦" << endl;
    }

    return 0;
}
