#include <iostream>
using namespace std;

void encode(string s, int j)
{
    int x;
    for(int i = j; i < s.size(); i = i+j+1)
    {
        x= s[i];
        s[i] = (char)(x + j);
    }
    cout << "\n\nConverted String: " << s;
    cout << endl << endl;
}

int main()
{
    int j;
    string s;
    cout<< "Please Enter a sample string: ";
    getline(cin,s);
    cout<< "Please Enter a sample integer: ";
    cin >> j;

    cout << "\nSample String: " << s;
    cout << "\nSample Integer: " << j;

    encode(s, j);
    return 0;
}



