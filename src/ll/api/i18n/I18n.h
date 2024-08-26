#pragma once

#include "ll/api/base/Concepts.h"
#include "ll/api/base/FixedString.h"
#include "ll/api/Expected.h"

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

std::string& defaultLocaleCode();

LLNDAPI std::string_view getDefaultLocaleCode();

class I18n {
    struct Impl;
    std::unique_ptr<Impl> impl;

public:
    LLNDAPI I18n();
    LLAPI ~I18n();

    LLNDAPI Expected<> load(std::filesystem::path const& path) noexcept;

    LLNDAPI void clear();

    LLNDAPI void set(std::string_view localeCode, std::string_view key, std::string_view value);

    LLNDAPI std::string_view get(std::string_view key, std::string_view localeCode) const;
};

inline I18n& getInstance() {
    static I18n ins{};
    return ins;
}

} // namespace ll::i18n

#ifdef LL_I18N_COLLECT_STRINGS
#include "ll/api/reflection/TypeName.h"

namespace ll::inline literals::inline i18n_literals {
namespace detail {
template <FixedString str>
struct TrString {
    static inline int output = [] {
        fmt::print("\"{0}\": \"{0}\",\n", (std::string_view)str);
        return 0;
    }();
};
} // namespace detail
} // namespace ll::inline literals::inline i18n_literals
#endif
namespace ll::inline literals::inline i18n_literals {
template <FixedString Fmt>
[[nodiscard]] constexpr auto operator""_tr() {
    return [=]<class... Args>(Args&&... args) {
#ifdef LL_I18N_COLLECT_STRINGS
        static detail::TrString<Fmt> e{};
#endif
        [[maybe_unused]] static constexpr auto checker = fmt::format_string<Args...>(std::string_view{Fmt});
        return fmt::vformat(i18n::getInstance().get(Fmt, {}), fmt::make_format_args(args...));
    };
}
} // namespace ll::inline literals::inline i18n_literals
