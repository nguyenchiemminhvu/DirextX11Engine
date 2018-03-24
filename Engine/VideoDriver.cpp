#pragma once

#include "VideoDriver.h"
#include "MyUtilities.h"


VideoDriver::VideoDriver()
{
	m_D3D = NULL;
}


VideoDriver::VideoDriver(const VideoDriver& other)
{
}


VideoDriver::~VideoDriver()
{
	Shutdown();
}


bool VideoDriver::Initialize(int screenWidth, int screenHeight, HWND hwnd)
{
	m_D3D = new D3DClass();
	if (!m_D3D || !m_D3D->Initialize(hwnd, screenWidth, screenHeight, SCREEN_NEAR, SCREEN_DEPTH, FULL_SCREEN, VSYNC_ENABLED))
	{
		return false;
	}

	return true;
}


void VideoDriver::Shutdown()
{
	SAFE_DELETE(m_D3D);
}


bool VideoDriver::Frame()
{
	if (!Render())
	{
		return false;
	}

	return true;
}


bool VideoDriver::Render()
{
	m_D3D->BeginScene(0.2, 0.3, 0.5, 1.0);
	m_D3D->EndScene();

	return true;
}