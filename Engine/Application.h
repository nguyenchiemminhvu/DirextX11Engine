#pragma once

#define WIN32_LEAN_AND_MEAN

#include <windows.h>

#include "InputHandler.h"
#include "VideoDriver.h"


class Application
{
public:

	Application();
	~Application();

	bool Initialize();
	void Shutdown();
	void Run();

	LRESULT CALLBACK MessageHandler(HWND, UINT, WPARAM, LPARAM);

private:

	bool Frame();
	void InitializeWindows(int&, int&);
	void ShutdownWindows();

private:

	LPCWSTR m_applicationName;
	HINSTANCE m_hinstance;
	HWND m_hwnd;

	InputHandler	*m_inputHandler;
	VideoDriver		*m_videoDriver;

private:

	Application(const Application&) = delete;
	Application& operator= (const Application&) = delete;

};

static Application* s_application = NULL;