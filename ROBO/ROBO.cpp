#include <iostream>
#include "fld.h"
using namespace std;

int main()
{
    cout << "0                                                ROBO                                              0\n0                                              LEVEL?  (Tutorial - '0')                            0" << endl;
    int l;
    cin >> l;
    Fielde fielde(l);
    char cmd;
    while (fielde.HP() > 0 && fielde.WIN()) {
        cin >> cmd;
        fielde.path();
        if (cmd == 'w') {
            fielde.up();
        }
        if (cmd == 'd') {
            fielde.right();
        }
        if (cmd == 's') {
            fielde.down();
        }
        if (cmd == 'a') {
            fielde.left();
        }
        fielde.frame();
    }
    if (fielde.HP() > 0) {
        cout << "You WIN!!!";
    }
    else {
        cout << "ROBO tired, try again";
    }
    return(0);
}