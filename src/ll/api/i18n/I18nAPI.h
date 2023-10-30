#pragma once
#include "ll/api/LLAPI.h"
#include "ll/api/base/Concepts.h"
#include "ll/api/base/Global.h"
#include "ll/api/utils/FileHelper.h"
#include "ll/api/utils/StringUtils.h"

#include <string>

#include "fmt/core.h"
#include "fmt/os.h"
#include "nlohmann/json.hpp"

namespace ll::i18n {

class I18N {

public:
    using SubLangData = std::unordered_map<std::string, std::string>;
    using LangData    = std::map<std::string, SubLangData>;

    enum class Type : schar {
        None,
        SingleFile,
        MultiFile,
        Custom,
    };

    LangData    mLangData{};
    LangData    mDefaultLangData{};
    std::string mDefaultLocaleName = "en_US";

    virtual ~I18N() = default;

    /**
     * @brief Get the translation of the specified key.
     *
     * @param  key          The language key
     * @param  localeName   The language code like en_US,zh_CN("" => this->mDefaultLocaleName)
     * @return std::string  The translation
     * @see    I18N::mDefaultLocaleName
     */
    LLAPI std::string get(std::string const& key, std::string localeName = "");

    /**
     * @brief Get the type of the i18n object.
     *
     * @return  The type of the i18n object
     */
    LLAPI virtual Type getType() = 0;

    /**
     * @brief Clone a new i18n object.
     *
     * @return  The new i18n object.
     */
    LLAPI virtual std::unique_ptr<I18N> clone() = 0;

    static std::unique_ptr<I18N> INSTANCE;
};

class SingleFileI18N : public I18N {

public:
    std::string mFilePath;

    LLAPI void load(std::string const& fileName);
    LLAPI void save();

    SingleFileI18N() = default;
    /**
     * @brief Construct a SingleFileI18N object.
     *
     * @param filePath         The path to the i18n file(json)
     * @param defaultLocaleName  The default locale name
     * @param defaultLangData  The default translation data
     */
    explicit SingleFileI18N(
        std::string const& filePath,
        std::string const& defaultLocaleName = "",
        LangData const&    defaultLangData   = {}
    )
    : mFilePath(filePath) {
        this->mDefaultLangData   = defaultLangData;
        this->mDefaultLocaleName = defaultLocaleName;
        load(filePath);
    }
    /// Copy constructor
    SingleFileI18N(SingleFileI18N const& other) = default;
    ~SingleFileI18N() override                  = default;

    LLAPI Type getType() override;

    LLAPI virtual std::unique_ptr<I18N> clone() override;
};

class MultiFileI18N : public I18N {

public:
    std::string mDirPath;

    LLAPI void load(std::string const& dirPath);
    LLAPI void save(bool nested = false);

    MultiFileI18N() = default;
    /**
     * @brief Construct a heavy I18N object.
     *
     * @param dirPath          The path to the i18n dir
     * @param defaultLocaleName  The default locale name
     * @param defaultLangData  The default translation data
     */
    explicit MultiFileI18N(
        std::string const& dirPath,
        std::string const& defaultLocaleName = "",
        LangData const&    defaultLangData   = {}
    )
    : mDirPath(dirPath) {
        this->mDefaultLangData   = defaultLangData;
        this->mDefaultLocaleName = defaultLocaleName;
        load(dirPath);
    }
    /// Copy constructor
    MultiFileI18N(MultiFileI18N const& other) = default;
    ~MultiFileI18N() override                 = default;

    LLAPI Type getType() override;

    LLAPI virtual std::unique_ptr<I18N> clone() override;
};

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
    auto res = I18N::INSTANCE->get(formatStr);
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
    auto res = I18N::INSTANCE->get(formatStr, localeName);
    if constexpr (sizeof...(args) != 0) { return fmt::format(fmt::runtime(res), args...); }
    return res;
}

} // namespace ll::i18n

namespace ll::i18n_literals {

inline std::string operator""_tr(char const* x, size_t len) {
    return ll::i18n::tr(std::string{x, len});
}

} // namespace ll::i18n_literals