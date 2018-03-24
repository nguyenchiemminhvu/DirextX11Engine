

class InputHandler
{
public:

	InputHandler();
	InputHandler(const InputHandler&);
	~InputHandler();

	bool Initialize();

	void KeyDown(unsigned int);
	void KeyUp(unsigned int);

	bool IsKeyDown(unsigned int);

	void OnKeyPressed(unsigned int);
	void OnKeyReleased(unsigned int);

private:

	bool m_keys[256];
};
