#include<iostream>
using namespace std;


// int main()
// {
//     cout<<"hello world";
//     return 0;
// }
class Math{
    public:
    int add(int a ,int b)
    {
        return a+b;
    }

};

int main()
{
    Math cal;
    int res = cal.add(3,4);
    cout<<"Sum:"<<res<<endl;

    return 0;

}