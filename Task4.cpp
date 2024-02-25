#include<iostream>
using namespace std;
void suma(int rowsize, int element[][3]);
main()
{
    int rowsize;
    int sum=0;
    cout<<"Enter row size: ";
    cin>>rowsize;
    int element[rowsize][3];
    cout<<"Enter the elements of the matrix: "<<endl;
    for(int i=0; i<rowsize; i++)
    {
        for(int a=0; a<3; a++)
        {
            cout<<"Enter element at position ["<<i<<"]["<<a<<"]: ";
            cin>>element[i][a];
        }
    }
    suma(rowsize, element);
}
void suma(int rowsize, int element[][3])
{
    int sum=0;
    for(int i=0; i<3; i++)
    {
        for(int a=0; a<rowsize; a++)
        {
            sum=sum+element[i][a];
        }
    }
    cout<<"The sum of elements in the matrix is: "<<sum;
}