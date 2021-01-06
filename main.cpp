#include <bits/stdc++.h>
using namespace std;

int functio(string k)
{
   int count=0;
   for(int i=0;i<int(k.length());i++)
   {
      if(k[i]>='A' && k[i]<='Z')
      {
         ++count;    
      }    
       
       
   }
   return count+1;    
}



int main()
{
    string s{"saveChangesLuke"};
    cout<<functio(s);
    return 0;
       
    
}