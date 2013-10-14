#include "AllegroDisp.h"

AllegroDisp::AllegroDisp(int width /* = 640*/, int height /* = 480 */)
{
	disp = NULL;
	this->width = width;
	this->height = height;
}

AllegroDisp::~AllegroDisp()
{
	
}

void AllegroDisp::Init()
{
	disp = al_create_display(width,height);
}

void AllegroDisp::Shutdown()
{
	al_destroy_display(disp);
}

void AllegroDisp::Clear()
{
	al_clear_to_color(al_map_rgb(0,0,0));
}

void AllegroDisp::Update()
{
	//Clear();
	FlipBuffers();
}

void AllegroDisp::FlipBuffers()
{
	al_flip_display();
}

void AllegroDisp::onClose()
{

}