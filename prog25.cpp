union Data {
    int i;
    float f;
    char str[20];
};
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    Data data;

    data.i = 10;
    cout << "Data as integer: " << data.i << endl;

    data.f = 3.14;
    cout << "Data as float: " << data.f << endl;

    strcpy(data.str, "Hello");
    cout << "Data as string: " << data.str << endl;

    return 0;
}