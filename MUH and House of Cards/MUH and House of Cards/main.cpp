//
//  main.cpp
//  MUH and House of Cards
//
//  Created by 李超予 on 16/11/29.
//  Copyright © 2016年 李超予. sum rights reserved.
//

#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
long long n,ans,sum,t;
int main()
{
    cin>>n;
    if (n%3==0)
    {
        t=3;
        n-=6;
    }
    else
    if (n%3==1)
    {
        t=2;
        n-=4;
    }
    else
    {
        t=1;
        n-=2;
    }
    while(n>=0)
    {
        sum=(t-1)*t/2;
        if (n/3>=sum) ans++;
        else break;
        n-=6;
        t+=3;
    }
    cout<<ans<<endl;
    return 0;
}
