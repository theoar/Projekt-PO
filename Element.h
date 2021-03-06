//
//  Element.h
//  SDL DOMO
//
//

#ifndef __SDL_DOMO__Element__
#define __SDL_DOMO__Element__

#include <SDL2/SDL.h>
#include <vector>
#include "Point.h"
#include "Color.h"
#include "SDL_Main.h"
#include "Surface.h"

class Main_Sdl;
class Element
{
protected:
    int high, width;
    bool highlighted = false;
    Point position;
    Color color;
    std::vector<Element*> Elements;
	Surface *surface;
    virtual void mouseClick(Main_Sdl& ) {}
    virtual void highlight(){};
    virtual void unHighlight(){};
    bool isPointInside(Point point) const;
    //Klasa abstrakcyjna
    Element(Point positoin, int width = 100, int high = 100);
    Element( int X = 0,  int  Y = 0, int width = 100, int high = 100);
public:
    virtual void Draw(SDL_Renderer*) ;
    bool HandleMouseClick(Point position, Main_Sdl &sdl);
    bool HandleMouseUp(Point position, bool &Processed);
	bool PutOnTop(Element*);
	void SetSurface(Surface);
    virtual ~Element();
	
};

#endif /* defined(__SDL_DOMO__Element__) */
