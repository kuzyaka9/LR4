/*!
    \file
    \brief Тело программы с реализацией паттерна Proxy
*/

#include "bits/stdc++.h"
#include "Reader.h"
#include "Library.h"

using namespace std;

int main() {
    Library library;
    vector<Reader> readers(3);
    readers[0] = Reader("external");
    readers[1] = Reader("internal");

    for (int i = 0; i < readers.size(); i++) {
        cout << "Reader" << i+1 << ":" << endl;
        cout << "Download: ";
        library.downloadArticle(readers[i], "article1");
        cout << "Read: ";
        library.readArticle(readers[i], "article1");
    }
}
