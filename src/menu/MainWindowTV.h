/****************************************************************************
 * Copyright (C) 2015 Dimok
 * Modified by Maschell, 2016 for GX2_GUI_Template
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 ****************************************************************************/
#ifndef _MAIN_WINDOW_TV_H_
#define _MAIN_WINDOW_TV_H_

#include "gui/Gui.h"
#include "gui/GuiMainWindowScreen.h"

class CVideo;

class MainWindowTV : public GuiMainWindowScreen{
public:
    MainWindowTV(int w, int h);
    virtual ~MainWindowTV();
private:
    int width, height;

    GuiImage bgImageColor;

    void draw(CVideo *v);
    void update(GuiController * c);
    void process();
};

#endif //_MAIN_WINDOW_TV_H_
