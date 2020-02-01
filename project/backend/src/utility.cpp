#include "utility.hpp"

void Action::Invoke() {
    fun();
}

Action::Action(
    void (*fun)()
    ) : fun(fun)
{}

// main update function
void update() {

}
