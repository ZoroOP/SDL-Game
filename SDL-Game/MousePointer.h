#pragma once
#include "SDLGameObject.h"
#include "InputHandler.h"
class MousePointer : public SDLGameObject
{
public:
	MousePointer(const LoaderParams* pParams);
	virtual void draw();
	virtual void update();
	virtual void clean();

private:

};
