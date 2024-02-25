#include<iostream>
using namespace std;
main()
{
    int row;
    cout<<"Enter row size: ";
    cin>>row;
    cout<<"Enter the elements of the matrix: ";
    int position[][5];
    for(int i=0; i<row; i++)
    {
        for(int a=0; a<5; a++)
        {
            cout<<"Enter element at position ["<<i<<"]"<<"["<<a<<"]: ";
            cin>>position[i][a];
        }
    }
    cout<<endl;
    cout<<"Original Matrix: ";
    for(int i=0; i<row; i++)
    {
        for(int a=0; a<5; a++)
        {
            cout<<position[i][a]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Matrix after largest column moved to first: ";
    
}