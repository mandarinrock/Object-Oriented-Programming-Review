#include <iostream>
#include <vector>
using namespace std;

class C {
    int a, b;
public:
    C(int iA, int iB) :
    a(iA), b(iB) {}
};

void addObjects(int num) {
    vector<C> v;
    for (int i = 0; i < num; i++) {
        v.push_back(C(i, i));
    }
}

int main() {
    addObjects(20);
    return 0;
}