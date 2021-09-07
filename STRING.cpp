#include <iostream>
using namespace std;

int stringLength(string s)
{
    int length;
    for( length=0; s[length]!='\0';length++)
    {
    }
    return length;
}

string upperCase(string str)
{
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]>'a' && str[i]<'z' )
        {
            str[i] = str[i] - 'a' + 'A';
        }
    }
    return str;
}

int noOfWords(string str)
{
    int word=0;
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]== ' ' && str[i+1]!= ' ')
        {
            word++;
        }
        if(str[i]==' ' && str[i+1]=='\0')
        {
            word--;
        }
    }
    if(str[0]!=' ')
        {
            word++;
        }
    
    return word;
}

string validPassword()
{
    string str;
    cout<<"Enter : ";
    cin>>str;
    int upper =0, lower=0, num=0, special=0;

    if(stringLength(str)>10)
    {
        for(int i=0; str[i]!='\0'; i++)
        {
            if('A'<=str[i] && str[i]<='Z')
            {
                upper++;
            }
            else if('a'<=str[i] && str[i]<='z')
            {
                lower++;
            }
            else if('0'<=str[i] && str[i]<='9')
            {
                num++;
            }
            else
            {
                special++;
            }
        }
    }
    if(upper!=0 && lower!=0 && num!=0 && special!=0)
    {
        return ("Valid Password");
    }
    else
    {
        return ("Invalid Password");
    }
}

string dictionary(string s1, string s2)
{
    for(int idx1=0, idx2=0 ; s1[idx1]!='\0',s2[idx2]!='\0' ; idx1++,idx2++ )
    {
        if(s1[idx1]!=s2[idx2])
        {
            if(s1[idx1]<s2[idx2])
            {
                return s1;
            }
            else{
                return s2;
            }
        }
    }
}

int noOfVowels(string str)
{
    int vowel=0;
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' )
        {
            vowel++;
        }
    }
    return vowel;
}

string reverseString(string str)
{
    string reverse(str);
    int start,end;
    start = 0;
    for(int i=0; str[i]!='\0';i++ )
    {
        end=i;
    }
    while(start < end)
    {
        swap(reverse[start], reverse[end]);
        start++;
        end--;
    }
    return reverse;
}

string checkPalindrome(string str)
{
    if(reverseString(str)==str)
    {
        return ("Palindrome String");
    }
    else
    {
        return ("Not a Palindrome String");
    }
}


int main()
{
    string a = "Evenings are beautiful ";
    string b = "eve";

    cout<<"String Length: "<<stringLength(a)<<endl;
    cout<<upperCase(a)<<endl;
    cout<<"No. of words :"<<noOfWords(a)<<endl;
    cout<<validPassword()<<endl;
    cout<<dictionary(a,b)<<" comes first"<<endl;
    cout<<"No. of Vowels :"<<noOfVowels(a)<<endl;
    cout<<reverseString(a);
    cout<<checkPalindrome(b);
    return 0 ;
}
