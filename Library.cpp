#include "Library.h"

using namespace std;

void Library::downloadArticle(Reader &r, string articleName) {
    if (r.getAccessLevel() == 1) {
        library.downloadArticle(articleName);
    } else {
        cout << "Access denied" << endl;
    }
}

void Library::readArticle(Reader &r, string articleName) {
    library.readArticle(articleName);
}