#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> strings;

    ifstream in("e85.cpp");
    if (in)
    {
        string buf;
        while (getline(in, buf))
        {
            strings.push_back(buf);
        }
    }

    vector<string>::iterator it;
    for (it = strings.begin(); it != strings.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}
