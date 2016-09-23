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
#include "MainWindowTV.h"
#include "utils/logger.h"

MainWindowTV::MainWindowTV(int w, int h)
    : GuiMainWindowScreen(w, h)
    , width(w)
    , height(h)
    ,bgImageColor(w, h, (GX2Color){ 0, 0, 0, 0 })
{
    bgImageColor.setImageColor((GX2Color){  248, 248, 249, 255 }, 0);
    bgImageColor.setImageColor((GX2Color){  248, 248, 249, 255 }, 1);
    bgImageColor.setImageColor((GX2Color){  248, 248, 249, 255 }, 2);
    bgImageColor.setImageColor((GX2Color){  248, 248, 249, 255 }, 3);
    append(&bgImageColor);
        
    // The below code will draw a pumpkin_pie.jpg mage from
    // the /data folder when uncommented
//    GuiImageData* pieImgData = Resources::GetImageData("pumpkin_pie.jpg");
//    GuiImage* pie = new GuiImage(pieImgData);
//    pie->setPosition(-200, 50); // moves left by 200, up 50 from the center
//    append(pie);
        
    // The below code wll draw "Hello World!" as a string
    // opionally underneath the pie, if it is available
//    const char* cpName = "Hello World!";
//    GuiText* hello = new GuiText(cpName, 28, glm::vec4(0, 0, 0, 1));
//    hello->setAlignment(ALIGN_RIGHT | ALIGN_CENTER); // start from midright
//    hello->setPosition(-250, 0); // move the text left 200 from the right
//    append(hello);
}

MainWindowTV::~MainWindowTV()
{
    remove(&bgImageColor);
}

void MainWindowTV::draw(CVideo *v){
	GuiMainWindowScreen::draw(v);
	//gets called on every frame fro drawing
}


void MainWindowTV::update(GuiController * c){
    GuiMainWindowScreen::update(c);
    //CONTROLLER UPDATE!!!
}

void MainWindowTV::process(){
    GuiMainWindowScreen::process();
    //gets called on every frame
}
