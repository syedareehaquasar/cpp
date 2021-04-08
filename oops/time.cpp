#include <iostream>
using namespace std;
class times{
    int seconds, minutes, hours;

    public:
        void getTime(int h, int m, int s){
            hours = h;
            minutes = m;
            seconds = s;
        }

        void putTime(){
            cout << "The time is " << hours << " hours " << minutes << " minutes " << seconds << " seconds\n";
        }
        
        void sum(times, times);
};

void times::sum(times t1, times t2){
    seconds = t1.seconds + t2.seconds;
    minutes = seconds / 60;
    seconds %= 60;
    minutes += t1.minutes + t2.minutes;
    hours = minutes / 60;
    minutes %= 60;
    hours += t1.hours + t2.hours;
}

int main(){
    times t1, t2, t3;
    t1.getTime(1, 2, 30);
    t2.getTime(4, 5, 55);
    t3.sum(t1, t2);
    t1.putTime();
    t2.putTime();
    t3.putTime();
    int hour1, minute1, second1, hour2, minute2, second2;
    cout << "Time - 1 \n Enter Hour, minute and second " << endl;
    cin >> hour1 >> minute1 >> second1;
    cout << "Time - 2 \n Enter Hour, minute and second " << endl;
    cin >> hour2 >> minute2 >> second2;
    t1.getTime(hour1, minute1, second1);
    t2.getTime(hour2, minute2, second2);
    t3.sum(t1, t2);
    t1.putTime();
    t2.putTime();
    t3.putTime();
    return 0;
}