
#include <iostream>
using namespace std;
// [타입][이름];

//char :1
//short :2
//int :4
// __int64(long long) :8

int cnt;


int main()
{
    cnt = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << "Hello World" << endl;

        if (i == 50)
            continue;
    }
}


