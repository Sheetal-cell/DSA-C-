//Recursion with strings
//Reverse string using recursion
#include<iostream>
using namespace std;
void reverse(string& str,int i,int j)//&-to keep string constant
{
    //base case
   if(i>j)

       return;

   swap(str[i],str[j]);
   i++;
   j--;

   //recursive call
   reverse(str,i,j);
}
int main()
{
    string name="Recursion";
    cout<<"Original string:-"<<name<<endl;
    reverse(name,0,name.length()-1);
    cout<<"Reversed string:-"<<name<<endl;
}
