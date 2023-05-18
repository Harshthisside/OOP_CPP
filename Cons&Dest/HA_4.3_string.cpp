#include<iostream>
#include<string.h>
using namespace std;

class sentence
{
private:
    char str[100];
    int len;
public:
    sentence()//default
    {
        strcpy(str,"Default String");
        len=strlen(str);
        cout<<"String is "<<str<<endl;
        cout<<"Length is "<<len<<endl;
    }
    sentence(char s[],int l)//parameter
    {
        strcpy(str,s);
        len=strlen(str);
        cout<<"String is "<<str<<endl;
        cout<<"Length is "<<len<<endl;
    }
    sentence(sentence &s)//copy
    {
        strcpy(str,s.str);
        len=strlen(str);
        cout<<"String is "<<str<<endl;
        cout<<"Length is "<<len<<endl;
    }
    void concatenate(char s1[],char s2[])
    {
        strcat(s1,s2);
        cout<<"Concatenated string is: "<<s1<<endl;
    }
    // ~sentence();
};


int main()
{
    char str[100];
    cout<<"Enter the string: ";
    cin>>str;

    char str2[100];
    cout<<"Enter another string: ";
    cin>>str2;

    sentence s1;
    sentence s2(str,0);
    sentence s3(s2);
    s1.concatenate(str,str2);
}