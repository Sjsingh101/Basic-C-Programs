#include <iostream>
#include <ctime>

using namespace std;

int main(int count, char* args[])
{
    time_t t = time(0);
    cout << ctime(&t) << endl;

}
