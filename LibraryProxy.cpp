#include "LibraryProxy.h"

using namespace std;

LibraryProxy::LibraryProxy () {
    articles = {"article1", "article2", "article3"};
}

void LibraryProxy::downloadArticle(string articleName) {
    for (int i = 0; i < articles.size(); i++) {
        if (articles[i] == articleName) {
            cout << "Article is downloading" << endl;
            return;
        }
    }

    cout << "No article with this name";
}

void LibraryProxy::readArticle(string articleName) {
        for (int i = 0; i < articles.size(); i++) {
        if (articles[i] == articleName) {
            cout << "Opening article for reading" << endl;
            return;
        }
    }

    cout << "No article with this name";
}