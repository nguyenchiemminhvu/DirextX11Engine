#pragma once

#include <Windows.h>


/////////////
// GLOBALS //
/////////////
const bool FULL_SCREEN = false;
const bool VSYNC_ENABLED = true;
const float SCREEN_DEPTH = 1000.0f;
const float SCREEN_NEAR = 0.1f;


class VideoDriver
{
public:

	VideoDriver();
	VideoDriver(const VideoDriver&);
	~VideoDriver();

	bool Initialize(int, int, HWND);
	void Shutdown();
	bool Frame();

private:

	bool Render();

private:

};
