#include <iostream>
using namespace std;

int main() {
    int x = 0;

    // START state
START:
    cout << "State: START" << endl;
    x = 0;
    goto CHECK;

    // CHECK state
CHECK:
    cout << "State: CHECK | x = " << x << endl;
    if (x < 5)
        goto INCREMENT;
    else
        goto END;

    // INCREMENT state
INCREMENT:
    cout << "State: INCREMENT | x = " << x << " → x++" << endl;
    x++;
    goto CHECK;

    // DECREMENT state
DECREMENT:
    cout<< "State: DECREMENT | x = "<<x<< " → x--" <<endl;
    x--;
    goto CHECK;

    // END state
END:
    cout << "State: END | Final x = " << x << endl;

    return 0;
}
