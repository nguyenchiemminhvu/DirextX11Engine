////////////////////////////////////////////////////////////////////////////////
// Filename: main.cpp
////////////////////////////////////////////////////////////////////////////////
#include "Application.h"
#include "MyUtilities.h"


int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR pScmdline, int iCmdshow)
{
	Application* app;
	
	
	// Create the system object.
	app = new Application();
	if(!app)
	{
		return -1;
	}

	// Initialize and run the system object.
	if(app->Initialize())
	{
		app->Run();
	}

	// Shutdown and release the system object.
	app->Shutdown();
	SAFE_DELETE(app);

	return 0;
}