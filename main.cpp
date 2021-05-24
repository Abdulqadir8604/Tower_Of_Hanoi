#include <iostream>
#include <conio.h>

using namespace std;

void TOH(int d, char tower1, char tower2, char tower3){
    if(d==1){
        cout << "\nShift top disk from tower " << tower1 << " to tower " << tower2;
        return;
    }
    TOH (d-1, tower1, tower3, tower2);
    cout << "\nShift top disk from tower " << tower1 << " to tower " << tower2;
    TOH(d-1, tower3, tower2, tower1);
}

int main() {

    int disk;

    cout << "Enter the number of disks: ";
    cin >> disk;

    if (disk < 1){
        cout << "\n There are no disks to shift";
    }else{
        cout << "\n There are " << disk << " disks in tower 1\n";
    }
    TOH(disk, 'A', 'B', 'C');
    cout << "\n\n" << disk << " disks in tower 1 are shifted to tower 2";

    getch();
    return 0;
}
