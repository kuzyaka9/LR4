/*!
    \file 
    \brief Заголовочный файл с описанием класса для работы с библиотекой с ограничением прав доступа
*/


#ifndef LIBRARYPROXY_H
#define LIBRARYPROXY_H

#include <bits/stdc++.h>

using namespace std;


/*!
    \brief Класс библиотеки с ограничением прав доступа
    \param articles имена статей
*/
class LibraryProxy {
private:
    vector<string> articles;
public:

/*!
    \brief Конструктор
*/
    LibraryProxy();

/*!
    \brief Метод для скачивания статьи
    \param name Имя статьи
*/
    void downloadArticle(string );

/*!
    \brief Метод для чтения статьи
    \param name Имя статьиы
*/
    void readArticle(string );
};



#endif