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
#ifndef QTWINKEYMAPPER_H
#define QTWINKEYMAPPER_H

#include "qtkeymapperbase.h"


class QtWinKeyMapper : public QtKeyMapperBase
{
    Q_OBJECT

public:
    explicit QtWinKeyMapper(QObject *parent = nullptr);

    virtual int returnQtKey(int key, int scancode=0) override;

protected:
    void populateMappingHashes() override;
    void populateCharKeyInformation() override;

};

#endif // QTWINKEYMAPPER_H
