//
//  main.cpp
//  wrj
//
//  Created by s20181102931 on 2019/6/19.
//  Copyright © 2019 s20181102931. All rights reserved.
//

#include <iostream>
#include<fstream>
using namespace std;
struct message
{
    char a;
    string name[3];
    string cname[7];
    double score[];
}

int main()
{
    char a;
    string name[3];
    string cname;
    double score[7];
    double sum=0;
    double ave=0;
    ifstream file("/Users/s20181102931/Desktop/wrj.txt" );
    cin>>a>>name;
    ifstream mmm("/Users/s20181102931/Desktop/we.txt");
    cin>>cname;
//冒泡排序去掉最大值，最小值，取平均值；
    for(int i=0;i<7;i++)
    {
        cin>>score[i];
    }
    for (int i=0;i<6;i++)
    {
        for (int j=0;j<6-i;j++)
        {
            if (score[j] > score[j + 1])
            {
                int tem = score[j];
                score[j] = score[j + 1];
                score[j + 1] = temp;
            }
        }
    }
    for(int i=1;i<6;i++)
    {
        sum=sum+score[i];
    }
      ave=sum/7;
    
    
    
        if (file.is_open())
        {
            cout<<
            file.close();
        }
        
        return 0;
    }


