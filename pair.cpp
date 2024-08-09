#include<iostream>
#include<utility>
#include<algorithm>
using namespace std;

int main(void)
{
    pair<int,int> points[5];
    for(int i = 0;i<5;i++)
    {
        cin>>points[i].first>>points[i].second;
    }
    sort(points,points+5);
    cout<<"--------------------\n";
    for(int i = 0;i<5;i++)
    {
        cout<<points[i].first<<" "<<points[i].second<<endl;
    }
    return 0;
}