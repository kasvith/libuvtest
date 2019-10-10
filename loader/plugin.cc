#include <stdio.h>
#include <iostream>
#include "plugin.h"

using namespace std;

void mfp_register(const char *name) {
    cout << "Registered plugin " << name << endl;
    cout << "Done" << endl;
}