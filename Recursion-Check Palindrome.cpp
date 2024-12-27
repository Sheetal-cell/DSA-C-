//Recursion with strings
//Check Palindrome using recursion
#include<iostream>
using namespace std;
bool check_Palindrome(string str,int i,int j)
{
    //base case
   if(i>j)
    return true;

   if(str[i]!=str[j])
   {
       return false;
   }
   else{
    return check_Palindrome(str,i+1,j-1);
   }
}
int main()
{
    string name="baccab";
    cout<<"String:-"<<name<<endl;
    bool is_Palindrome=check_Palindrome(name,0,name.length()-1);
    if(is_Palindrome)
    {
        cout<<"It is Palindrome";
    }
    else{
        cout<<"It is not a Palindrome";
    }
}
