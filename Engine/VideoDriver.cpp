#pragma once

#include "VideoDriver.h"


VideoDriver::VideoDriver()
{
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

	return true;
}


void VideoDriver::Shutdown()
{

	return;
}


bool VideoDriver::Frame()
{

	return true;
}


bool VideoDriver::Render()
{

	return true;
}