#include <iostream>

using namespace std;

class Car{
    public:
    int speed;
};

int main(){
    int Car::*pSpeed = &Car::speed;
    Car c1;
    c1.speed = 0;
    cout << "Speed: " << c1.speed << endl;
    c1.*pSpeed = 4; //Pointer to member
    cout << "Speed: " << c1.speed << endl;
    return 0;
}