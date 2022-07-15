#pragma once
//////////////////////////////////////////////////////
// For Internationalization
//
// [Usage - Translation]
//
//  Translation::load("plugins/xxx/lang.json");
//  ...
//  tr("There are {0} days before {1} to come back", 3, "alex");          // return translated string [std::string]
//  trc("There are {0} days before {1} to come back", 3, "alex");         // return translated string [const char*]
//
//  ** In Translation File: plugins/xxx/lang.json
//  {
//      "zh_CN": {
//          "There are {0} days before {1} to come back": "在{1}回来前还剩{0}天",
//          "...": "...",
//          "...": "..."
//      }
//  }
//
//
// [Usage - Text Encoding]
//
//  Encoding local = TextEncoding::getLocalEncoding();                      // Get local encoding
//  Encoding code = TextEncoding::detectEncoding("你好吗？");                // Detect the encoding of text
//
//  string hello = TextEncoding::fromUnicode(L"Hello");                     // Convert Unicode wstring -> MBCS string
//  wstring world = TextEncoding::toUnicode("World");                       // Convert MBCS string -> Unicode wstring
//
//  string tomorrow = TextEncoding::toUTF8("明天");                          // Convert MBCS string of any encoding to UTF8 string
//  string tonight = TextEncoding::convert("今天晚上", Encoding::CHINESE_GB, Encoding::UTF8);
//                                                                          // Convert from one MBCS encoding to another
//
//////////////////////////////////////////////////////

#include "Global.h"
#include "LLAPI.h"
#include "Utils/FileHelper.h"
#include "Utils/PluginOwnData.h"
#include "third-party/Nlohmann/json.hpp"
#include "third-party/FMT/core.h"
#include "third-party/FMT/os.h"
#include <string>
#include "Utils/StringHelper.h"

/**
 * @brief I18N API class.
 *
 */
class I18N {

public:
    using SubLangData = std::unordered_map<std::string, std::string>;
    using LangData = std::map<std::string, SubLangData>;

    HMODULE curModule = nullptr;
    std::string filePath;
    LangData langData;
    LangData defaultLangData;

    void load(const std::string& fileName);
    void loadOldLangFile(const std::string& fileName);
    void save();

    std::string defaultLangCode = "en_US";

    I18N() {
    }
    /**
     * @brief Construct a I18N object.
     *
     * @param filePath         The path to the i18n file(json)
     * @param defaultLangCode  The default language code(if no lang code is specified, it will use this)
     * @param defaultLangData  The default translation data
     * @param hModule          The plugin handler(to set PluginOwnData)
     * @note  This constructor must be defined in header
     */
    I18N(const std::string& filePath, const std::string& defaultLangCode = "en_US",
         const LangData& defaultLangData = {}, const HMODULE& hModule = nullptr)
    : filePath(filePath)
    , defaultLangCode(defaultLangCode)
    , defaultLangData(defaultLangData) {
        if (hModule)
            curModule = hModule;
        else
            curModule = GetCurrentModule();
        load(filePath);
        PluginOwnData::setImpl<I18N>(curModule, POD_KEY, *this);
    }
    /// Copy constructor
    I18N(const I18N& other) {
        *this = other;
    }

    /**
     * @brief Get the translation of the specified key.
     *
     * @param  key          The language key
     * @param  langCode     The language code like en_US,zh_CN("" => this->defaultLangCode)
     * @return std::string  The translation
     * @see    I18N::defaultLangCode
     */
    LIAPI std::string get(const std::string& key, const std::string& langCode = "");

    static const constexpr char* POD_KEY = "ll_plugin_i18n"; ///< PluginOwnData key
};

#ifdef UNICODE
#include "third-party/compact_enc_det/compact_enc_det.h"
#define UNICODE
#else
#include "third-party/compact_enc_det/compact_enc_det.h"
#endif

