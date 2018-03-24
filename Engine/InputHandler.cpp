#pragma once

#include "InputHandler.h"


InputHandler::InputHandler()
{
}


InputHandler::InputHandler(const InputHandler& other)
{
}


InputHandler::~InputHandler()
{
}


bool InputHandler::Initialize()
{
	for (int i = 0; i < 256; i++)
	{
		m_keys[i] = false;
	}

	return true;
}


void InputHandler::KeyDown(unsigned int input)
{
	if (m_keys[input] == false)
		OnKeyPressed(input);
}


void InputHandler::KeyUp(unsigned int input)
{
	OnKeyReleased(input);
}


bool InputHandler::IsKeyDown(unsigned int key)
{
	return m_keys[key];
}


void InputHandler::OnKeyPressed(unsigned int input)
{
	m_keys[input] = true;
}


void InputHandler::OnKeyReleased(unsigned int input)
{
	m_keys[input] = false;
}

