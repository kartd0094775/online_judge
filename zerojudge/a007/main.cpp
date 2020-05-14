#include <iostream>
#include <vector>
using namespace std;
int prime(int);
int main()
{
    int num;
    while(cin >> num)
    if(prime(num)==1)
    cout <<"質數"<<endl;
    else
    cout<<"非質數"<<endl;

    return 0;
}
//建立質數表
int prime (int num)
{
    vector<int>array;
    int i,j,depend;
    for(i=2;i<2147483647;i++)
    {
        depend=1;
        for(j=i-1;j>1;i--)
        {
            if(i%j==0)
            {
            depend=0;
            break;
            }

        }
        if(depend)
        array.push_back(i);
    }
    for(i=0;i<array.size();i++)
    {
        if(array[i]==num)
        return 1;
    }
    return 0;

}
