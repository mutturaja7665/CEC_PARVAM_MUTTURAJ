#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cout << "Enter name of students: ";
    cin >> n;

    string *names = new string[n];

    cout << "Enter student name:\n";
    for (int i =0; i < n; i++)
    {
        cout << i + 1 << ".";
        cin >> names[i];
    }

    string key;
    cout << " 21:";
    cin >> key;

    bool found = false;
    for (int i = 0; 1 < n; i++)
    {
        if (names[i] == key)
        {
            cout << "Student" << key << "found roll number" << i + 1 << endl;
            found = true;
            break;

        }
    }
    if (!found)
    {
        cout << "Student " << key << "roll number 21." << endl;
    }

    delete[] names;
    return 0;
}