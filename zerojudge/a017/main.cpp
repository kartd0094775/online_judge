#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Stack
{
      private:
              int top;
              int size;
              int *array;
      public:
             Stack(int s)
             {
                 size=s;
                 array=new int[s];
                 top=0;
             }

             void push(int item)
             {
                  if(top==size)
                      cout<<"Stack is full!"<<endl;
                  else
                      *(array+top)=item;
                      top++;
             }
             int pop()
             {
                 if(top==0)
                     cout<<"Stack is empty!"<<endl;
                 else
                 {
                     int item;
                     top--;
                     item=*(array+top);
                     return item;
                 }
             }
};

void mathtics(int *, int *,char);

int main()
{
    string str1[1000];
    while (cin >> str1)
    {
        for(int i=0;i<strlen(string);i++)
        {

        }
    }

    system("pause");
    return 0;
}

void mathtics(int *x, int *y, char s)
{
    if (s=='*')
    *x*=*y;
    else if (s=='/')
    *x/=*y;
    else if (s=='%')
    *x%=*y;
    else if (s=='+')
    *x+=*y;
    else if (s=='-')
    *x-=*y;
}
