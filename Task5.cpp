#include<iostream>
using namespace std;
main()
{
    cout<<"Enter the elements of the matrix: "<<endl;
    int element[3][3];
    for(int i=0; i<3; i++)
    {
        for(int a=0; a<3; a++)
        {
            cout<<"Enter element at position ["<<i<<"]["<<a<<"]: ";
            cin>>element[i][a];
        }
    }
    cout<<"The matrix you entered is: "<<endl;
    for(int i=0; i<3; i++)
    {
        for(int a=0; a<3; a++)
        {
            cout<<element[i][a]<<"\t";
        }
        cout<<endl;
    }
    if(element[0][0]==1 && element[1][1]==1 && element[2][2]==1 && element[0][1]==0 && element[0][2]==0 && element[1][0]==0 && element[1][2]==0 && element[2][0]==0 && element[2][1]==0)
    {
        cout<<"The entered matrix is an identity matrix."<<endl;
    }
    else
    {
        cout<<"The entered matrix is NOT an identity matrix."<<endl;
    }
}