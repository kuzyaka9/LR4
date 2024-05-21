/*!
    \file 
    \brief Заголовочный файл с описанием класса читателя
*/


#ifndef READER_H
#define READER_H

#include <bits/stdc++.h>

using namespace std;


/*!
    \brief Класс для работы с библиотекой через Proxy
    \param netType Уровень доступа
*/
class Reader {
private:
    string netType;

public:

/*!
    \brief Конструктор
*/
    Reader();

/*!
    \brief Конструктор с параметром
    \param netType - уровень доступа
*/
    Reader(string );

/*!
    \brief Метод для получения уровня доступа
*/
    int getAccessLevel();
};

#endif