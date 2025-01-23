#pragma once

#include <cerrno>
#include <charconv>
#include <cstddef>
#include <cstdlib>
#include <stdexcept>
#include <string>
#include <string_view>
#include <type_traits>
#include <utility>
#include <vector>

#include "ll/api/base/Concepts.h"
#include "ll/api/base/Macro.h"
#include "ll/api/base/StdInt.h"

#include "ll/api/Expected.h"

namespace ll::inline utils::string_utils {

// "2021-03-24"  ->  ["2021", "03", "24"]  (use '-' as split pattern)
template <std::invocable<std::string_view> Fn>
constexpr void splitByPattern(Fn&& fn, std::string_view s, std::string_view pattern, bool keepEmpty = false) {
    if (s.empty()) return;
    size_t pos{};
    while ((pos = s.find(pattern)) != std::string::npos) {
        if (keepEmpty || pos != 0) {
            if (!std::invoke(std::forward<Fn>(fn), s.substr(0, pos))) return;
        }
        s = s.substr(pos + pattern.size());
    }
    if (keepEmpty || !s.empty()) std::invoke(std::forward<Fn>(fn), s);
}
template <concepts::IsString T>
[[nodiscard]] constexpr decltype(auto) splitByPattern(T&& str, std::string_view pattern, bool keepEmpty = false) {
    using ReturnTypeElement = std::conditional_t<std::is_same_v<T&&, std::string&&>, std::string, std::string_view>;
    std::vector<ReturnTypeElement> ret;
    splitByPattern(
        [&](std::string_view sv) {
            ret.push_back(ReturnTypeElement{sv});
            return true;
        },
        str,
        pattern,
        keepEmpty
    );
    return ret;
}

/**
 * @brief Replace all founded sub std::string and modify input str
 * @param str       The input std::string
 * @param oldValue  The sub string to be replaced
 * @param newValue  The string to replace with
 * @return std::string  The modified input std::string
 */
constexpr std::string& replaceAll(std::string& str, std::string_view oldValue, std::string_view newValue) {
    for (std::string::size_type pos(0); pos != std::string::npos; pos += newValue.length()) {
        if ((pos = str.find(oldValue, pos)) != std::string::npos) str.replace(pos, oldValue.length(), newValue);
        else break;
    }
    return str;
}

[[nodiscard]] constexpr std::string
replaceAll(std::string const& str, std::string_view oldValue, std::string_view newValue) {
    std::string ret = str;
    replaceAll(ret, oldValue, newValue);
    return ret;
}

constexpr bool
replaceContent(std::string& str, std::string_view before, std::string_view after, std::string_view relplaceWith) {
    auto startOffset = str.find(before);
    if (startOffset == std::string::npos) return false;
    startOffset    += before.size();
    auto endOffset  = after.empty() ? std::string::npos : str.find(after, startOffset);
    str.replace(startOffset, endOffset - startOffset, relplaceWith);
    return true;
}

constexpr inline uchar digitFromByte[] = {
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 0,   1,   2,   3,   4,   5,   6,   7,   8,   9,   255, 255, 255, 255, 255, 255, 255, 10,
    11,  12,  13,  14,  15,  16,  17,  18,  19,  20,  21,  22,  23,  24,  25,  26,  27,  28,  29,  30,  31,  32,
    33,  34,  35,  255, 255, 255, 255, 255, 255, 10,  11,  12,  13,  14,  15,  16,  17,  18,  19,  20,  21,  22,
    23,  24,  25,  26,  27,  28,  29,  30,  31,  32,  33,  34,  35,  255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255
};
static_assert(sizeof(digitFromByte) == 256);

[[nodiscard]] constexpr uchar digitFromChar(char chr) noexcept { return digitFromByte[static_cast<uchar>(chr)]; }

constexpr inline char charconvDigits[2][37] = {
    "0123456789abcdefghijklmnopqrstuvwxyz",
    "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"
};

[[nodiscard]] constexpr char charFromInt(bool upper, uchar i) { return charconvDigits[upper][i]; }
/**
 * @brief Integer to hex string.
 *
 * @tparam T      The integer type
 * @param  value  The integer value
 * @param  upper  Whether to use upper case (0x1A or 0x1a)
 * @param  no0x   Whether to omit 0x prefix
 * @param  noLeadingZero  Whether to omit leading zero
 * @return std::string    The hex string
 *
 * @par Example
 * @code
 * IntToHexStr(15); // "F"
 * IntToHexStr(16, true, true, false); // "0000000F"
 * @endcode
 */
template <class T>
    requires std::is_integral_v<T>
[[nodiscard]] constexpr std::string
intToHexStr(T value, bool upperCase = true, bool no0x = true, bool noLeadingZero = true) {
    std::string result;
    if (value < 0) result += '-';
    if (!no0x) result += "0x";
    bool leadingZero = true;
    for (int i = sizeof(T) * 2; i > 0; --i) {
        auto hex = static_cast<uchar>((value >> (i - 1) * 4) & 0xF);
        if (noLeadingZero && leadingZero && hex == 0) continue;
        leadingZero  = false;
        result      += charFromInt(upperCase, hex);
    }
    return result;
}

[[nodiscard]] constexpr std::string strToHexStr(std::string_view value, bool upperCase = false, bool addSpace = false) {
    std::string hex;
    hex.reserve(value.size() * (addSpace ? 3 : 2));
    for (uchar x : value) {
        hex += charFromInt(upperCase, x / 16);
        hex += charFromInt(upperCase, x % 16);
        if (addSpace) hex += ' ';
    }
    if (addSpace && hex.ends_with(' ')) hex.pop_back();
    return hex;
}

LLNDAPI std::string removeEscapeCode(std::string_view str);

LLNDAPI std::string replaceAnsiToMcCode(std::string_view str);

LLNDAPI std::string replaceMcToAnsiCode(std::string_view str);

LLNDAPI bool isu8str(std::string_view str) noexcept;

LLNDAPI std::string tou8str(std::string_view str);

LLNDAPI std::string toSnakeCase(std::string_view str);

LLNDAPI std::string toLowerCase(std::string_view str);

namespace CodePage {
enum : uint {
    DefaultACP = 0,  // default to ANSI code page
    ThreadACP  = 3,  // current thread's ANSI code page
    Symbol     = 42, // SYMBOL translations
    GB2312     = 936,
    UTF8       = 65001,
};
} // namespace CodePage

LLNDAPI std::wstring str2wstr(std::string_view str, uint codePage = CodePage::UTF8);

LLNDAPI std::string wstr2str(std::wstring_view wstr, uint codePage = CodePage::UTF8);

LLNDAPI std::string
        str2str(std::string_view str, uint fromCodePage = CodePage::DefaultACP, uint toCodePage = CodePage::UTF8);

[[nodiscard]] inline std::string u8str2str(std::u8string str) {
    std::string& tmp = *reinterpret_cast<std::string*>(&str);
    return {std::move(tmp)};
}

[[nodiscard]] inline std::u8string str2u8str(std::string str) {
    std::u8string& tmp = *reinterpret_cast<std::u8string*>(&str);
    return {std::move(tmp)};
}

[[nodiscard]] inline std::string const& u8str2strConst(std::u8string const& str) {
    return *reinterpret_cast<std::string const*>(&str);
}

[[nodiscard]] inline std::u8string const& str2u8strConst(std::string const& str) {
    return *reinterpret_cast<std::u8string const*>(&str);
}

[[nodiscard]] inline std::string_view u8sv2sv(std::u8string_view str) {
    return {reinterpret_cast<char const*>(str.data()), str.size()};
}

[[nodiscard]] inline std::u8string_view sv2u8sv(std::string_view str) {
    return {reinterpret_cast<char8_t const*>(str.data()), str.size()};
}

LLNDAPI Expected<bool> svtobool(std::string_view);

template <class T, class... Args>
[[nodiscard]] LL_CONSTEXPR23 Expected<T> svtonum(std::string_view str, size_t* idx, Args&&... args) {
    T          result;
    const auto ans = ::std::from_chars(&*str.begin(), &*str.end(), result, std::forward<Args>(args)...);
    if (ans.ec != std::errc{}) {
        return makeErrorCodeError(ans.ec);
    }
    if (idx) {
        *idx = static_cast<size_t>(ans.ptr - &*str.begin());
    }
    return result;
}
[[nodiscard]] inline decltype(auto) svtoc(std::string_view str, size_t* idx = nullptr, int base = 10) {
    return svtonum<schar>(str, idx, base);
}
[[nodiscard]] inline decltype(auto) svtouc(std::string_view str, size_t* idx = nullptr, int base = 10) {
    return svtonum<uchar>(str, idx, base);
}
[[nodiscard]] inline decltype(auto) svtos(std::string_view str, size_t* idx = nullptr, int base = 10) {
    return svtonum<short>(str, idx, base);
}
[[nodiscard]] inline decltype(auto) svtous(std::string_view str, size_t* idx = nullptr, int base = 10) {
    return svtonum<ushort>(str, idx, base);
}
[[nodiscard]] inline decltype(auto) svtoi(std::string_view str, size_t* idx = nullptr, int base = 10) {
    return svtonum<int>(str, idx, base);
}
[[nodiscard]] inline decltype(auto) svtoui(std::string_view str, size_t* idx = nullptr, int base = 10) {
    return svtonum<uint>(str, idx, base);
}
[[nodiscard]] inline decltype(auto) svtol(std::string_view str, size_t* idx = nullptr, int base = 10) {
    return svtonum<long>(str, idx, base);
}
[[nodiscard]] inline decltype(auto) svtoul(std::string_view str, size_t* idx = nullptr, int base = 10) {
    return svtonum<ulong>(str, idx, base);
}
[[nodiscard]] inline decltype(auto) svtoll(std::string_view str, size_t* idx = nullptr, int base = 10) {
    return svtonum<int64>(str, idx, base);
}
[[nodiscard]] inline decltype(auto) svtoull(std::string_view str, size_t* idx = nullptr, int base = 10) {
    return svtonum<uint64>(str, idx, base);
}
[[nodiscard]] inline decltype(auto)
svtof(std::string_view str, size_t* idx = nullptr, std::chars_format format = std::chars_format::general) {
    return svtonum<float>(str, idx, format);
}
[[nodiscard]] inline decltype(auto)
svtod(std::string_view str, size_t* idx = nullptr, std::chars_format format = std::chars_format::general) {
    return svtonum<double>(str, idx, format);
}
[[nodiscard]] inline decltype(auto)
svtold(std::string_view str, size_t* idx = nullptr, std::chars_format format = std::chars_format::general) {
    return svtonum<ldouble>(str, idx, format);
}

} // namespace ll::inline utils::string_utils
