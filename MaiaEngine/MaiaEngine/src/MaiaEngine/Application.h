#pragma once

#include "Core.h"
#include "Logger.h"
#include <memory>


namespace MaiaEngine 
{
	class ME_API Application
	{
	public:
		Application();
		~Application();

		void Run();

	private:
		Logger *m_logger;
	};
}