//
//  main.cpp
//  wrj
//
//  Created by s20181102931 on 2019/6/19.
//  Copyright © 2019 s20181102931. All rights reserved.
//

#include <iostream>
#include<fstream>
#include<algorithm>
using namespace std;
struct student
{
    char number[5];
    char name[5];
    double score[7];
    double sum;
    double max,min;
    double ave;
}stu[5];
bool cmp(const double &s1,const double &s2){
    return s1.ave>s2.ave;
}
int main()
{
    for(int t=0;t<5;t++)
    {
        cin>>stu[t].number;
        cin>>stu[t].name;
        stu[t].sum=stu[t].ave=0;
        for(int i=0;i<7;i++)
        {
            cin>>stu[t].score[i];
            stu[t].sum=stu[t].score[i]+stu[t].sum;
        }
        stu[t].max=stu[t].score[0];
        stu[t].min=stu[t].score[0];
        for(int j=0;j<7;j++)
        {
            if(stu[t].score[j]>stu[t].max)
                stu[t].max=stu[t].score[j];
            if(stu[t].score[j]<stu[t].min)
                stu[t].max=stu[t].score[j];
            
        }
          stu[t].sum= stu[t].sum- stu[t].max-stu[t].min;
        for(int i=0;i<5;i++)
        {
            stu[t].ave=1.0*stu[t].sum/5;
        
        }
        sort(stu,stu+5,cmp);
    return 0;
    }
}

