#include <HoloEngine.h>

class ExampleLayer : public HoloEngine::Layer
{
public:
	ExampleLayer()
		: Layer("Example")
	{
	}

	void OnUpdate() override
	{
		HE_INFO("ExampleLayer::Update");
	}

	void OnEvent(HoloEngine::Event& event) override
	{
		HE_TRACE("{0}", event);
	}

};

class Sandbox : public HoloEngine::Application
{
public:
	Sandbox()
	{
		PushLayer(new ExampleLayer());
		PushOverlay(new HoloEngine::ImGuiLayer());
	}
	~Sandbox()
	{

	}
};

HoloEngine::Application* HoloEngine::CreateApplication()
{
	return new Sandbox();
}