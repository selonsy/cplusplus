#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
int main()
{
    ofstream my_O_file("file.txt", ios::out);

    if (my_O_file.is_open())
    {
        cout << "打开了文件" << endl;
        my_O_file << "Hello World.\n";
    }
    ifstream my_i_file("file.txt", ios::in);
    if (!my_i_file.eof())
    {
        char buffer[256];
        my_i_file.read(buffer, 100);
        my_i_file.getline(buffer, 100);

        my_i_file >> buffer;
        cout << buffer << endl;
    }
    return 0;
}
