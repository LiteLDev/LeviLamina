#pragma once
#include <Utils/PluginOwnData.h>
#include <Utils/FileHelper.h>
#include <LoggerAPI.h>
#include <LLAPI.h>
#include <Nlohmann/json.hpp>
#include <string>
#include <Global.h>

// For internationalization

namespace Translation
{
	LIAPI bool loadImpl(HMODULE hPlugin, const std::string& filePath);
	bool load(const std::string& filePath)
	{
		return loadImpl(GetCurrentModule(), filePath);
	}
};
