#include <iostream>
#include <string>

using namespace std;

class studentRecord{
    private:
        string name;
        string branch;
        int rollNo;
        int age;
        char sex[15];
        float marks;

    public:
        void getDetails();
        void check();
        void showDetails();
        void details();
};

void studentRecord::getDetails(){
    cout << "Enter name" << endl;
    cin >> name;
    cout << "Enter branch" << endl;
    cin >> branch;
    cout << "Enter Roll no. "<< endl;
    cin >> rollNo;
    cout << "Enter age" << endl;
    cin >> age;
    cout << "Enter sexuality" << endl;
    cin >> sex;
    cout << "Enter total marks scored in 5 subjects" << endl;
    cin >> marks;
}

void studentRecord::showDetails(){
    cout << "Name: " << name << endl;
    cout << "Percentage: " <<  (marks/5) << "%" << endl;
}

void studentRecord::check(){
    if (((marks/5)) > 70) {
        showDetails();
    }
}

void studentRecord::details(){
    cout << "name: " << name << ", branch: " << branch << ", roll no.: " << rollNo << ", age: " << age << ", sex: " << sex << ", marks: " << marks << endl;
}

int main(int argc, char const *argv[]){
    int students;
    cout << "Enter the no. of students: ";
    cin >> students;
    studentRecord studentsArr[students];
    for (int i = 0; i < students; ++i) {
        cout << "For student" << i + 1 << " :" << endl;
        studentsArr[i].getDetails();
    }

    cout << "\nYou have entered:" << endl;
    for (int i = 0; i < students; i++) {
        studentsArr[i].details();
    }

    cout << "\n\n\n" << endl;

    cout << "Students having marks greater than 70% are: " << endl;
    for (int i = 0; i < students; i++) {
        studentsArr[i].check();
    }
}
