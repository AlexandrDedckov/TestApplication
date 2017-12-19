#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include <sstream>

using namespace std;

string getPathFile()
{
    string fileName;
    cout << "Enter path file: " << endl;
    cin >> fileName;

    return fileName;
}

string fileText()
{
    ifstream file(getPathFile(), std::ios::binary);

    string str;
    ostringstream out;
    out << file.rdbuf();
    out.str().swap(str);

    return str;
}

void transcript(vector<char> &arrayFile)
{
    size_t counter = 0;
    while (counter < arrayFile.size())
    {
        const size_t NEXT_ITEM = counter + 1;
        if (NEXT_ITEM >= arrayFile.size())
        {
            ++counter;
            continue;
        }

        if (arrayFile[counter] == arrayFile[NEXT_ITEM])
        {
            auto it = arrayFile.begin();
            arrayFile.erase(it + counter, it + NEXT_ITEM + 1);

            if (counter != 0)
                --counter;

            continue;
        }

        ++counter;
    }
}

int main(int argc, char *argv[])
{
    const string &str = fileText();
    std::vector<char> arrayFile(str.begin(), str.end());

    transcript(arrayFile);
    std::string result(arrayFile.begin(),arrayFile.end());
    cout << result;
    return 0;
}
