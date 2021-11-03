#include <TranslationAPI.h>

namespace Translation
{
	LIAPI bool loadImpl(HMODULE hPlugin, const std::string& filePath)
	{
		try
		{
			auto content = ReadAllFile(filePath);
			if (!content)
				throw "Fail to open translation file!";

			PluginOwnData::setImpl<nlohmann::json>(hPlugin, "ll_plugin_translation_system",nlohmann::json::parse(*content));
		}
		catch (const nlohmann::json::exception &e)
		{
			Logger::Error("Fail to load translation file <{}> !", filePath);
			Logger::Error("{}", e.what());
			return false;
		}
		catch (...)
		{
			Logger::Error("Fail to load translation file <{}> !", filePath);
			return false;
		}
		return true;
	}
};