
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;

        if (word.size() > 10) {
            cout << word[0] << word.size() - 2 << word.back() << '\n';
        } else {
            cout << word << '\n';
        }
    }

    return 0;
}
