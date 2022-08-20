#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str)
{
    // Complete this function
    stringstream ss(str);
    vector<int> v;
    int a = str.size();
    int n;
    char skip;
    while (ss >> n)
    {

        v.push_back(n);
        ss >> skip;
    }
    return v;
}

int main()
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }

    return 0;
}
