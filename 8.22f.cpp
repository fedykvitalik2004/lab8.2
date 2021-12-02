#include <string>
#include <iostream>

using namespace std;

void Find(const string str,string& final)
{
    size_t AV1 = str.find(" a", 0);

    if (str.find("a", 0) == 0)                                    //case 1
    {
        size_t AV2= str.find(" ", 0);
        if (AV2 != -1)
        {
            final.assign(str,0,AV2);
        }
        else
        {
            final.assign(str, 0, str.length());
        }
    }
    else if (AV1 != -1)                                           //case 2
    {
        size_t AV2 = str.find(" ", AV1 + 1);
        if (AV2 != -1)
        {
            final.assign(str, AV1 + 1, AV2 - AV1);
        }
        else
        {
            final.assign(str, AV1 + 1, str.length() - AV1);
        }
    }
}

int main()
{
    string str, final;

    cout << "Enter string" << endl;
    getline(cin, str);

    Find(str, final);

    cout << final << endl;

    return 0;
}
