#include <TranslationAPI.h>

using LL::logger;

namespace Translation {
    bool loadImpl(HMODULE hPlugin, const std::string &filePath) {
        try {
            auto content = ReadAllFile(filePath);
            if (!content)
                throw std::exception("Fail to open translation file!");

            PluginOwnData::setImpl<nlohmann::json>(hPlugin, TRANSLATION_DATA_NAME, nlohmann::json::parse(*content));
            PluginOwnData::setImpl<std::string>(hPlugin, TRANSLATION_DATA_FILE, filePath);
        } catch (const nlohmann::json::exception &e) {
            logger.error("Fail to load translation file <{}> !", filePath);
            logger.error("{}", e.what());
            return false;
        } catch (...) {
            logger.error("Fail to load translation file <{}> !", filePath);
            return false;
        }
        return true;
    }
}; // namespace Translation