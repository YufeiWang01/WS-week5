#include "Orchestra.h"

Orchestra::Orchestra(){
    max_size = 0;
    current_count = 0;
    members = nullptr;
}

Orchestra::Orchestra(int size){
    max_size = size;
    current_count = 0;
    if (size > 0){
        members = new Musician[size];
    } else {
        members = nullptr;
    }
}

int Orchestra::get_current_number_of_members(){
    return current_count;
}

bool Orchestra::has_instrument(std::string instrument){
    for (int i = 0; i < current_count; i++) {
        if (members[i].get_instrument() == instrument){
            return true;
        }
    }
    return false;
}

Musician* Orchestra::get_members(){
    return members;
}

bool Orchestra::add_musician(Musician new_musician){
    if (current_count < max_size){
        members[current_count] = new_musician;
        current_count++;
        return true;
    }
    return false;
}

Orchestra::~Orchestra(){
    delete[] members;
}