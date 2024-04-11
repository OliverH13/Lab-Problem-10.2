
#include <iostream>
#include <string>

using namespace std;

int count_letters(string str);
int convert(char letter);

int main() {
    string input;
    
    cout << "Enter a quote or Q to quit." << endl;
    cout << endl;

    while (true) {
        getline(cin, input);
        if (input == "Q") break;

        cout << "(" << count_letters(input) << ")" << endl;;
        cout << endl;
    }
}

int count_letters(string str) {
    if (str.empty()) return 0;

    int length_of_string = static_cast<int>(str.length());

    int sum = convert(str[length_of_string - 1]);

    for (int i = length_of_string - 2; i >= 0; --i) {

        if (convert(str[i]) < convert(str[i + 1]))
            sum -= convert(str[i]);
        else
            sum += convert(str[i]);
    }
    return sum;

}
int convert(char letter) {
    switch (letter) {
    case 'A':
        return 1;
    case 'a':
        return 1;
    case 'B':
        return 1;
    case 'b':
        return 1;
    case 'C':
        return 1;
    case 'c':
        return 1;
    case 'D':
        return 1;
    case 'd':
        return 1;
    case 'E':
        return 1;
    case 'e':
        return 1;
    case 'F':
        return 1;
    case 'f':
        return 1;
    case 'G':
        return 1;
    case 'g':
        return 1;
    case 'H':
        return 1;
    case 'h':
        return 1;
    case 'I':
        return 1;
    case 'i':
        return 1;
    case 'J':
        return 1;
    case 'j':
        return 1;
    case 'K':
        return 1;
    case 'k':
        return 1;
    case 'L':
        return 1;
    case 'l':
        return 1;
    case 'M':
        return 1;
    case 'm':
        return 1;
    case 'N':
        return 1;
    case 'n':
        return 1;
    case 'O':
        return 1;
    case 'o':
        return 1;
    case 'P':
        return 1;
    case 'p':
        return 1;
    case 'Q':
        return 1;
    case 'q':
        return 1;
    case 'R':
        return 1;
    case 'r':
        return 1;
    case 'S':
        return 1;
    case 's':
        return 1;
    case 'T':
        return 1;
    case 't':
        return 1;
    case 'U':
        return 1;
    case 'u':
        return 1;
    case 'V':
        return 1;
    case 'v':
        return 1;
    case 'W':
        return 1;
    case 'w':
        return 1;
    case 'X':
        return 1;
    case 'x':
        return 1;
    case 'Y':
        return 1;
    case 'y':
        return 1;
    case 'Z':
        return 1;
    case 'z':
        return 1;
    default:
        return 0;
    }
}