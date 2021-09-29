// Section 20
// Challenge 1
// Identifying palindrome strings using a deque
#include <cctype>
#include <deque>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

bool is_palindrome(const string& s)
{
    deque<char> dec;
    // You must implement this function.
    // Since we are learning the STL - use a deque to solve the problem.
    for(char c : s){
        dec.push_back(tolower(c));
    }

    while(dec.size() > 1){

        char front = dec.front();
        char back = dec.back();

        dec.pop_front();
        dec.pop_back();

        if(front != back){
            return false;
        }
    }

    return true;
}

int main()
{
    vector<string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
        "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };
   
    cout << boolalpha;
    cout << setw(8) << left << "Result" << "String" << endl;
    for(const auto& s : test_strings) {
        cout << setw(8) << left << is_palindrome(s)  << s << endl;
    }
    cout << endl;
    return 0;
}