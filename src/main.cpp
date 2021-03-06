#include <stdio.h>
#include <string>
#include <stdlib.h>

#include "Engine.h"
#include "AllegroDisp.h"
#include "AllegroKbd.h"
#include "GameUpdator.h"
#include "Spaceship.h"
#include "allegro5/allegro_image.h"

#ifdef _MSC_VER
	//Allegro
	#ifdef _DEBUG
		#pragma comment(lib,"allegro-5.0.10-monolith-static-mt-debug.lib")
		#pragma comment(lib,"openal-1.14-static-mt-debug.lib")
		#pragma comment(lib,"libogg-1.2.1-static-mt-debug.lib")
		#pragma comment(lib,"libvorbis-1.3.2-static-mt-debug.lib")
		#pragma comment(lib,"libvorbisfile-1.3.2-static-mt-debug.lib")
		#pragma comment(lib,"libFLAC-1.2.1-static-mt-debug.lib")
		#pragma comment(lib,"dumb-0.9.3-static-mt-debug.lib")
		#pragma comment(lib,"gdiplus.lib")
		#pragma comment(lib,"winmm.lib")
		#pragma comment(lib,"opengl32.lib")
		#pragma comment(lib,"psapi.lib")
		#pragma comment(lib,"Shlwapi.lib")
		#pragma comment(lib,"crypt32.lib")
	#else
		#pragma comment(lib,"allegro-5.0.10-monolith-static-mt.lib")
		#pragma comment(lib,"openal-1.14-static-mt.lib")
		#pragma comment(lib,"libogg-1.2.1-static-mt.lib")
		#pragma comment(lib,"libvorbis-1.3.2-static-mt.lib")
		#pragma comment(lib,"libvorbisfile-1.3.2-static-mt.lib")
		#pragma comment(lib,"libFLAC-1.2.1-static-mt.lib")
		#pragma comment(lib,"dumb-0.9.3-static-mt.lib")
		#pragma comment(lib,"gdiplus.lib")
		#pragma comment(lib,"winmm.lib")
		#pragma comment(lib,"opengl32.lib")
		#pragma comment(lib,"psapi.lib")
		#pragma comment(lib,"Shlwapi.lib")
		#pragma comment(lib,"crypt32.lib")
	#endif
#endif


int main()
{
	al_init();
	al_init_image_addon();

	Engine* engine = new Engine();
	
	AllegroDisp* alDisp = new AllegroDisp();
	AllegroKbd* alKbd = new AllegroKbd();


	engine->setDisplay(alDisp);
	engine->setKbd(alKbd);

	alDisp->Init();
	alKbd->Init();

	GameUpdator* updt = new GameUpdator(alKbd);

	GameObject* spaceCow32 = new Spaceship(3, 2, 40, 30, 20, 20, "plane.PNG", 0);
	updt->Push(spaceCow32);

	engine->setUpdator(updt);
	engine->MainLoop();

	delete spaceCow32;
	delete updt;

	alKbd->Shutdown();
	alDisp->Shutdown();

	delete alKbd;
	delete alDisp;

	delete engine;

	return 0;
}