#include "Reader.h"

using namespace std;

Reader::Reader() {
    netType = "external"; 
    //external - внешняя
    //internal - внутрення
}

Reader::Reader(string netType) {
    this->netType = netType;
}

int Reader::getAccessLevel() {
    if (netType == "external") {
        return 0;
    } else {
        return 1;
    }
}