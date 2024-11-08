#include "ll/api/io/PatternFormatter.h"

#include "ll/api/utils/StringUtils.h"

template <class T>
struct BracketedArg {
    T const& value;
    bool     bracketed;
};
template <class T, class Char>
struct fmt::formatter<BracketedArg<T>, Char> : formatter<T, Char> {
    template <class FormatContext>
    auto format(BracketedArg<T> const& arg, FormatContext& ctx) const -> decltype(ctx.out()) {
        const auto& value = arg.value;
        auto        out   = ctx.out();
        if (arg.bracketed) {
            *out++ = static_cast<Char>('[');
            out    = formatter<T, Char>::format(value, ctx);
            *out++ = static_cast<Char>(']');
        } else {
            out = formatter<T, Char>::format(value, ctx);
        }
        return out;
    }
};

namespace ll::io {

static std::array<std::string_view, 6> levelNames{"FATAL", "ERROR", "WARN", "INFO", "DEBUG", "TRACE"};

template <typename T>
static constexpr auto makeBracketed(T const& value, bool bracketed) -> BracketedArg<std::remove_cvref_t<T>> {
    return BracketedArg<std::remove_cvref_t<T>>{value, bracketed};
}

void PatternFormatter::format(LogMessageView const& view, std::string& buffer) const noexcept try {
    auto lvlIdx = std::to_underlying(view.lvl);
    using namespace fmt::literals;
    if (colored) {
        fmt::format_to(
            std::back_inserter(buffer),
            fmt::runtime(pattern),
            "msg"_a = fmt::styled(makeBracketed(view.msg, bracketed[0]), styles[lvlIdx][0]),
            "tit"_a = fmt::styled(makeBracketed(view.tit, bracketed[1]), styles[lvlIdx][1]),
            "lvl"_a = fmt::styled(makeBracketed(levelNames[lvlIdx], bracketed[2]), styles[lvlIdx][2]),
            "tm"_a  = fmt::styled(makeBracketed(view.tm, bracketed[3]), styles[lvlIdx][3])
        );
    } else {
        fmt::format_to(
            std::back_inserter(buffer),
            fmt::runtime(pattern),
            "msg"_a = makeBracketed(string_utils::removeEscapeCode(view.msg), bracketed[0]),
            "tit"_a = makeBracketed(view.tit, bracketed[1]),
            "lvl"_a = makeBracketed(levelNames[lvlIdx], bracketed[2]),
            "tm"_a  = makeBracketed(view.tm, bracketed[3])
        );
    }
    buffer.push_back('\n');
} catch (...) {
    try {
        buffer.append("Fail to format ");
        buffer.append(levelNames[std::to_underlying(view.lvl)]);
        buffer.append(" [");
        buffer.append(view.tit);
        buffer.append("] ");
        buffer.append(view.msg);
        buffer.push_back('\n');
    } catch (...) {}
}
} // namespace ll::io
