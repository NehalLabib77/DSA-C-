#include <iostream>
using namespace std;

int matching(const string &text, const string &pattern)
{
    int textLen = text.length();
    int patternLen = pattern.length();

    if (patternLen > textLen)
        return -1;

    for (int i = 0; i <= textLen - patternLen; i++)
    {
        int j;
        for (j = 0; j < patternLen; j++)
        {
            if (text[i + j] != pattern[j])
                break;
        }
        if (j == patternLen)
            return i;
    }
    return -1;
}
int main()
{
    string text, pattern;
    cout << "Enter the text: ";
    getline(cin, text);
    cout << "Enter the pattern: ";
    getline(cin, pattern);
    int result = matching(text, pattern);

    cout << "Pattern found at index: " << result << endl;
    return 0;
}