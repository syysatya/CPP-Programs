/*
Program Name : AreaOfCircle
Concept      : const usage
Input        : radius = 5
Output       : Area of circle
Logic        : area = PI * r * r
*/

#include <iostream>
using namespace std;

int main() {
    const float PI = 3.14;
    int r = 5;
    float area = PI * r * r;
    cout << "Area of Circle: " << area << endl;
    return 0;
}
