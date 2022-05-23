#include <iostream>

class Struct1 {
private:
const int maxSize = 10;
int length = -1;
int* numbers = nullptr;

public:
Struct1 (){
    numbers = new int[maxSize];
}

int size(){
    if ( length == -1 ){
        return 0;
    }
    else {
    return length + 1;
    }
}

void push(int value) {
    if (length!= maxSize - 1) {
        length++;
        numbers[length] = value;
    }
    else {
        exit(0);
    }
}

int pop (){
    length--;
    return numbers[length];
}

void empty (){
    numbers = new int[1];
}
};

int main() { 

}