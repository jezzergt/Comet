#pragma once

#ifdef HZ_PLATFORM_WINDOWS

// Found inside SandboxApp
extern Comet::Application* Comet::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Comet::CreateApplication();
	app->Run();
	delete app;
}

#endif
