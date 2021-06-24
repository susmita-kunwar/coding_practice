//WAP to define a class Time that has 3 data members for hours, minutes and second. Include member functions :       

# include <iostream>
using namespace std;

class time
{
    public:
    double hrs,mins,ses;
    void getTime()
    {
        cout <<"enter hours:";
        cin >> hrs;

        cout <<"enter minutes:";
        cin >> mins;

        cout <<"enter seconds:";
        cin >> ses;
    }
    time sumTime(time t1, time t2)
    {
        time sum;
        sum.hrs = t1.hrs + t2.hrs;
        sum.mins = t1.mins + t2.mins;
        sum.ses = t1.ses + t2.ses; 

    }
    void displayTime()
    {
        cout <<"the totals time is:" << endl;
        cout <<"hours:" << hrs << endl;
        cout <<"minutes:" << mins << endl;
        cout <<"seconds:" << ses << endl;   
    }


};

int main()
{

    time s1, s2, sum;
    s1.getTime();
    s2.getTime();
    sum = sum.sumTime(s1, s2);
    sum.displayTime();
    return 0;
}