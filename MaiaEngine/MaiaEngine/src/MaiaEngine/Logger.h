#pragma once

#include "Core.h"
#include <string>

namespace MaiaEngine {
	class ME_API Logger
	{
	public:
		Logger();
		~Logger();

		void Info(const std::string& text) const;
		void Debug(const std::string& text) const;
		void Warning(const std::string& text) const;
		void Error(const std::string& text) const;
	private:
		std::string GetLogText(const std::string& text) const;
		static void PrintText(const std::string& text);
		std::string m_infoPreffix;
		std::string m_debugPreffix;
		std::string m_warningPreffix;
		std::string m_errorPreffix;
	};
}

