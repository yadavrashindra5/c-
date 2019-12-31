
#include <iostream>
using namespace std;
int main()
{
    for(int i=1;i<=5;++i)
    {
        for(int j=1;j<=5;++j)
        {
           if(i==1||i==5)
           {
               cout<<"1";
           }
           else if((i==2||i==3||i==4)&&(j==2||j==3||j==4))
           {
               cout<<"0";
           }
           else
            cout<<"1";
    }
    cout<<"\n";
}

}



output

11111
10001
10001
10001
11111

