#include<iostream>
using namespace std;
class pallindrome
{
    private:
    int num,reverse,temp,i;
    public:
       void input()
       {
        cout<<"Enter a number:";
        cin>>num;
       }
       void process()
       {
        temp=num;
        reverse=0;
        while(num>0)
        {
            int x=num%10;
            reverse=x+(reverse*10);
            num=num/10;
        }
       }
       void check()
       {
        if(reverse==temp)
        {
            cout<<temp<<" is a pallindrome number";
        }
        else
        {
            cout<<temp<<" is not a pallindrome number";
        }
       }
};
int main()
{
    pallindrome obj;
    obj.input();
    obj.process();
    obj.check();
}