namespace Translation {
template <bool B, class T = void>
using enable_if_t = typename std::enable_if<B, T>::type;

///////////////// tr Impl /////////////////
template <typename S, typename... Args, Translation::enable_if_t<(fmt::v8::detail::is_string<S>::value), int> = 0>
inline std::string trImpl(HMODULE hPlugin, const S& formatStr, const Args&... args) {
    std::string realFormatStr = formatStr;
    if (PluginOwnData::hasImpl(hPlugin, I18N::POD_KEY)) {
        auto& i18n = PluginOwnData::getImpl<I18N>(hPlugin, I18N::POD_KEY);
        realFormatStr = i18n.get(formatStr);
    }
    // realFormatStr = FixCurlyBracket(realFormatStr);
    if constexpr (0 == sizeof...(args)) {
        // Avoid fmt if only one argument
        return realFormatStr;
    } else {
        return fmt::format(realFormatStr, args...);
    }
}
template <typename S, typename... Args, Translation::enable_if_t<(fmt::v8::detail::is_string<S>::value), int> = 0>
inline std::string trlImpl(HMODULE hPlugin, const std::string& langCode, const S& formatStr, const Args&... args) {
    std::string realFormatStr = formatStr;
    if (PluginOwnData::hasImpl(hPlugin, I18N::POD_KEY)) {
        auto& i18n = PluginOwnData::getImpl<I18N>(hPlugin, I18N::POD_KEY);
        realFormatStr = i18n.get(formatStr, langCode);
    }
    // realFormatStr = FixCurlyBracket(realFormatStr);
    if constexpr (0 == sizeof...(args)) {
        // Avoid fmt if only one argument
        return realFormatStr;
    } else {
        return fmt::format(realFormatStr, args...);
    }
}

///////////////// trc Impl /////////////////
template <typename S, typename... Args, Translation::enable_if_t<(fmt::v8::detail::is_string<S>::value), int> = 0>
[[deprecated("Use trImpl(...).c_str() instead")]] inline const char* trcImpl(HMODULE hPlugin, const S& formatStr,
                                                                             const Args&... args) {
    std::string res = trImpl(hPlugin, formatStr, args...);
    std::string name =
        std::string(I18N::POD_KEY) + "_translation_" + fmt::v8::detail::to_string_view<S>(formatStr).data();
    auto& str = PluginOwnData::setImpl<std::string>(hPlugin, name, res);
    return str.c_str();
}

[[deprecated]] LIAPI bool loadImpl(HMODULE hPlugin, const std::string& filePath); // For compatibility
LIAPI I18N* loadImpl(HMODULE hPlugin, const std::string& filePath, const std::string& defaultLangCode,
                     const I18N::LangData& defaultLangData);

LIAPI I18N* loadFromImpl(HMODULE hPlugin, HMODULE hTarget);

/**
 * @brief Load translation from a file.
 *
 * @param  filePath         The path to the i18n file(json)
 * @param  defaultLangCode  The default language code(if no lang code is specified, it will use this)
 * @param  defaultLangData  The default translation data
 * @return I18N*            The pointer to the I18N object in PluginOwnData, null if failed
 */
inline I18N* load(const std::string& filePath, const std::string& defaultLangCode = "en_US",
                  const I18N::LangData& defaultLangData = {}) {
    return loadImpl(GetCurrentModule(), filePath, defaultLangCode, defaultLangData);
}

/**
 * @brief Load translation from another plugin.
 *
 * @param  plugin  The plugin name.
 * @return I18N*   The pointer to the I18N object in PluginOwnData, null if failed
 */
inline I18N* loadFrom(const std::string& plugin) {
    if (LL::hasPlugin(plugin)) {
        auto p = LL::getPlugin(plugin);
        if (p)
            return loadFromImpl(GetCurrentModule(), p->handle);
    }
    return nullptr;
}

/**
 * @brief Get the I18N object of a certain plugin.
 *
 * @param  hPlugin              The plugin handle(nullptr -> GetCurrentModule())
 * @return std::optional<I18N>  The I18N object
 */
inline std::optional<I18N> getI18N(HMODULE hPlugin = nullptr) {
    auto handle = (hPlugin == nullptr ? GetCurrentModule() : hPlugin);
    if (handle && PluginOwnData::hasImpl(handle, I18N::POD_KEY)) {
        return PluginOwnData::getImpl<I18N>(handle, I18N::POD_KEY);
    }
    return std::optional<I18N>();
}

}; // namespace Translation

/**
 * @brief Translate a str.
 *
 * @tparam S            The string type
 * @tparam Args         ...
 * @param  formatStr    The str to translate and format
 * @param  args         The format arguments
 * @return std::string  The translated str
 * @see    fmt::format
 * @see    https://fmt.dev/latest/index.html
 * @par Example
 * @code
 * tr(std::string("There are {0} days before {1} to come back"), 3, "alex");
 * @endcode
 */
