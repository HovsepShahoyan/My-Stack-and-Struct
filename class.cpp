#include <iostream>

class Struct{
int _id ;
std::string _name ;
int* _value ;

public:
Struct(): _id{0} , _name{} , _value{nullptr}  
{}

Struct(int m_id , std::string m_name) : _id{m_id} , _name{m_name} , _value{nullptr}
{}

Struct() {
    _id = 0;
    _name = "";
    _value = nullptr;
}

Struct(int m_id , std::string m_name) {
    _id = m_id ;
    _name = m_name ;
    _value = nullptr;
}

Struct(const Struct& obj){
    this->_id = obj._id;
    this->_name = obj._name;
    this->_value = new int;
    *_value = *obj._value;
}

Struct(Struct& obj){
    this->_id = obj._id;
    this->_name = obj._name;
    this->_value = new int;
    *_value = *obj._value;
}

int get_id(){
    return _id;
}

void set_id(int m_id){
    _id = m_id ;
}

std::string get_name(){
    return _name;
}

void set_name(int m_name){
    _id = m_name;
}

void operator=(const Struct& obj){
    this->_id = obj._id;
    this->_name = obj._name;
    this->_value = new int;
    *_value = *obj._value;
}

};

int main(){
Struct str( 8 , "Hovsep"); 
}