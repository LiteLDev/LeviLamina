#pragma once

#include "ll/api/Expected.h"
#include "ll/api/base/Concepts.h"
#include "ll/api/base/FixedString.h"

#if LL_HAS_CXX23
#include <expected>
#endif

#include "fmt/args.h"    // IWYU pragma: keep
#include "fmt/chrono.h"  // IWYU pragma: keep
#include "fmt/color.h"   // IWYU pragma: keep
#include "fmt/compile.h" // IWYU pragma: keep
#include "fmt/format.h"  // IWYU pragma: keep
#include "fmt/os.h"      // IWYU pragma: keep
#include "fmt/ranges.h"  // IWYU pragma: keep
#include "fmt/std.h"     // IWYU pragma: keep

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

class I18nStringError : public ErrorInfoBase {
private:
    gsl::not_null<I18n*>                               mI18n;
    std::string                                        mKey;
    fmt::dynamic_format_arg_store<fmt::format_context> mArgs;

public:
    template <typename... Args>
    constexpr explicit I18nStringError(fmt::format_string<Args...> fmt, Args&&... args)
    : mI18n(std::addressof(ll::i18n::getInstance())),
      mKey(std::string{fmt.get().begin(), fmt.get().end()}),
      mArgs() {
        if constexpr (sizeof...(Args) > 0) {
            mArgs.reserve(sizeof...(Args), 0);
            (mArgs.push_back(std::forward<Args>(args)), ...);
        }
    }

public:
    std::string message() const noexcept override { return message(ll::i18n::getDefaultLocaleCode()); }
    std::string message(std::string_view localeCode) const noexcept override try {
        auto pattern = mI18n->get(mKey, localeCode.empty() ? ll::i18n::getDefaultLocaleCode() : localeCode);
        if (!pattern.empty()) try {
                return fmt::vformat(pattern, mArgs);
            } catch (...) {}
        return fmt::vformat(mKey, mArgs);
    } catch (...) {
        return mKey;
    }

    std::string const&                                        key() const noexcept { return mKey; }
    fmt::dynamic_format_arg_store<fmt::format_context> const& args() const noexcept { return mArgs; }
};

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

namespace ll {
template <LL_I18N_STRING_LITERAL_TYPE Fmt, typename... Args>
[[nodiscard]] constexpr inline Unexpected makeI18nStringError(Args&&... args) noexcept {
#ifdef LL_I18N_COLLECT_STRINGS
    static i18n::detail::TrStrOut<Fmt> e{};
#endif
    return makeError<i18n::I18nStringError>(fmt::format_string<Args...>(Fmt.sv()), std::forward<Args>(args)...);
}
} // namespace ll

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
