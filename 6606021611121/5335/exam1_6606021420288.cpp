#include <iostream>
using namespace std;
int money
int main(){
    int check;

    do
{
    cout << "Menu" << endl;
    cout << "1 select noodles" << endl;
    cout << "2 select drink" << endl;
    cout << "3 check bill" << endl;
    cout << "0 Exit" << endl;


   if (check == 1)
    {
        /* code */
    }else if (check == 2)
    {
        /* code */
    }else if (check == 3)
    {
        /* code */
    }

} while (check !=0)



}   
void noodles(){
    int s;
    cout << " Menu " << endl;
    cout << " 1 " << endl;
    cout << " 2 " << endl;
    cout << " 3 " << endl;
    cout << " 4 " << endl;
    cout << " select : ";
    cin >> s;

    if (s == 1)
    {
        money += 55;
    }else if (s == 2)
    {
        /* code */
    }else if (s == 3)
    {
        /* code */
    }else if (s == 4)
    {
         /* code */
    }else if (s == 5)
    {
        /* code */
    }else cout << "Error" << endl;
}
void bill(){
    int cash, ch;
    cout << "bill" << endl;
    cout << "total = " << money << endl;
    cin >> cash;
    ch = cash - money;
    cout << "change = " << " bath " << endl;
    money = 0;
}