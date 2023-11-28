
#include <iostream>
using namespace std;
// [타입][이름];

//char :1
//short :2
//int :4
// __int64(long long) :8

int choice;


int main()
{
    choice = 1;
    if (choice == 0) 
        cout << "가위를 냈습니다" << endl;
        
    else if (choice == 1)
       cout << "바위를 냈습니다" << endl;
    else if (choice == 2)
        cout << "보를 냈습니다" << endl;
    else
        cout << "뭘 낸겁니까 ? " << endl;
    
    switch (choice)
    {
      case 0:
          cout << "가위를 냈습니다" << endl;
        break;
      case 1:
          cout << "바위를 냈습니다" << endl;
          break;
      case 2:
          cout << "보를 냈습니다" << endl;
          break;
      default:
          cout << "뭘 낸겁니까 ? " << endl;
          break;
    }
}


