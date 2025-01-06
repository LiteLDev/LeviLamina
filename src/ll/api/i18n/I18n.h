#pragma once

#include "ll/api/Expected.h"
#include "ll/api/base/Concepts.h"
#include "ll/api/base/FixedString.h"

#include <string>

#include "fmt/chrono.h"
#include "fmt/color.h"
#include "fmt/compile.h"
#include "fmt/format.h"
#include "fmt/os.h"
#include "fmt/ranges.h"
#include "fmt/std.h"

// #define LL_I18N_COLLECT_STRINGS

namespace ll::i18n {

LLNDAPI std::string_view getDefaultLocaleCode();

class I18n {
    struct Impl;
    std::unique_ptr<Impl> impl;

public:
    LLNDAPI I18n();
    LLAPI ~I18n();

    LLNDAPI Expected<> load(std::filesystem::path const& path) noexcept;

    LLAPI void clear();

    LLAPI void set(std::string_view localeCode, std::string_view key, std::string_view value);

    LLNDAPI std::string_view get(std::string_view key, std::string_view localeCode) const;
};

inline I18n& getInstance() {
    static I18n ins{};
    return ins;
}

} // namespace ll::i18n

#ifdef LL_I18N_COLLECT_STRINGS
#include "ll/api/reflection/TypeName.h"

#ifndef LL_I18N_STRING_LITERAL_TYPE
#define LL_I18N_STRING_LITERAL_TYPE ::ll::FixedStrWithLoc
#endif

namespace ll::i18n::detail {
template <LL_I18N_STRING_LITERAL_TYPE str>
struct TrStrOut;
#ifndef LL_I18N_COLLECT_STRINGS_CUSTOM
template <LL_I18N_STRING_LITERAL_TYPE str>
struct TrStrOut {
    static inline int _ = [] {
        fmt::print("\"{0}\": \"{0}\", // at {1}\n", str.sv(), str.loc().toString());
        return 0;
    }();
};
#endif
} // namespace ll::i18n::detail
#else
#ifndef LL_I18N_STRING_LITERAL_TYPE
#define LL_I18N_STRING_LITERAL_TYPE ::ll::FixedString
#endif
#endif
namespace ll::inline literals::inline i18n_literals {
template <LL_I18N_STRING_LITERAL_TYPE Fmt>
[[nodiscard]] constexpr auto operator""_tr() {
#ifdef LL_I18N_COLLECT_STRINGS
    static i18n::detail::TrStrOut<Fmt> e{};
#endif
    return [=]<class... Args>(Args&&... args) {
        [[maybe_unused]] static constexpr auto checker = fmt::format_string<Args...>(Fmt.sv());
        return fmt::vformat(i18n::getInstance().get(Fmt.sv(), {}), fmt::make_format_args(args...));
    };
}
template <LL_I18N_STRING_LITERAL_TYPE Fmt>
[[nodiscard]] constexpr auto operator""_trl() {
#ifdef LL_I18N_COLLECT_STRINGS
    static i18n::detail::TrStrOut<Fmt> e{};
#endif
    return [=]<class... Args>(std::string_view localeCode, Args&&... args) {
        [[maybe_unused]] static constexpr auto checker = fmt::format_string<Args...>(Fmt.sv());
        return fmt::vformat(i18n::getInstance().get(Fmt.sv(), localeCode), fmt::make_format_args(args...));
    };
}
} // namespace ll::inline literals::inline i18n_literals
