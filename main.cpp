/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Kevin
 *
 * Created on April 12, 2017, 8:34 PM
 */
#include <stdlib.h>
#include <string>
#include "ZDatabase.hpp";
using namespace std;

int main() {
    string g = "zipcodes.txt"; //The full file – after you have everything
    // working
    string h = "ziptestfile.txt"; // for testing purposes

    ZDatabase *zdb = new ZDatabase(h, false);
    ZDatabase *zdb2 = new ZDatabase(h,true);

    return 0;
}