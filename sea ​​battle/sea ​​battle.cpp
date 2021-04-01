#include <iostream>
#include <conio.h>
#include <windows.h>
#include<string>
string win = "ура";
int  x1 = 0;
void checkgo();
int  x2 = 0;
int x3 = 0;
int  x4 = 0;
int  x5 = 0;
int  x6 = 0;
int  x7 = 0;
int  x8 = 0;
int x9 = 0;
int place = 5;
using namespace std;
void pole()
{
    //cout << " Поле игры " << endl;
    //cout << " | - 7 - 8 - 9 | " << endl;
    //cout << " | - 4 - 5 - 6 | " << endl;
    //cout << " | - 1 - 2 - 3 | " << endl;
    cout << "| -" << x7 << "-" << x8 << "-" << x9 << "-|" << endl;
    cout << "| -" << x4 << "-" << x5 << "-" << x6 << "-|" << endl;
    cout << "| -" << x1 << "-" << x2 << "-" << x3 << "-|" << endl;
    checkgo();
}
void eventH()
{

    if (place == 1 || place == 2 || place == 3 || place == 4 || place == 5 || place == 6)
    {
        place = place + 3;

    }
    switch (place)
    {
    case 1: {
        x1 = 9;
        break;
    }
    case 2: {
        x2 = 9;
        break;
    }
    case 3: {
        x3 = 9;
        break;
    }
    case 4: {
        x4 = 9;
        break;
    }
    case 5: {
        x5 = 9;
        break;
    }
    case 6: {
        x6 = 9;
        break;
    }
    case 7: {
        x7 = 9;
        break;
    }
    case 8: {
        x8 = 8;
        break;
    }
    case 9: {
        x9 = 9;
        break;
    }
    default:
        break;
    }
    pole();
    Sleep(20);
    if (x1 == 9)
    {
        x1 = 0;
    }
    if (x2 == 9)
    {
        x2 = 0;


    }
    if (x3 == 9)
    {
        x3 = 0;
    }
    if (x4 == 9)
    {
        x4 = 0;
    }
    if (x5 == 9)
    {
        x5 = 0;
    }
    if (x6 == 9)
    {
        x6 = 0;
    }
    if (x7 == 9)
    {
        x7 = 0;
    }
    if (x8 == 9)
    {
        x8 = 0;
    }
    if (x9 == 9)
    {
        x9 = 0;
    }
        
}
void eventP()
{
    if (place == 4 || place == 5 || place == 6 || place == 7 || place == 8 || place == 9)
    {
        place = place - 3;

    }
    switch (place)
    {
    case 1: {
        x1 = 9;
        break;
    }
    case 2: {
        x2 = 9;
        break;
    }
    case 3: {
        x3 = 9;
        break;
    }
    case 4: {
        x4 = 9;
        break;
    }
    case 5: {
        x5 = 9;
        break;
    }
    case 6: {
        x6 = 9;
        break;
    }
    case 7: {
        x7 = 9;
        break;
    }
    case 8: {
        x8 = 8;
        break;
    }
    case 9: {
        x9 = 9;
        break;
    }
    default:
        break;
    }
    pole();
    Sleep(20);
    if (x1 == 9)
    {
        x1 = 0;
    }
    if (x2 == 9)
    {
        x2 = 0;


    }
    if (x3 == 9)
    {
        x3 = 0;
    }
    if (x4 == 9)
    {
        x4 = 0;
    }
    if (x5 == 9)
    {
        x5 = 0;
    }
    if (x6 == 9)
    {
        x6 = 0;
    }
    if (x7 == 9)
    {
        x7 = 0;
    }
    if (x8 == 9)
    {
        x8 = 0;
    }
    if (x9 == 9)
    {
        x9 = 0;
    }
}
void eventM()
{
    if (place == 1 || place == 2 || place == 4 || place == 5 || place == 7 || place == 8)
    {
        place = place - 3;

    }
    switch (place)
    {
    case 1: {
        x1 = 9;
        break;
    }
    case 2: {
        x2 = 9;
        break;
    }
    case 3: {
        x3 = 9;
        break;
    }
    case 4: {
        x4 = 9;
        break;
    }
    case 5: {
        x5 = 9;
        break;
    }
    case 6: {
        x6 = 9;
        break;
    }
    case 7: {
        x7 = 9;
        break;
    }
    case 8: {
        x8 = 8;
        break;
    }
    case 9: {
        x9 = 9;
        break;
    }
    default:
        break;
    }
    pole();
    Sleep(20);
    if (x1 == 9)
    {
        x1 = 0;
    }
    if (x2 == 9)
    {
        x2 = 0;


    }
    if (x3 == 9)
    {
        x3 = 0;
    }
    if (x4 == 9)
    {
        x4 = 0;
    }
    if (x5 == 9)
    {
        x5 = 0;
    }
    if (x6 == 9)
    {
        x6 = 0;
    }
    if (x7 == 9)
    {
        x7 = 0;
    }
    if (x8 == 9)
    {
        x8 = 0;
    }
    if (x9 == 9)
    {
        x9 = 0;
    }
}
void eventK()
{
    if (place == 3 || place == 6 || place == 9 || place == 8 || place == 5 || place == 2)
    {
        place = place - 3;

    }
    switch (place)
    {
    case 1: {
        x1 = 9;
        break;
    }
    case 2: {
        x2 = 9;
        break;
    }
    case 3: {
        x3 = 9;
        break;
    }
    case 4: {
        x4 = 9;
        break;
    }
    case 5: {
        x5 = 9;
        break;
    }
    case 6: {
        x6 = 9;
        break;
    }
    case 7: {
        x7 = 9;
        break;
    }
    case 8: {
        x8 = 8;
        break;
    }
    case 9: {
        x9 = 9;
        break;
    }
    default:
        break;
    }
    pole();
    Sleep(20);
    if (x1 == 9)
    {
        x1 = 0;
    }
    if (x2 == 9)
    {
        x2 = 0;


    }
    if (x3 == 9)
    {
        x3 = 0;
    }
    if (x4 == 9)
    {
        x4 = 0;
    }
    if (x5 == 9)
    {
        x5 = 0;
    }
    if (x6 == 9)
    {
        x6 = 0;
    }
    if (x7 == 9)
    {
        x7 = 0;
    }
    if (x8 == 9)
    {
        x8 = 0;
    }
    if (x9 == 9)
    {
        x9 = 0;
    }
}
void probel()
{
    switch (place)
    {
    case 1: {
        x1 = 1;
        break;
    }
    case 2: {
        x2 = 1;
        break;
    }
    case 3: {
        x3 = 1;
        break;
    }
    case 4: {
        x4 = 1;
        break;
    }
    case 5: {
        x5 = 1;
        break;
    }
    case 6: {
        x6 = 1;
        break;
    }
    case 7: {
        x7 = 1;
        break;
    }
    case 8: {
        x8 = 1;
        break;
    }
    case 9: {
        x9 = 1;
        break;
    }
    default:
        break;
    }
    pole();
}
void checkgo()
{
    string button;
    while (true)
    {
        if (_kbhit())
        {
            button = _getch();
            cout << button << endl;
            if (button == " ")
            {
                probel();
            }
            if (button == "H")
            {

                eventH();
            }
            if (button == "K")
            {
                eventK();
            }
            if (button == "M")
            {
                eventM();
            }
            if (button == "P")
            {
                eventP();
            }
            //другие действия
        }

        Sleep(250);
    }
}
int main()
{
    setlocale(0, "");
    cout << "Добро пожаловать в Морской бой" << endl;
    pole();
    return 0;
}
