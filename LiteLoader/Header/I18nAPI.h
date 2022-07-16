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

    enum class Pattern : char
    {
        None,
        SrcToTrans,      ///< Source text - Translation
        IdToTrans,       ///< Source ID - Translation
        NestedIdToTrans, ///< Nested Source ID - Translation
    };

    enum class Type : char
    {
        None,
        Simple,
        Heavy,
        Custom,
    };

protected:
    LangData langData;
    LangData defaultLangData;
    std::string defaultLocaleName = "en_US";
    Pattern pattern;
    Type type = Type::None;

public:
    virtual ~I18N() {
    }

    /**
     * @brief Get the translation of the specified key.
     *
     * @param  key          The language key
     * @param  localeName     The language code like en_US,zh_CN("" => this->defaultLocaleName)
     * @return std::string  The translation
     * @see    I18N::defaultLocaleName
     */
    virtual std::string get(const std::string& key, const std::string& localeName = "");

    /**
     * @breif Get the type of the i18n object.
     *
     * @return  The type of the i18n object
     */
    virtual Type getType() = 0;

    /**
     * @brief Get the pattern of the i18n object.
     * 
     * @return  The pattern of the i18n object
     */
    virtual Pattern getPattern();

    /**
     * @brief Get the default language code of the i18n object.
     * 
     * @return  The default language code of the i18n object
     */
    virtual std::string getDefaultLocaleName();

    /**
     * @brief Clone a new i18n object.
     * 
     * @return  The new i18n object.
     */
    virtual I18N* clone();

    static const constexpr char* POD_KEY = "ll_plugin_i18n"; ///< PluginOwnData key
};

/**
 * @brief Lightweight and simple I18N support.
 *
 * @note  Use this, all the language data will be saved in a single JSON file.
 *        So it is not recommended to use it in large plugins(that have a lot of strings to translate)
 */
class SimpleI18N : public I18N {

public:
    std::string filePath;

    LIAPI void load(const std::string& fileName);
    LIAPI void save();

    SimpleI18N() {
        this->type = Type::Simple;
    }
    /**
     * @brief Construct a SimpleI18N object.
     *
     * @param filePath         The path to the i18n file(json)
     * @param pattern          The i18n file pattern(Simple I18N supports `Mode::SrcToTrans` and `Mode::IdToTrans`
     * @param defaultLocaleName  The default language code(if empty, default the system default language)
     * @param defaultLangData  The default translation data
     */
    SimpleI18N(const std::string& filePath, Pattern pattern, const std::string& defaultLocaleName = "",
               const LangData& defaultLangData = {})
    : filePath(filePath) {
        this->type = Type::Simple;
        this->pattern = pattern;
        this->defaultLangData = defaultLangData;
        if (defaultLocaleName.empty()) {
            this->defaultLocaleName = GetSystemLocaleName();
        } else {
            this->defaultLocaleName = defaultLocaleName;
        }
        load(filePath);
    }
    /// Copy constructor
    SimpleI18N(const SimpleI18N& other) {
        *this = other;
    }
    ~SimpleI18N() = default;

    LIAPI Type getType();
};

class HeavyI18N : public I18N {

public:
    std::string dirPath;

    LIAPI void load(const std::string& dirName);
    LIAPI void save();

    HeavyI18N() {
        this->type = Type::Heavy;
    }
    /**
     * @brief Construct a heavy I18N object.
     *
     * @param dirPath          The path to the i18n dir
     * @param pattern          The i18n file pattern
     * @param defaultLocaleName  The default language code
     * @param defaultLangData  The default translation data
     */
    HeavyI18N(const std::string& dirPath, Pattern pattern, const std::string& defaultLocaleName = "",
              const LangData& defaultLangData = {})
    : dirPath(dirPath) {
        this->type = Type::Heavy;
        this->pattern = pattern;
        this->defaultLangData = defaultLangData;
        if (defaultLocaleName.empty()) {
            this->defaultLocaleName = GetSystemLocaleName();
        } else {
            this->defaultLocaleName = defaultLocaleName;
        }
        load(dirPath);
    }
    /// Copy constructor
    HeavyI18N(const HeavyI18N& other) {
        *this = other;
    }
    ~HeavyI18N() {
    }

