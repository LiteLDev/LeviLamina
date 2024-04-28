#pragma once

#include "ll/api/base/Concepts.h"
#include "ll/api/base/Containers.h"
#include "ll/api/base/FixedString.h"
#include "ll/api/io/FileUtils.h"
#include "ll/api/utils/StringUtils.h"

#include <string>

#include "fmt/chrono.h"
#include "fmt/color.h"
#include "fmt/compile.h"
#include "fmt/format.h"
#include "fmt/os.h"
#include "fmt/ranges.h"
#include "fmt/std.h"

#include "nlohmann/json.hpp"

// #define LL_I18N_COLLECT_STRINGS

namespace ll::i18n {

class I18N {

public:
    using SubLangData = UnorderedStringMap<std::string>;
    using LangData    = UnorderedStringMap<SubLangData>;

    enum class Type : schar {
        None,
        SingleFile,
        MultiFile,
        Custom,
    };

    LangData    mLangData{};
    LangData    mDefaultLangData{};
    std::string mDefaultLocaleName;

    virtual ~I18N() = default;

    /**
     * @brief Get the translation of the specified key.
     *
     * @param  key          The language key
     * @param  localeName   The language code like en_US,zh_CN({} => this->mDefaultLocaleName)
     * @return std::string  The translation
     * @see    I18N::mDefaultLocaleName
     */
    LLNDAPI std::string_view get(std::string_view key, std::string_view localeName = {});

    /**
     * @brief Get the type of the i18n object.
     *
     * @return  The type of the i18n object
     */
    LLNDAPI virtual Type getType() const = 0;
};

class SingleFileI18N : public I18N {

public:
    std::filesystem::path mFilePath;

    LLAPI void load(std::filesystem::path const& filePath);
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
        std::filesystem::path const& filePath,
        std::string                  defaultLocaleName = {},
        LangData                     defaultLangData   = {}
    ) {
        this->mDefaultLangData   = std::move(defaultLangData);
        this->mDefaultLocaleName = std::move(defaultLocaleName);
        load(filePath);
    }
    /// Copy constructor
    SingleFileI18N(SingleFileI18N const& other) = default;
    ~SingleFileI18N() override                  = default;

    LLNDAPI Type getType() const override;
};

class MultiFileI18N : public I18N {

public:
    std::filesystem::path mDirPath;

    LLAPI void load(std::filesystem::path const& dirPath);
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
        std::filesystem::path const& dirPath,
        std::string                  defaultLocaleName = {},
        LangData                     defaultLangData   = {}
    ) {
        this->mDefaultLangData   = std::move(defaultLangData);
        this->mDefaultLocaleName = std::move(defaultLocaleName);
        load(dirPath);
    }
    /// Copy constructor
    MultiFileI18N(MultiFileI18N const& other) = default;
    ~MultiFileI18N() override                 = default;

    LLNDAPI Type getType() const override;
};

[[nodiscard]] inline std::unique_ptr<I18N>& getInstance() {
    static std::unique_ptr<I18N> instance;
    return instance;
}

inline void load(std::filesystem::path const& path) {
    try {
        if (std::filesystem::is_directory(path)) {
            getInstance() = std::make_unique<MultiFileI18N>(path);
        } else {
            getInstance() = std::make_unique<SingleFileI18N>(path);
        }
        return;
    } catch (...) {}
    getInstance() = nullptr;
}
} // namespace ll::i18n

#ifdef LL_I18N_COLLECT_STRINGS
#include "ll/api/reflection/TypeName.h"

namespace ll::i18n_literals {
namespace detail {
template <FixedString str>
struct TrString {
    static inline int output = [] {
        fmt::print("\"{0}\": \"{0}\",\n", (std::string_view)str);
        return 0;
    }();
};
} // namespace detail
} // namespace ll::i18n_literals
#endif
namespace ll::i18n_literals {
template <FixedString Fmt>
[[nodiscard]] constexpr auto operator""_tr() {
    return [=]<class... Args>(Args&&... args) {
#ifdef LL_I18N_COLLECT_STRINGS
        static detail::TrString<Fmt> e{};
#endif
        [[maybe_unused]] static constexpr auto checker = fmt::format_string<Args...>(std::string_view{Fmt});
        return fmt::vformat(::ll::i18n::getInstance()->get(Fmt), fmt::make_format_args(args...));
    };
}
} // namespace ll::i18n_literals
