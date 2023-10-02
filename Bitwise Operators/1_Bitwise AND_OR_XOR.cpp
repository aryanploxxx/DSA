#include <iostream> 
using namespace std;

int main() {
    int x=3, y=6;
    cout<<(x&y)<<endl;
    // Bitwise AND
    cout<<(x|y)<<endl;
    // Bitwise OR
    cout<<(x^y)<<endl;
    // Bitwise XOR

    // Size of integer representation is not standarized
    // Compilers are free to choose their own size as 32 bits ot 64 bits
    return 0;
}