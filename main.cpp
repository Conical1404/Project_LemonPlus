/***************************************************************************
    This file is part of Project Lemon
    Copyright (C) 2011 Zhipeng Jia

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
***************************************************************************/
/**
 * main.cpp @Project Lemon+
 * Update 2018 Dust1404
 **/

#include <QApplication>
#include "qtsingleapplication/qtsingleapplication.h"
#include "lemon.h"

int main(int argc, char *argv[])
{
#if (QT_VERSION >= QT_VERSION_CHECK(5, 6, 0))
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling); //High DPI supported
#endif

    QtSingleApplication a(argc, argv);
    
    if (a.sendMessage("")) {
        a.activateWindow();
        return 0;
    }
    
    Lemon w;
    a.setActivationWindow(&w);
    
    w.show();
    w.welcome();
    
    return a.exec();
}
