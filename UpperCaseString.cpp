#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main ()
{
    string text;
    cout << "Enter a line of text\n";
    getline(cin, text);
    for (int inner = 0; inner < text.length(); inner++)
    {
        text[inner] = toupper(text[inner]);
    }
    cout<<text<<endl;
    return 0;
}
