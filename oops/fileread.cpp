#include <iostream>
#include<fstream.h>

using namespace std;

// array of class objects and file operations
class student_info
{
protected:
    char name[20];
    int age;
    char sex;
    float height;
    float weight;

public:
    void getdata();
    void display();
};

int main()
{
    student_info obj;
    // reading from the keyboard
    cout << "Enter the following information" << endl;
    int n = 5;4

    for (int i = 0; i <= n - 1; ++i)
    {
        int j = i;
        cout << endl;
        cout << "object = " << j + 1 << endl;
        obj[i].getdata();

        // storing onto the file
        infile.open(fname, ios::out);
        cout << "storing in the file \n";
        for (int i = 0; i <= n - 1; ++i)
        {
            infile.write((char *)&obj[i], sizeof(obj[i]));
        }
        infile.close();

        // readingfromthefile
        infile.open(fname, ios::in);
        cout << "Reading from the file \n";
        for (i = 0; i <= n - 1; ++i)
        {
            infile.read(char *) & obj[i];
            sizeof(obj[j]);
            obj[i].display ();
        }
        infile.close();
        return 0;
    }
