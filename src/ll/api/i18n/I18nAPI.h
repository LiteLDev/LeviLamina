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
//  string tomorrow = TextEncoding::toUTF8("明天");                          // Convert MBCS string of any encoding to
//  UTF8 string string tonight = TextEncoding::convert("今天晚上", Encoding::CHINESE_GB, Encoding::UTF8);
//                                                                          // Convert from one MBCS encoding to another
//
//////////////////////////////////////////////////////

#include "ll/api/LLAPI.h"
#include "ll/api/base/Concepts.h"
#include "ll/api/base/Global.h"
#include "ll/api/utils/FileHelper.h"
#include "ll/api/utils/PluginOwnData.h"
#include "ll/api/utils/StringUtils.h"

#include <string>

#include "FMT/core.h"
#include "FMT/os.h"
#include "Nlohmann/json.hpp"

class I18nBase {

public:
    using SubLangData = std::unordered_map<std::string, std::string>;
    using LangData    = std::map<std::string, SubLangData>;

    enum class Type : schar {
        None,
        SingleFile,
        MultiFile,
        Custom,
    };

    Type        type = Type::None;
    LangData    langData;
    LangData    defaultLangData;
    std::string defaultLocaleName = "en_US";

    virtual ~I18nBase() = default;

    /**
     * @brief Get the translation of the specified key.
     *
     * @param  key          The language key
     * @param  localeName   The language code like en_US,zh_CN("" => this->defaultLocaleName)
     * @return std::string  The translation
     * @see    I18nBase::defaultLocaleName
     */
    LLAPI std::string get(std::string const& key, std::string const& localeName = "");

    /**
     * @brief Get the type of the i18n object.
     *
     * @return  The type of the i18n object
     */
    LLAPI virtual Type getType() = 0;

    /**
     * @brief Get the default language code of the i18n object.
     *
     * @return  The default language code of the i18n object
     */
    LLAPI virtual std::string getDefaultLocaleName();

    /**
     * @brief Clone a new i18n object.
     *
     * @return  The new i18n object.
     */
    LLAPI virtual I18nBase* clone();

    static const constexpr char* POD_KEY = "ll_plugin_i18n"; ///< PluginOwnData key
};


class SingleFileI18N : public I18nBase {

public:
    std::string filePath;

    LLAPI void load(std::string const& fileName);
    LLAPI void save();

    SingleFileI18N() { this->type = Type::SingleFile; }
    /**
     * @brief Construct a SingleFileI18N object.
     *
     * @param filePath         The path to the i18n file(json)
     * @param defaultLocaleName  The default language code(if empty, default the system default language)
     * @param defaultLangData  The default translation data
     */
    SingleFileI18N(
        std::string const& filePath,
        std::string const& defaultLocaleName = "",
        LangData const&    defaultLangData   = {}
    )
    : filePath(filePath) {
        this->type            = Type::SingleFile;
        this->defaultLangData = defaultLangData;
        if (defaultLocaleName.empty()) {
            this->defaultLocaleName = GetSystemLocaleName();
        } else {
            this->defaultLocaleName = defaultLocaleName;
        }
        load(filePath);
    }
    /// Copy constructor
    SingleFileI18N(SingleFileI18N const& other) { *this = other; }
    ~SingleFileI18N() = default;

    LLAPI Type getType();
};

class MultiFileI18N : public I18nBase {

public:
    std::string dirPath;

    LLAPI void load(std::string const& dirName);
    LLAPI void save(bool nested = false);

    MultiFileI18N() { this->type = Type::MultiFile; }
    /**
     * @brief Construct a heavy I18nBase object.
     *
     * @param dirPath          The path to the i18n dir
     * @param defaultLocaleName  The default language code
     * @param defaultLangData  The default translation data
     */
    MultiFileI18N(
        std::string const& dirPath,
        std::string const& defaultLocaleName = "",
        LangData const&    defaultLangData   = {}
    )
    : dirPath(dirPath) {
        this->type            = Type::MultiFile;
        this->defaultLangData = defaultLangData;
        if (defaultLocaleName.empty()) {
            this->defaultLocaleName = GetSystemLocaleName();
        } else {
            this->defaultLocaleName = defaultLocaleName;
        }
        load(dirPath);
    }
    /// Copy constructor
    MultiFileI18N(MultiFileI18N const& other) { *this = other; }
    ~MultiFileI18N() = default;

    LLAPI Type getType();
};

#ifdef UNICODE
#include "compact_enc_det/util/encodings/encodings.h"
#define UNICODE
#else
#include "compact_enc_det/util/encodings/encodings.h"
#endif

