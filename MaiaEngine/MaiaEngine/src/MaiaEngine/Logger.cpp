#include "Logger.h"

#include <iostream>
#include <future>
#include <ctime>
#include <sstream>
#include <iomanip>

namespace MaiaEngine {
	Logger::Logger() :
		m_infoPreffix("INFO"), m_debugPreffix("DEBUG"), m_warningPreffix("WARNING"), m_errorPreffix("ERROR")
	{
	}

	Logger::~Logger()
	{
	}

	void Logger::PrintText(const std::string& text)
	{
		std::cout << text << std::endl;
	}

	std::string Logger::GetLogText(const std::string& text) const
	{
		//TODO: INSERT CURRENT TIME IN STRING
		return  " " + text;
	}

	void Logger::Info(const std::string& text) const
	{
		auto logStr = m_infoPreffix + GetLogText(text);
		std::async (&PrintText, logStr);
	}

	void Logger::Debug(const std::string& text) const
	{
		auto logStr = m_debugPreffix + GetLogText(text);
		std::async(&PrintText, logStr);
	}

	void Logger::Warning(const std::string& text) const
	{
		auto logStr = m_warningPreffix + GetLogText(text);
		std::async(&PrintText, logStr);
	}

	void Logger::Error(const std::string& text) const
	{
		auto logStr = m_errorPreffix + GetLogText(text);
		std::async(&PrintText, logStr);
	}
}
