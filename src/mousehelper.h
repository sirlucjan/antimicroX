/* antimicroX Gamepad to KB+M event mapper
 * Copyright (C) 2015 Travis Nickles <nickles.travis@gmail.com>
 * Copyright (C) 2020 Jagoda Górska <juliagoda.pl@protonmail>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once
#ifndef MOUSEHELPER_H
#define MOUSEHELPER_H

#include <QObject>
#include <QTimer>

class QDesktopWidget;

class MouseHelper : public QObject
{
    Q_OBJECT

public:
    explicit MouseHelper(QObject *parent = nullptr);
    QDesktopWidget* getDesktopWidget() const;
    bool springMouseMoving;
    int previousCursorLocation[2];
    int pivotPoint[2];
    QTimer mouseTimer;

public slots:
    void deleteDeskWid();
    void initDeskWid();
    
private slots:
    void resetSpringMouseMoving();

private:
    QDesktopWidget *deskWid;
};

#endif // MOUSEHELPER_H