namespace Translation {

///////////////// tr Impl /////////////////
inline std::string trImpl(HMODULE hPlugin, std::string const& formatStr, std::string const& localeName = "") {
    if (PluginOwnData::hasImpl(hPlugin, I18nBase::POD_KEY)) {
        auto& i18n = PluginOwnData::getImpl<I18nBase>(hPlugin, I18nBase::POD_KEY);
        return i18n.get(formatStr, localeName);
    }
    return formatStr;
}

LLAPI I18nBase* loadI18nImpl(
    HMODULE                   hPlugin,
    std::string const&        path,
    std::string const&        defaultLocaleName,
    I18nBase::LangData const& defaultLangData
);

LLAPI I18nBase* loadFromImpl(HMODULE hPlugin, HMODULE hTarget);

/**
 * @brief Load translation from a file or dir.
 *
 * @param  path               The path to the i18n file(json) or dir
 * @param  defaultLocaleName  The default language code(if no lang code is specified, it will use this)
 * @param  defaultLangData    The default translation data
 * @return I18nBase*              The pointer to the I18nBase object in PluginOwnData, null if failed
 * @par Example
 * 1. SingleFileI18N (1)
 * @code
 * // In the file plugins/xxx/language.json:
 * // {"zh_CN": {"text": "文本"}, "en_US": {"text", "text"}}
 * Translation::load("plugins/xxx/language.json");
 * tr("text");
 * @endcode
 * 2. SingleFileI18N (2)
 * @code
 * // In the file plugins/xxx/language.json:
 * // {"zh_CN": {"a.b.c.id.text": "文本"}, "en_US": {"a.b.c.id.text", "text"}}
 * Translation::load("plugins/xxx/language.json");
 * tr("a.b.c.d.id.text");
 * @endcode
 * 3. MultiFileI18N (1)
 * @code
 * // In the file plugins/xxx/LangPack/en.json:
 * // {"text": "text"}
 * // In the file plugins/xxx/LangPack/zh_CN.json:
 * // {"text": "文本"}
 * Translation::load("plugins/xxx/LangPack/");
 * tr("text");
 * @endcode
 * 4. MultiFileI18N (2)
 * @code
 * // In the file plugins/xxx/LangPack/en.json:
 * // {"a.b.c.d.text1": "text"}
 * // In the file plugins/xxx/LangPack/zh_CN.json:
 * // {"a.b.c.d.text1": "文本"}
 * Translation::load("plugins/xxx/LangPack/");
 * tr("a.b.c.d.text1");
 * @endcode
 * 5. MultiFileI18N Nested (3)
 * @code
 * // In the file plugins/xxx/LangPack/en.json:
 * // {"a": {"b": {"c": {"d": {"text1": "text"}}}}}
 * // In the file plugins/xxx/LangPack/zh_CN.json:
 * // {"a": {"b": {"c": {"d": {"text1": "文本"}}}}}
 * Translation::load("plugins/xxx/LangPack/");
 * tr("a.b.c.d.text1");
 * @endcode
 */
inline I18nBase* load(
    std::string const&        path,
    std::string const&        defaultLocaleName = "",
    I18nBase::LangData const& defaultLangData   = {}
) {
    return loadI18nImpl(GetCurrentModule(), path, defaultLocaleName, defaultLangData);
}

/**
 * Load i18n with custom i18n type.
 *
 * @param args  The args to pass to the i18n type constructor
 * @return I18nBase*   The pointer to the I18nBase object in PluginOwnData, null if failed
 */
template <typename T, typename... Args>
inline I18nBase* load(Args&&... args) {
    try {
        I18nBase* res = new T(std::forward<Args>(args)...);
        return &PluginOwnData::setWithoutNewImpl<I18nBase>(GetCurrentModule(), I18nBase::POD_KEY, res);
    } catch (...) {}
    return nullptr;
}

/**
 * @brief Load translation from another plugin.
 *
 * @param  plugin  The plugin name.
 * @return I18nBase*   The pointer to the I18nBase object in PluginOwnData, null if failed
 */
inline I18nBase* loadFrom(std::string const& plugin) {
    if (ll::hasPlugin(plugin)) {
        auto p = ll::getPlugin(plugin);
        if (p) { return loadFromImpl(GetCurrentModule(), p->handle); }
    }
    return nullptr;
}

/**
 * @brief Get the I18nBase object of a certain plugin.
 *
 * @param  hPlugin  The plugin handle(nullptr -> GetCurrentModule())
 * @return I18nBase*    The I18nBase pointer
 */
inline I18nBase* getI18N(HMODULE hPlugin = nullptr) {
    auto handle = (hPlugin == nullptr ? GetCurrentModule() : hPlugin);
    if (handle && PluginOwnData::hasImpl(handle, I18nBase::POD_KEY)) {
        return &PluginOwnData::getImpl<I18nBase>(handle, I18nBase::POD_KEY);
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
template <ll::concepts::IsString S, typename... Args>
inline std::string tr(S const& formatStr, Args&&... args) {
    auto res = Translation::trImpl(GetCurrentModule(), formatStr);
    if constexpr (sizeof...(args) != 0) { return fmt::format(fmt::runtime(res), args...); }
    return res;
}

/**
 * @brief Translate a str to the specified language.
 *
 * @tparam S            The string type
 * @tparam Args         ...
 * @param  localeName   The language code like en_US
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
template <ll::concepts::IsString S, typename... Args>
inline std::string trl(std::string const& localeName, S const& formatStr, Args&&... args) {
    auto res = Translation::trImpl(GetCurrentModule(), formatStr, localeName);
    if constexpr (sizeof...(args) != 0) { return fmt::format(fmt::runtime(res), args...); }
    return res;
}

namespace Translation {
namespace literals {

inline std::string operator""_tr(const char* x, size_t len) {
    return Translation::trImpl(GetCurrentModule(), std::string{x, len});
}

} // namespace literals
} // namespace Translation

// For text encoding
namespace TextEncoding {
LLAPI ::Encoding getLocalEncoding();
LLAPI ::Encoding detectEncoding(std::string const& text, bool* isReliable = nullptr);

LLAPI std::string fromUnicode(std::wstring const& text, ::Encoding to = ::Encoding::UTF8);
LLAPI std::wstring toUnicode(std::string const& text, ::Encoding from = ::Encoding::UTF8);
LLAPI std::string toUTF8(std::string const& text);
LLAPI std::string toUTF8(std::string const& text, ::Encoding from);

LLAPI std::string convert(std::string const& text, ::Encoding from, ::Encoding to);
} // namespace TextEncoding
