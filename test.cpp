#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v;
    int i;

    for (i = 0; i < 10; ++i)
    {
        v.push_back(i);
    }

    vector<int>::iterator first;
    vector<int>::iterator last;

    first = v.begin();

    last = v.begin();
    cout << *first << "\n";
    cout << *last << "\n";

    int num = std::distance(first, last);

    cout << num << "\n";
    return 0;
}
