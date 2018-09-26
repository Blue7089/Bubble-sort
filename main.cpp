#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i=0,cnt;
    int number[8]= {1,3,6,6,2,1,7,8};
    cout<< "\n Sorting ALgorithem  \n"<<endl;
    for(i=0; i<8; ++i)
        cout<<number[i]<<endl;

    cnt=i;

    bool sorted =false;
    long help ;                    //swap
    int end=cnt;                  // ENd of loop

    while(!sorted)
    {
        sorted = true;
        --end;
        for(i=0; i<end; ++i)
        {
         if(number[i]>number[i+1])
         {
         sorted =false;
         help=number[i];
         number[i]=number[i+1];
         number[i+1]=help;
         }
        }
    }
  cout<<"the sorted numbers : "<<endl;
  for(i=0;i<cnt;++i)
    cout<<setw(10)<<number[i]<<endl;

  int z=0;
  for(i=0;i<8;i++)
  {

     if(number[i+1]>number[i] && abs(number[i]+1)!=abs(number[i+1]))
     {z=number[i+1]-1;}

  }

    cout<<z<<endl;

    return 0;
}
