#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> tree;

    tree.insert(5);
    tree.insert(3);
    tree.insert(8);
    tree.insert(2);
    tree.insert(10);

    for (auto elem : tree) {
        cout << elem << " ";
    }
    cout << endl;

    tree.erase(3);
    tree.erase(8);

    for (auto elem : tree) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}
