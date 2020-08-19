#include "MEngine.h"

class SandBox : public MaiaEngine::Application {
public: 
	SandBox() {

	}
	~SandBox() {

	}
};

MaiaEngine::Application* MaiaEngine::GetApplication() 
{
	return new SandBox();
}