//Code in recursion
#include<iostream>
using namespace std;
void reach_home(int src,int dest)
{
    cout<<"Source="<<src<<"Destination="<<dest<<endl;
    //base case
    if(src==dest)
    {
        cout<<"Reached Home"<<endl;
        return;
    }

    //Processing- inc one step
    src++;

   //recursive relation
    reach_home(src,dest);
}
int main()
{
    int dest=10;
    int src=1;
    cout<<endl;
    reach_home(src,dest);
}
