/*
    Original copyright 2018 Benjamin Vedder	benjamin@vedder.se and the VESC Tool project ( https://github.com/vedderb/vesc_tool )
    Now forked to:
    Danny Bokma github@diebie.nl

    This file is part of BMS Tool.

    DieBieMS Tool is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    DieBieMS Tool is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef PAGEMASTERSETTINGS_H
#define PAGEMASTERSETTINGS_H

#include <QWidget>
#include "bmsinterface.h"

namespace Ui {
class PageMasterSettings;
}

class PageMasterSettings : public QWidget
{
    Q_OBJECT

public:
    explicit PageMasterSettings(QWidget *parent = 0);
    ~PageMasterSettings();

    BMSInterface *bms() const;
    void setDieBieMS(BMSInterface *dieBieMS);

private:
    Ui::PageMasterSettings *ui;
    BMSInterface *mDieBieMS;
};

#endif // PAGEMASTERSETTINGS_H
