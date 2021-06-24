# include <iostream>
using namespace std;

class array
{
    public:
    int a[5],i;
    void input()
    {
        cout <<"enter the number:" <<endl;
        for(int i = 0; i <=4; i++)
        {
            cin >> a[i];
        }
    }
    void display()
    {
        int sum = 0;
        for(int i = 0; i <=4; i++)
        {
            sum = sum + a[i];
        }
        cout <<"the sum of array is:"<<sum<<endl;
        }
    };
    int main()
    {
        array s;
        s.input();
        s.display();
        return 0;
    }