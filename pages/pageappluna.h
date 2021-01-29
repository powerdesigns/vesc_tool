/*
    Copyright 2020 - 2020 Marcos Chaparro	mchaparro@powerdesigns.ca

    This file is part of VESC Tool.

    VESC Tool is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    VESC Tool is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
    */

#ifndef PAGEAPPLUNA_H
#define PAGEAPPLUNA_H

#include <QWidget>
#include "vescinterface.h"

namespace Ui {
class PageAppLuna;
}

class PageAppLuna : public QWidget
{
    Q_OBJECT

public:
    explicit PageAppLuna(QWidget *parent = nullptr);
    ~PageAppLuna();

    VescInterface *vesc() const;
    void setVesc(VescInterface *vesc);
    void reloadParams();

private:
    Ui::PageAppLuna *ui;
    VescInterface *mVesc;

};

#endif // PAGEAPPLUNA_H
