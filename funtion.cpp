#include <iostream>
using namespace std;

void drawbox(int w, int h);
void printname(string name);
void drawline(int length);
int hoursts(int hours);
int findmax(int a, int b, int c);


int main() {
drawbox(15,5);

printname("ewan");

drawline(7);

cout<<hoursts(24)<<endl;

cout << findmax(1, 2, 3) << endl;

}
void drawbox(int w, int h) {
for (int i = 0; i < h; i++) {
for (int j = 0; j < w; j++) {
cout << '*';
}
cout << "" << endl;
}
}
void printname(string name) {

cout << "Hello"<<name;

cout << "" << endl;
}
void drawline(int length) {
for (int i = 0; i < length; i++) {
cout << '-';
}
cout << "" << endl;
}
int hoursts(int hours) {
cout << hours * 3600;
return hours;

}

int findmax(int a, int b, int c) {
if (a > b && a > c)
return a;

if (b > a && b > c)
return b;

if (c > a && c > b)
return c;

}
