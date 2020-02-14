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

