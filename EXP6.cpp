
#  Apply Mixed Language Programing to design a calculator


#include <iostream.h>
#include <conio.h>

int main()
{
    clrscr();
    int a, b, c, d;
    cout << "Enter Your Number : -  " << endl;
    cin >> a;

    cout << "Enter No to shift: - " << endl;
    cin >> b;

    asm mov ax, a;
    asm mov cx, b;
    asm shl ax, cl;
    asm mov c, ax;
    cout << "Shift left :- " << c << endl;

    cout << "Enter no to shift: - " << endl;
    cin >> d;
    asm mov ax, a;
    asm mov cx, d;
    asm shr ax, cl;
    asm mov c, ax;

    cout << "Shift Right :- " << c << endl;
    getch();
    return 0;
}