    LIAPI Type getType();
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
        if (i18n.getPattern() != I18N::Pattern::SrcToTrans && realFormatStr == formatStr) { // If failed
            return formatStr;
        }
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
inline std::string trlImpl(HMODULE hPlugin, const std::string& localeName, const S& formatStr, const Args&... args) {
    std::string realFormatStr = formatStr;
    if (PluginOwnData::hasImpl(hPlugin, I18N::POD_KEY)) {
        auto& i18n = PluginOwnData::getImpl<I18N>(hPlugin, I18N::POD_KEY);
        realFormatStr = i18n.get(formatStr, localeName);
        if (i18n.getPattern() != I18N::Pattern::SrcToTrans && realFormatStr == formatStr) { // If failed
            return formatStr;
        }
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

LIAPI I18N* loadImpl(HMODULE hPlugin, const std::string& path, const std::string& defaultLocaleName,
                     const I18N::LangData& defaultLangData);

LIAPI I18N* loadImpl(HMODULE hPlugin, const std::string& path, I18N::Pattern pattern, const std::string& defaultLocaleName,
                     const I18N::LangData& defaultLangData);

LIAPI I18N* loadFromImpl(HMODULE hPlugin, HMODULE hTarget);

/**
 * @brief Load translation from a file or a directory.
 *
 * @param  path             The path to the i18n file/dir (dir path must ends with '/' or '\\')
 * @param  pattern          The pattern of the i18n
 * @param  defaultLocaleName  The default language code("" => system default locale)
 * @param  defaultLangData  The default translation data
 * @return I18N*            The pointer to the I18N object in PluginOwnData, null if failed
 * @note   Directory => HeavyI18N, Single File => SimpleI18N
 * @note   SimpleI18N only supports a single file and Pattern::SrcToTrans or Pattern::IdToTrans
 * @par Example
 * 1. SimpleI18N with Pattern::SrcToTrans
 * @code
 * // In the file plugins/xxx/language.json
 * // {"zh_CN": {"text": "文本"}, "en_US": {"text", "text"}}
 * Translation::load("plugins/xxx/language.json", I18N::Pattern::SrcToTrans);
 * tr("text");
 * @endcode
 * 
 * 2. SimpleI18N with Pattern::IdToTrans
 * @code
 * // In the file plugins/xxx/language.json
 * // {"zh_CN": {"a.b.c.id.text": "文本"}, "en_US": {"a.b.c.id.text", "text"}}
 * Translation::load("plugins/xxx/language.json", I18N::Pattern::SrcToTrans);
 * tr("a.b.c.d.id.text");
 * @endcode
 * 
 * 3. 
 */
inline I18N* load(const std::string& path, I18N::Pattern pattern, const std::string& defaultLocaleName = "",
                  const I18N::LangData& defaultLangData = {}) {
    return loadImpl(GetCurrentModule(), path, pattern, defaultLocaleName, defaultLangData);
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
 * @param  hPlugin               The plugin handle(nullptr -> GetCurrentModule())
 * @return std::optional<I18N&>  The I18N object(ref)
 */
inline I18N* getI18N(HMODULE hPlugin = nullptr) {
    auto handle = (hPlugin == nullptr ? GetCurrentModule() : hPlugin);
    if (handle && PluginOwnData::hasImpl(handle, I18N::POD_KEY)) {
        return &PluginOwnData::getImpl<I18N>(handle, I18N::POD_KEY);
    }
    return nullptr;
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
 * @param  localeName     The language code like en_US
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
 * @param  localeName     The language code like en_US
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
