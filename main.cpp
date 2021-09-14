#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <map>
#include <list>
#include <bits/stdc++.h>
#include <tuple>
#include <cmath>
#include <vector>
#include <cstring>

using namespace std;


class StringMtd                     //Answer5
{
public:
    void getString(string str)
    {
       cin>>str;
    }
    void printString(string str)
    {
        cout<<str;
    }
    void testStringMtd(string str)
    {
        getString(str);
        printString(str);
    }
};

bool strcompare(string a, string b)             //Question 8
{
    return a<b;
}

vector<string> Sort(vector<string> x)           //Question 8
{
    int n=x.size();
    sort(x.begin(),x.end(),strcompare);
    return x;
}

vector<string> DuplicRemove(string st)          //Question 10
{
    stringstream ss(st);
    vector<string> v;
    int i=0;
    int k;
    for(string j; ss>>j;)
    {
        k=1;
        for(int z=0; z<i;z++)
        {
            if(j==v[z])
            {
                k=0;
            }
        }
        if(k==0)
        {continue;
        }
        i++;
        v.push_back(j);
        if(ss.peek()==',')
            ss.ignore();
    }
    return v;

}


int main()
{
    for (int i=2000; i<=3200; i++)                           //Answer1
    {
        if((i%7==0)&&(i%5!=0))
        {
            cout<<i<<", ";
        }
    }


    int x;                                                   //Answer2
    cout<<"\n\nQ.2.Type a number for its factorial: ";
    cin>>x;
    int x_fact=1;
    for (int j=x; j>=1; j--)
    {
        x_fact=j*x_fact;
    }
    cout<<"\nThe factorial is: "<< x_fact;

 int n;                                                 //Answer3
    cout<<"\n\nQ.3.Input the number of elements in the dictionary: ";
    cin>>n;
    map<int, int> Dict1;
    for(int k=1; k<=n; k++)
    {
        Dict1[k]=(k)*(k);
    }
    cout<<"\nDictionary 1: {";
    for( auto &el : Dict1)
    {
        cout<<el.first<<": "<<el.second;
        if(el.first!=n)
        {
            cout<<", ";
        }
    }
    cout<<"}";

    list <int> lst;                                      //Answer4-List
    list <int>::iterator i;
    string str;
    cout<<"\n\nQ.5.Enter values separated by a comma: ";
    cin>>str;
    stringstream st(str);

    for(int j; st>>j;)
    {
        lst.push_back(j);
        if(st.peek()==',')
            st.ignore();
    }

    cout<<"\nThe list is: [";
    for(i=lst.begin(); i!=lst.end();i++)
    {
        cout<<"'"<<*i<<"'";
        if(i!=lst.end())
        {
            cout<<", ";
        }
    }
    cout<<"]";




    int C=50, H=30;                                 //Answer6
    int D, Q;
    list <int> lst1;
    cout<<"\n\nQ.6.Enter values separated by a comma: ";
    cin>>str;
    stringstream st1(str);

    for(int j; st1>>j;)
    {
        D=j;
        Q=sqrt((2*C*D)/H);
        lst1.push_back(Q);
        if(st1.peek()==',')
            st1.ignore();
    }


    for(i=lst1.begin(); i!=lst1.end();i++)
    {
        cout<<*i;
        if(i!=lst.end())
        {
            cout<<", ";
        }

    }


    list <int> lst2;                            //Answer 7
    cout<<"\n\nQ.7.Enter size of 2D Array: ";
    cin>>str;
    stringstream st2(str);

    for(int j; st2>>j;)
    {
        lst2.push_back(j);
        if(st2.peek()==',')
            st2.ignore();
    }

    x=lst2.front();
    int y=lst2.back();
    cout<<"\n[";
    for(int j=0; j<x; j++)
    {   cout<<"[";
        for(int k=0; k<y; k++)
        {
            cout<<j*k;
            if (k<y-1)
                cout<<", ";
        }
        cout<<"]";
        if (j<x-1)
            cout<<", ";
    }
    cout<<"]";



    vector<string> wr;                            //Answer 8
    cout<<"\n\nQ.8.Enter words: ";
    getline(cin,str);
    getline(cin,str);
    stringstream st3(str);

    wr=DuplicRemove(str);
    wr=Sort(wr);


    for(int j=0; j < wr.size();j++)
    {
        cout<<wr[j];
        if(j<(wr.size()-1))
        {
            cout<<",";
        }

    }

    string line1;
    string line2;                       //Answer 9
    char c;
    cout<<"\n\nQ.9.Enter line:";
    getline (cin,line1);
    getline (cin,line2);
    for(int j=0;j<line1.length();j++)
    {
        c=line1[j];
        c=toupper(c);
        line1[j]=c;
    }
    for(int j=0;j<line2.length();j++)
    {
        c=line2[j];
        c=toupper(c);
        line2[j]=c;
    }

    cout<<line1<<"\n"<<line2;


    cout<<"\n\nQ.10.Enter words: ";             //Question 10
    getline(cin,str);
    vector<string> vc;
    vc=DuplicRemove(str);
    vc=Sort(vc);

    for(int j=0; j < vc.size();j++)
    {
        cout<<vc[j];
        if(j<(wr.size()-1))
        {
            cout<<" ";
        }

    }


























    return 0;

}



