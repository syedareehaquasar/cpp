#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    char data[200];

    ifstream file;
    file.open("afile.txt");

    cout << "Reading from the file" << endl;

    // Reding from file
    file >> data;
    while (getline (file, data))
    {
        cout << data;
    }

    // close the opened file.
    file.close();

    return 0;
}
