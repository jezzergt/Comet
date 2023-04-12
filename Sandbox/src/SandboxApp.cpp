#include <Comet.h>

class SandBox : public Comet::Application
{
public:
	SandBox()
	{

	}

	~SandBox()
	{

	}
};

Comet::Application* Comet::CreateApplication()
{
	return new SandBox();
}