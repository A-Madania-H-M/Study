#include <iostream>
#include <string>
using namespace std;

int main(){
    string txt1 = "The tale of \'Dead-Man Tales\' will bring you down!";
    string txt2 = "An alien hath come forward to rob \"Humanity's Mind\".";
    string txt3 = "When making comment, use double-backlash \\\\";

    // Single quote uses \'
    // Double quote uses \"
    // Backlash uses \\

    // Other sp.characters would be:
    // New line \n
    // Tab      \t

    cout << "The use of \\\': " << txt1 << "\n";
    cout << "The use of \\\": " << txt2 << "\n";
    cout << "The use of \\ : " << txt3 << "\n";
    return 0;
};