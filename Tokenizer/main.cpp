#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <string>
#include <vector>
using namespace std;


int main()
{
    string s = "I can code";
    string word;
    int i = 0;
    int j;
    while (i < s.length())
    {
       while (i < s.length() && s.substr(i, 1) == " ")
       {
          i++;
       }
       if (i < s.length())
       {
          j = i;
          while (j < s.length() && s.substr(j, 1) != " ")
          {
             j++;
          }
          word = s.substr(i, j - i);
           cout << word << endl;
          i = j;
       }
    }
    
   return 0;
}
