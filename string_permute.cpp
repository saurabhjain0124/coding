#include<iostream>
#include<string>
#include<set>
#include<algorithm>
using namespace std;
// string ch is used for string which was already chosen
// here set is used to remove repetition
n of same strings which occurs when given string contains duplicate elements

void permute(string s,string ch ,set <string> &already_printed)
{
    if(s.empty())
    {if(already_printed.find(ch)==already_printed.end())
    {
        cout<<ch<<endl;
        already_printed.insert(ch);
    }

    }
    else
    {
        for(int i=0;i<s.length();i++)
        {
            char c=s[i];//choosing
            ch+=c;
            s.erase(i,1);//deletes only one element from given index i

            //explore
            permute(s,ch,already_printed);

            //un-choose
            s.insert(i,1,c);
            ch.erase(ch.length()-1,1);


        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        set<string> already_printed;
        permute(s,"",already_printed);
    }
}

/*
s.erase()-used for erasing all characters of string
s.erase(1)-used for erasing character at index no. 1

*/
