/*!
    \file 
    \brief Заголовочный файл с описанием класса для работы с библиотекой
*/


#ifndef LIBRARY_H
#define LIBRARY_h

#include <bits/stdc++.h>
#include "LibraryProxy.h"
#include "Reader.h"

using namespace std;



/*!
    \brief Класс для работы с библиотекой через Proxy
    \param library Объект библиотеки с правами доступа
*/
class Library {
private:
    LibraryProxy library;
public:
    
/*!
    \brief Метод для скачивания статьи
    \param Reader Читатель
    \param name Имя статьи
*/
    void downloadArticle(Reader &, string );

    
/*!
    \brief Метод для чтения статьи
    \param name Имя статьиы
*/
    void readArticle(Reader &, string );
};

#endif