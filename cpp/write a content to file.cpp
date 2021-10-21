#include<iostream>
#include<stdio.h>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
    char fname[20], str[200];
    fstream fp;
    cout<<"Enter the Name of File: ";
    gets(fname);
    fp.open(fname, fstream::out);
    if(!fp)
    {
        cout<<"\nError Occurred!";
        return 0;
    }
    cout<<"Enter the Data: ";
    gets(str);
    while(strlen(str)>0)
    {
        fp<<str;
        fp<<"\n";
        gets(str);
    }
    fp.close();
    cout<<endl;
    return 0;
}
