#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string, int> marksMap = {};

    marksMap["shoaib"] = 98;
    marksMap["ravish"] = 59;
    marksMap["atizaz"] = 2;

    marksMap.insert({{"kozume"s, 126}, {"kuroo"s, 113}});

    map<string, int>::iterator iter;

    for (iter = marksMap.begin(); iter != marksMap.end(); ++iter)
    {
        cout << (*iter).first << " : " << (*iter).second << endl;
    }
    cout << "The size is : " << marksMap.size() << endl;
    cout << "The max size is : " << marksMap.max_size() << endl;
    cout << "The empty's return value is : " << marksMap.empty() << endl;

    return 0;
}