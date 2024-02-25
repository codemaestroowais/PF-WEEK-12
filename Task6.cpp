#include<iostream>
using namespace std;
string ans(string ships[][5], string input);
main()
{
    const int rowsize=5;
    const int colsize=5;
    string ships[rowsize][colsize]={
        {".", ".", ".", "*", "*"},
        {".", "*", ".", ".", "."},
        {".", "*", ".", ".", "."},
        {".", "*", ".", ".", "."},
        {".", ".", "*", "*", "."}
        };
    string input;
    cout<<"Enter coordinates to fire torpedo (e.g., A1, B3, E5): ";
    cin>>input;
    string b=ans(ships, input);
    cout<<"Result: "<<b;
}
string ans(string ships[][5], string input)
{
    string a="0";
    int row=input[0]-'A';
    int col=input[1]-'1';
    if(ships[row][col]==".")
    {
        a="splash";
    }
    else if(ships[row][col]=="*")
    {
        a="BOOM";
    }
    return a;
}
