#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int x,a,p;
    cout << "Enter initial positive integer number: ";
    cin >> x;
    cout << "Enter positive integer a: ";
    cin >> a;
    cout << "Enter positive integer p: ";
    cin >> p;
    for(int i=1; i<=12; i++)
    {
        x=(a*x % p);
        cout << x << endl;
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}