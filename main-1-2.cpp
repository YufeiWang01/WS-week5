#include <iostream>
#include "Musician.h"
#include "Orchestra.h"
using namespace std;

int main(){
    Orchestra orch(3);

    Musician m1("Violin", 5);
    Musician m2("Piano", 3);
    Musician m3("Flute", 2);
    Musician m4("Cello", 7);

    cout << orch.add_musician(m1) << endl;
    cout << orch.add_musician(m2) << endl;
    cout << orch.add_musician(m3) << endl;
    cout << orch.add_musician(m4) << endl;

    cout << orch.get_current_number_of_members() << endl;
    cout << orch.has_instrument("Piano") << endl;
    cout << orch.has_instrument("Drums") << endl;

    Musician* members = orch.get_members();
    for (int i = 0; i < orch.get_current_number_of_members(); i++){
        cout << members[i].get_instrument() << " "
             << members[i].get_experience() << endl;
    }

    return 0;
}