template <typename S, typename... Args, Translation::enable_if_t<(fmt::v8::detail::is_string<S>::value), int> = 0>
inline std::string tr(const S& formatStr, const Args&... args) {
    return Translation::trImpl(GetCurrentModule(), formatStr, args...);
}

/**
 * @brief Translate a str.
 *
 * @tparam Args         ...
 * @param  formatStr    The str to translate and format
 * @param  args         The format arguments
 * @return std::string  The translated str
 * @see    fmt::format
 * @see    https://fmt.dev/latest/index.html
 * @par Example
 * @code
 * tr("There are {0} days before {1} to come back", 3, "alex");
 * @endcode
 */
template <typename... Args>
inline std::string tr(const char* formatStr, const Args&... args) {
    return tr(std::string(formatStr), args...);
}

/**
 * @brief Translate a str(c-style str).
 *
 * @tparam S            The string type
 * @tparam Args         ...
 * @param  formatStr    The str to translate and format
 * @param  args         The format arguments
 * @return const char*  The translated str(c-style str)
 * @see    fmt::format
 * @see    https://fmt.dev/latest/index.html
 * @par Example
 * @code
 * trc(std::string("There are {0} days before {1} to come back"), 3, "alex");
 * @endcode
 */
template <typename S, typename... Args, Translation::enable_if_t<(fmt::v8::detail::is_string<S>::value), int> = 0>
inline const char* trc(const S& formatStr, const Args&... args) {
    return Translation::trcImpl(GetCurrentModule(), formatStr, args...);
}

/**
 * @brief Translate a str(c-style str).
 *
 * @tparam Args         ...
 * @param  formatStr    The str to translate and format
 * @param  args         The format arguments
 * @return const char*  The translated str(c-style str)
 * @see    fmt::format
 * @see    https://fmt.dev/latest/index.html
 * @par Example
 * @code
 * trc("There are {0} days before {1} to come back", 3, "alex");
 * @endcode
 */
template <typename... Args>
inline const char* trc(const char* formatStr, const Args&... args) {
    return trc(std::string(formatStr), args...);
}

/**
 * @brief Translate a str to the specified language.
 *
 * @tparam S            The string type
 * @tparam Args         ...
 * @param  langCode     The language code like en_US
 * @param  formatStr    The str to translate and format
 * @param  args         The format arguments
 * @return std::string  The translated str
 * @see    fmt::format
 * @see    https://fmt.dev/latest/index.html
 * @par Example
 * @code
 * trl("zh_CN", "There are {0} days before {1} to come back", 3, "alex");
 * @endcode
 */
template <typename S, typename... Args>
inline std::string trl(const std::string& langCode, const S& formatStr, const Args&... args) {
    return Translation::trlImpl(GetCurrentModule(), langCode, formatStr, args...);
}

/**
 * @brief Translate a str to the specified language.
 *
 * @tparam Args         ...
 * @param  langCode     The language code like en_US
 * @param  formatStr    The str to translate and format(c-style)
 * @param  args         The format arguments
 * @return std::string  The translated str
 * @see    fmt::format
 * @see    https://fmt.dev/latest/index.html
 * @par Example
 * @code
 * trl("zh_CN", "There are {0} days before {1} to come back", 3, "alex");
 * @endcode
 */
template <typename... Args>
inline std::string trl(const std::string& langCode, const char* formatStr, const Args&... args) {
    return trl(langCode, std::string(formatStr), args...);
}

// For text encoding
namespace TextEncoding {
LIAPI Encoding getLocalEncoding();
LIAPI Encoding detectEncoding(const std::string& text, bool* isReliable = nullptr);

LIAPI std::string fromUnicode(const std::wstring& text, Encoding to = Encoding::UTF8);
LIAPI std::wstring toUnicode(const std::string& text, Encoding from = Encoding::UTF8);
LIAPI std::string toUTF8(const std::string& text);
LIAPI std::string toUTF8(const std::string& text, Encoding from);

LIAPI std::string convert(const std::string& text, Encoding from, Encoding to);
} // namespace TextEncoding
