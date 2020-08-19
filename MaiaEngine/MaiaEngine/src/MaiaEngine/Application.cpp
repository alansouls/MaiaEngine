#pragma once

#include "Application.h"
#include <iostream>

namespace MaiaEngine
{

	Application::Application() : m_logger(new Logger())
	{
		m_logger->Info("Application Has Been Constructed");
	}

	Application::~Application()
	{
		m_logger->Info("Application Has Been Destroyed");
	}

	void Application::Run()
	{
		m_logger->Info("Application Has Started");
		while (true) {
			int a;
			m_logger->Info("Type anything to step a frame or -1 to exit application");
			std::cin >> a;
			if (a == -1)
				break;
			m_logger->Info("This is a test log for DEBUG");
			m_logger->Warning("This is a test log for WARNING");
			m_logger->Error("This is a test log for ERROR");
		}
		m_logger->Info("Application Is Ending");
	}
};