#pragma once

#include <ctime>

#include "ll/api/base/StdInt.h"

#include "fmt/chrono.h"

namespace ll::data {
struct TmWithMs : public std::tm {
    ushort ms;
};
} // namespace ll::data

template <typename Char>
struct fmt::formatter<ll::data::TmWithMs, Char> : formatter<std::tm, Char> {
private:
    detail::arg_ref<Char> precisionRef;
    int                   precision{0};

public:
    FMT_CONSTEXPR formatter() { this->format_str_ = detail::string_literal<Char, '%', 'T'>{}; }

    template <typename FormatContext>
    auto format(ll::data::TmWithMs const& val, FormatContext& ctx) const -> decltype(ctx.out()) {
        formatter<std::tm, Char>::format(val, ctx);
        auto out = ctx.out();
        if (precision > 0) {
            fmt::format_to(out, "{0:0>{1}}", val.ms, precision);
        }
        return out;
    }
    constexpr auto parse(basic_format_parse_context<Char>& ctx) -> decltype(ctx.begin()) {
        auto it = ctx.begin(), end = ctx.end();
        if (it == end || *it == '}') return it;
        if (*it == '.') {
            it = detail::parse_precision(it, end, precision, precisionRef, ctx);
        }
        ctx.advance_to(it);
        return formatter<std::tm, Char>::parse(ctx);
    }
};
