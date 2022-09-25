#include <string>
#include "llapi/Global.h"
#include "llapi/LoggerAPI.h"
#include "llapi/ScheduleAPI.h"
#include "liteloader/LiteLoader.h"

using ll::logger;

LIAPI void OutputEventError(const std::string& errorMsg, const std::string& eventName, const std::string& pluginName) {
    logger.error("Please upgrade the plugin <{}>, or it will not work properly!!!", pluginName);
}

namespace Schedule {
LIAPI ScheduleTask delay(std::function<void(void)> task, unsigned long long tickDelay) {
    return delay(task, tickDelay, nullptr);
}
LIAPI ScheduleTask repeat(std::function<void(void)> task, unsigned long long tickInterval, int maxCount = -1) {
    return repeat(task, tickInterval, maxCount, nullptr);
}
LIAPI ScheduleTask delayRepeat(std::function<void(void)> task, unsigned long long tickDelay, unsigned long long tickInterval, int maxCount = -1) {
    return delayRepeat(task, tickDelay, tickInterval, maxCount, nullptr);
}
LIAPI ScheduleTask nextTick(std::function<void(void)> task) {
    return nextTick(task, nullptr);
}
} // namespace Schedule

LIAPI std::wstring ANSI2Unicode(const std::string& str) {
    std::wstring ret;
    std::mbstate_t state = {};
    const char* src = str.data();
    size_t len = std::mbsrtowcs(nullptr, &src, 0, &state);
    if (static_cast<size_t>(-1) != len) {
        std::unique_ptr<wchar_t[]> buff(new wchar_t[len + 1]);
        len = std::mbsrtowcs(buff.get(), &src, len, &state);
        if (static_cast<size_t>(-1) != len) {
            ret.assign(buff.get(), len);
        }
    }
    return ret;
}

class I18N {

public:
    using SubLangData = std::unordered_map<std::string, std::string>;
    using LangData = std::map<std::string, SubLangData>;

    HMODULE curModule = nullptr;
    std::string filePath;
    LangData langData;
    LangData defaultLangData;
    std::string defaultLangCode = "en_US";
    LIAPI std::string get(const std::string& key, const std::string& langCode = "");
};

std::string I18N::get(const std::string& key, const std::string& langCode) {
    auto& langc = (langCode.empty() ? defaultLangCode : langCode);
    auto langType = langc.substr(0, 2);
    if (langData.count(langc)) {
        auto& lang = langData[langc];
        if (lang.count(key))
            return lang[key];
        // Search for the similar language in langData
        for (auto& [lc, ld] : langData) {
            if (lc.length() < 2)
                continue;
            if (lc.substr(0, 2) == langType) {
                if (ld.count(key)) {
                    return ld[key];
                }
            }
        }
    }
    // If not found, try falling back to the default language data
    if (defaultLangData.count(langc)) {
        if (defaultLangData[langc].count(key))
            return defaultLangData[langc][key]; // Fall back
    }
    // Search for the similar language
    for (auto& [lc, ld] : defaultLangData) {
        if (lc.substr(0, 2) == langType) {
            if (lc.length() < 2)
                continue;
            if (ld.count(key)) {
                return ld[key];
            }
        }
    }
    // Finally, not found, return the key
    return key;
}

namespace Translation {
    
LIAPI I18N* loadImpl(HMODULE hPlugin, const std::string& path, const std::string& defaultLocaleName,
                   const I18N::LangData& defaultLangData) {
    try {
        I18N* res = new I18N;
        res->curModule = hPlugin;
        res->filePath = path;
        res->defaultLangCode = defaultLocaleName;
        res->defaultLangData = defaultLangData;
    } catch (const std::exception& e) {
        logger.error("Fail to load translation file <{}> !", path);
        logger.error("- {}", TextEncoding::toUTF8(e.what()));
    } catch (...) { logger.error("Fail to load translation file <{}> !", path); }
    return nullptr;
}

} // namespace Translation