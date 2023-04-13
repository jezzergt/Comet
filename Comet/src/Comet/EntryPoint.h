#pragma once

#ifdef CM_PLATFORM_WINDOWS

// Found inside SandboxApp
extern Comet::Application* Comet::CreateApplication();

int main(int argc, char** argv)
{
	Comet::Log::Init();
	CM_CORE_WARN("Initialised Log!");
	CM_INFO("Hello!");

	auto app = Comet::CreateApplication();
	app->Run();
	delete app;
}

#endif
