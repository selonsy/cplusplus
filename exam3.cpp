#include <iostream>
#include <string>

using namespace std;

void GetConseccutiveLetterNum(
        int num, string data[], char letter,
        int max_skip_num, int *output_num
) {
    for (int i = 0; i < num; ++i) {
        string str = data[i];
        int last_pos = 0, l_num = 0, skip = 0, max_num = 0;
        for (int j = 0; j < str.length(); ++j) {
            if (str[j] == letter) {
                ++l_num;
                if (l_num > max_num)
                    max_num = l_num;
            } else if (skip < max_skip_num) {
                ++l_num;
                ++skip;
                if (skip == 1) {
                    last_pos = j;
                }
            } else {
                l_num = 0;
                skip = 0;
                j = last_pos;
            }
        }
        output_num[i] = max_num;
    }
}

int main() {
    int num;
    cin >> num;
    int *line_num = new int(num);
    string *data = new string[num];
    for (int i = 0; i < num; ++i) {
        cin >> data[i];
    }
    GetConseccutiveLetterNum(num, data, 'N', 2, line_num);
    for (int i = 0; i < num; ++i) {
        cout << line_num[i] << endl;
    }
    return 0;
}