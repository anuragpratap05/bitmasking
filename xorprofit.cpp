#include<iostream> 
using namespace std;
void xorprofit(int x,int y)
{
    int res=0;
    int a=0,b=0;
    int max=0;
    for(int i=x;i<y;i++)
    {
        for(int j=i+1;j<=y;j++)
        {
        res=i^j;
        //cout<<res<<endl;
            if(res>max)
            {
                max=res;
               a=i;  
               b=j;   
            }  
        } 
    }
   
    cout<<max;
}
int main()
{
    int x,y;
    cin>>x>>y;
    xorprofit(x,y);

}
