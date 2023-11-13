#pragma once

#include <string>
#include <string_view>
#include <vector>

#include "ll/api/base/Macro.h"
#include "ll/api/base/StdInt.h"
#include "ll/api/memory/Memory.h"

#include "fmt/color.h"
#include "fmt/core.h"

namespace ll::utils::string_utils {

// "2021-03-24"  ->  ["2021", "03", "24"]  (use '-' as split pattern)
[[nodiscard]] constexpr std::vector<std::string_view> splitByPattern(std::string_view s, std::string_view pattern) {
    if (s.empty()) return {};
    size_t pos  = s.find(pattern);
    size_t size = s.size();

    std::vector<std::string_view> ret;
    while (pos != std::string::npos) {
        if (pos != 0) ret.push_back(s.substr(0, pos));
        s   = s.substr(pos + pattern.size(), size - pos - pattern.size());
        pos = s.find(pattern);
    }
    if (!s.empty()) ret.push_back(s);
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
template <typename T>
    requires std::is_integral_v<T>
[[nodiscard]] constexpr std::string
intToHexStr(T value, bool upperCase = true, bool no0x = true, bool noLeadingZero = true) {
    std::string result;
    if (value < 0) result += '-';
    if (!no0x) result += "0x";
    constexpr char hexStr[2][17] = {"0123456789abcdef", "0123456789ABCDEF"};
    bool           leadingZero   = true;
    for (int i = sizeof(T) * 2; i > 0; --i) {
        auto hex = (value >> (i - 1) * 4) & 0xF;
        if (noLeadingZero && leadingZero && hex == 0) continue;
        leadingZero  = false;
        result      += hexStr[upperCase][hex];
    }
    return result;
}

[[nodiscard]] constexpr std::string strToHexStr(std::string_view value, bool upperCase = false, bool addSpace = false) {
    constexpr char hexStr[2][17] = {"0123456789abcdef", "0123456789ABCDEF"};
    std::string    hex;
    hex.reserve(value.size() * (addSpace ? 3 : 2));
    for (uchar x : value) {
        hex += hexStr[upperCase][x / 16];
        hex += hexStr[upperCase][x % 16];
        if (addSpace) hex += ' ';
    }
    if (addSpace && hex.ends_with(' ')) hex.pop_back();
    return hex;
}

[[nodiscard]] constexpr std::string applyTextStyle(fmt::text_style const& ts, std::string_view str) {
    std::string res;
    bool        has_style = false;
    if (ts.has_emphasis()) {
        has_style     = true;
        auto emphasis = fmt::detail::make_emphasis<char>(ts.get_emphasis());
        res.append(emphasis.begin(), emphasis.end());
    }
    if (ts.has_foreground()) {
        has_style       = true;
        auto foreground = fmt::detail::make_foreground_color<char>(ts.get_foreground());
        res.append(foreground.begin(), foreground.end());
    }
    if (ts.has_background()) {
        has_style       = true;
        auto background = fmt::detail::make_background_color<char>(ts.get_background());
        res.append(background.begin(), background.end());
    }
    res += str;
    if (has_style) res += "\x1b[0m";
    return res;
}

LLNDAPI std::string removeEscapeCode(std::string_view str);

LLNDAPI std::string replaceAnsiToMcCode(std::string_view str);

LLNDAPI std::string replaceMcToAnsiCode(std::string_view str);

LLNDAPI bool isu8str(std::string_view str) noexcept;

LLNDAPI std::string tou8str(std::string_view str);

namespace CodePage {
enum : uint {
    UTF16 = 0,
    ANSI  = 936,
    UTF8  = 65001,
};
} // namespace CodePage

LLNDAPI std::wstring str2wstr(std::string_view str, uint codePage = CodePage::UTF8);

LLNDAPI std::string wstr2str(std::wstring_view str, uint codePage = CodePage::UTF8);

LLNDAPI std::string str2str(std::string_view str, uint fromCodePage = CodePage::ANSI, uint toCodePage = CodePage::UTF8);

[[nodiscard]] inline std::string u8str2str(std::u8string str) {
    std::string& tmp = *reinterpret_cast<std::string*>(&str);
    return {std::move(tmp)};
}

[[nodiscard]] inline std::u8string str2u8str(std::string str) {
    std::u8string& tmp = *reinterpret_cast<std::u8string*>(&str);
    return {std::move(tmp)};
}

[[nodiscard]] inline std::string const& u8str2strConst(std::u8string const& str) {
    return *reinterpret_cast<const std::string*>(&str);
}

[[nodiscard]] inline std::u8string const& str2u8strConst(std::string const& str) {
    return *reinterpret_cast<const std::u8string*>(&str);
}

[[nodiscard]] inline std::string_view u8sv2sv(std::u8string_view str) {
    return {reinterpret_cast<char const*>(str.data()), str.size()};
}

[[nodiscard]] inline std::u8string_view sv2u8sv(std::string_view str) {
    return {reinterpret_cast<const char8_t*>(str.data()), str.size()};
}
template <class T, auto f>
[[nodiscard]] inline T svtonum(std::string_view str, size_t* idx, int base) {
    int&        errnoRef = errno;
    const char* ptr      = str.data();
    char*       eptr;
    errnoRef       = 0;
    const auto ans = f(ptr, &eptr, base);
    if (ptr == eptr) { throw std::invalid_argument("invalid svtonum argument"); }
    if (errnoRef == ERANGE) { throw std::out_of_range("svtonum argument out of range"); }
    if (idx) { *idx = static_cast<size_t>(eptr - ptr); }
    return static_cast<T>(ans);
}
template <class T, auto f>
[[nodiscard]] inline T svtonum(std::string_view str, size_t* idx) {
    int&        errnoRef = errno;
    const char* ptr      = str.data();
    char*       eptr;
    errnoRef       = 0;
    const auto ans = f(ptr, &eptr);
    if (ptr == eptr) { throw std::invalid_argument("invalid svtonum argument"); }
    if (errnoRef == ERANGE) { throw std::out_of_range("svtonum argument out of range"); }
    if (idx) { *idx = static_cast<size_t>(eptr - ptr); }
    return static_cast<T>(ans);
}

[[nodiscard]] inline schar svtoc(std::string_view str, size_t* idx = nullptr, int base = 10) {
    return svtonum<schar, strtol>(str, idx, base);
}
[[nodiscard]] inline uchar svtouc(std::string_view str, size_t* idx = nullptr, int base = 10) {
    return svtonum<uchar, strtoul>(str, idx, base);
}
[[nodiscard]] inline short svtos(std::string_view str, size_t* idx = nullptr, int base = 10) {
    return svtonum<short, strtol>(str, idx, base);
}
[[nodiscard]] inline ushort svtous(std::string_view str, size_t* idx = nullptr, int base = 10) {
    return svtonum<ushort, strtoul>(str, idx, base);
}
[[nodiscard]] inline int svtoi(std::string_view str, size_t* idx = nullptr, int base = 10) {
    return svtonum<int, strtol>(str, idx, base);
}
[[nodiscard]] inline uint svtoui(std::string_view str, size_t* idx = nullptr, int base = 10) {
    return svtonum<uint, strtoul>(str, idx, base);
}
[[nodiscard]] inline long svtol(std::string_view str, size_t* idx = nullptr, int base = 10) {
    return svtonum<long, strtol>(str, idx, base);
}
[[nodiscard]] inline ulong svtoul(std::string_view str, size_t* idx = nullptr, int base = 10) {
    return svtonum<ulong, strtoul>(str, idx, base);
}
[[nodiscard]] inline int64 svtoll(std::string_view str, size_t* idx = nullptr, int base = 10) {
    return svtonum<int64, strtoll>(str, idx, base);
}
[[nodiscard]] inline uint64 svtoull(std::string_view str, size_t* idx = nullptr, int base = 10) {
    return svtonum<uint64, strtoull>(str, idx, base);
}
[[nodiscard]] inline float svtof(std::string_view str, size_t* idx = nullptr) {
    return svtonum<float, strtof>(str, idx);
}
[[nodiscard]] inline double svtod(std::string_view str, size_t* idx = nullptr) {
    return svtonum<double, strtof>(str, idx);
}
[[nodiscard]] inline ldouble svtold(std::string_view str, size_t* idx = nullptr) {
    return svtonum<ldouble, strtof>(str, idx);
}
} // namespace ll::utils::string_utils
