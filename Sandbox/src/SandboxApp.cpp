#include <HoloEngine.h>

class Sandbox : public HoloEngine::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};

HoloEngine::Application* HoloEngine::CreateApplication()
{
	return new Sandbox();
}