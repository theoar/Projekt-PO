//
//  DragAndDropButton.cpp
//  SDL DOMO
//
//  Created by Dawid Hajda on 10.04.2015.
//  Copyright (c) 2015 Dawid Hajda. All rights reserved.
//

#include "DragAndDropButton.h"



void DragAndDropButton::mouseClick(Main_Sdl& main)
{
    SDL_GetMouseState(&startPos.x, &startPos.y);
	main.GetDesktop(0).PutOnTop(this);
    main.SetToDrag(this);
}

void DragAndDropButton::Drag(Point mousePosition)
{
    Point delta = {startPos.x - mousePosition.x, startPos.y - mousePosition.y};
    Element::position -= delta;
    startPos = mousePosition;
	color = color.GetFlatColor(FlatColor::midnight_blue);
}

void DragAndDropButton::Drop()
{
	highlight();
}
