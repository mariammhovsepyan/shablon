#include <string>
#include <iostream>
using namespace std;
int main()
{

    string  encode_str = "dhoreawWH", decode_str = "AfbscBC34rt";
    string str = "Hello World";
    for (int i = 0; i < str.length(); i++)
    {
        bool f = false;
        for (int j = 0; j < encode_str.length(); j++)
        {
            if (str[i] == encode_str[j])
            {
                cout << decode_str[j];
                f = true;
            }
        }
        if (f == false) cout << str[i];
    }

}
