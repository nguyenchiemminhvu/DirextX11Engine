#pragma once

#include <Windows.h>

#include "D3DClass.h"

#include "Shaders.h"
#include "Model.h"
#include "Camera.h"


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

	D3DClass	*m_D3D;

	Shaders		*m_shaders;
	Camera		*m_camera;

	Model		*m_model;

};
