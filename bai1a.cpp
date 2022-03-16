#include <iostream>
using namespace std; 
 
int main()
{
    int thang;
 
    cout << "Thang: ";
    cin >> thang;
 
    switch(thang) {
        case 1: 
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "Thang " << thang  << " co 31 ngày" << endl;
            break;
        case 2: 
            cout << "Thang " << thang  << " co 28 hoac 29 ngày" << endl;
            break;
        case 4: 
        case 6: 
        case 9:
        case 11: 
             cout << "Thang " << thang  << " co 30 ngày" << endl;
            break;
        default: 
            cout << "Thang khong hop le" << endl;
    }
    return 0;
}