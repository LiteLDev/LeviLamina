#include "ll/api/utils/StringUtils.h"

#include <cctype>
#include <cfloat>
#include <cstdint>
#include <string>
#include <string_view>
#include <unordered_map>

#include "ctre/ctre-unicode.hpp"
#include "fmt/color.h"
#include "fmt/core.h"
#include "fmt/format.h"
#include "magic_enum.hpp"

#include "ll/api/base/StdInt.h"

#include "mc/deps/core/mce/Color.h"
#include "mc/deps/core/utility/Util.h"
#include "mc/deps/snappy/snappy.h"

#include "stringapiset.h"

namespace ll::inline utils::string_utils {

std::string compress(std::string_view sv) {
    std::string res;
    snappy::Compress(sv.data(), sv.size(), &res);
    return res;
}
std::string decompress(std::string_view sv) {
    std::string res;
    snappy::Uncompress(sv.data(), sv.size(), &res);
    return res;
}

fmt::text_style getTextStyleFromCode(std::string_view code) {
    if (code.starts_with("§")) {
        switch (code[2]) {
            // clang-format off
        default :
        case 'f': return fmt::fg(fmt::terminal_color::bright_white);
        case '0': return fmt::fg(fmt::terminal_color::black);
        case '1': return fmt::fg(fmt::rgb(0x0000AA));
        case '2': return fmt::fg(fmt::rgb(0x00AA00));
        case '3': return fmt::fg(fmt::rgb(0x00AAAA));
        case '4': return fmt::fg(fmt::rgb(0xAA0000));
        case '5': return fmt::fg(fmt::rgb(0xAA00AA));
        case '6': return fmt::fg(fmt::rgb(0xFFAA00));
        case '7': return fmt::fg(fmt::rgb(0xAAAAAA));
        case '8': return fmt::fg(fmt::rgb(0x555555));
        case '9': return fmt::fg(fmt::rgb(0x5555FF));
        case 'a': return fmt::fg(fmt::rgb(0x55FF55));
        case 'b': return fmt::fg(fmt::rgb(0x55FFFF));
        case 'c': return fmt::fg(fmt::rgb(0xFF5555));
        case 'd': return fmt::fg(fmt::rgb(0xFF55FF));
        case 'e': return fmt::fg(fmt::rgb(0xFFFF55));
        case 'g': return fmt::fg(fmt::rgb(0xDDD605));
        case 'h': return fmt::fg(fmt::rgb(0xE3D4D1));
        case 'i': return fmt::fg(fmt::rgb(0xCECACA));
        case 'j': return fmt::fg(fmt::rgb(0x443A3B));
        case 'm': return fmt::fg(fmt::rgb(0x971607));
        case 'n': return fmt::fg(fmt::rgb(0xB4684D));
        case 'p': return fmt::fg(fmt::rgb(0xDEB12D));
        case 'q': return fmt::fg(fmt::rgb(0x47A036));
        case 's': return fmt::fg(fmt::rgb(0x2CBAA8));
        case 't': return fmt::fg(fmt::rgb(0x21497B));
        case 'u': return fmt::fg(fmt::rgb(0x9A5CC6));
        case 'k': return fmt::emphasis::blink;
        case 'l': return fmt::emphasis::bold;
        case 'o': return fmt::emphasis::italic;
        case 'r': return {};
            // clang-format on
        }
    } else if (code.starts_with('\x1B')) {
        code.remove_prefix(2);
        code.remove_suffix(1);
        if (code.find(';') != std::string_view::npos) {
            bool background = code.starts_with('4');
            code.remove_prefix(1);
            if (!code.starts_with("8;2;")) {
                return {};
            }
            code.remove_prefix(4);
            auto svec = splitByPattern(code, ";");
            if (svec.size() != 3) {
                return {};
            }
            auto colorFromCode =
                fmt::rgb(svtouc(svec[0]).value_or(0), svtouc(svec[1]).value_or(0), svtouc(svec[2]).value_or(0));
            if (background) {
                return fmt::bg(colorFromCode);
            } else {
                return fmt::fg(colorFromCode);
            }
        } else {
            int num = svtoi(code).value_or(0);
            if (magic_enum::enum_contains<fmt::terminal_color>((uchar)num)) {
                return fmt::fg((fmt::terminal_color)num);
            } else if (magic_enum::enum_contains<fmt::terminal_color>((uchar)(num - 10))) {
                return fmt::bg((fmt::terminal_color)(num - 10));
            } else {
                switch (num) {
                    // clang-format off
                    case 1: return fmt::emphasis::bold;
                    case 2: return fmt::emphasis::faint;
                    case 3: return fmt::emphasis::italic;
                    case 4: return fmt::emphasis::underline;
                    case 5: return fmt::emphasis::blink;
                    case 7: return fmt::emphasis::reverse;
                    case 8: return fmt::emphasis::conceal;
                    case 9: return fmt::emphasis::strikethrough;
                    default: break;
                    // clang-format on
                }
            }
        }
    }
    return {};
}

std::string getMcCodeFromTextStyle(fmt::text_style style) {
    std::string res;
    bool        hasMcStyle = false;
    if (style.has_emphasis()) {
        hasMcStyle = true;
        if ((uchar)(fmt::emphasis::blink) & (uchar)(style.get_emphasis())) {
            res += "§k";
        }
        if ((uchar)(fmt::emphasis::bold) & (uchar)(style.get_emphasis())) {
            res += "§l";
        }
        if ((uchar)(fmt::emphasis::italic) & (uchar)(style.get_emphasis())) {
            res += "§o";
        }
    }
    if (style.has_foreground()) {
        hasMcStyle = true;
        auto fg    = style.get_foreground();
        if (fg.is_rgb) {
            auto color = mce::Color(fg.value.rgb_color);
            // clang-format off
            static const std::unordered_map<std::string_view, mce::Color> carr{
                {"§0", 0x000000}, {"§1", 0x0000AA}, {"§2", 0x00AA00}, {"§3", 0x00AAAA},
                {"§4", 0xAA0000}, {"§5", 0xAA00AA}, {"§6", 0xFFAA00}, {"§7", 0xAAAAAA},
                {"§8", 0x555555}, {"§9", 0x5555FF}, {"§a", 0x55FF55}, {"§b", 0x55FFFF},
                {"§c", 0xFF5555}, {"§d", 0xFF55FF}, {"§e", 0xFFFF55}, {"§g", 0xDDD605},
                {"§h", 0xE3D4D1}, {"§i", 0xCECACA}, {"§j", 0x443A3B}, {"§m", 0x971607},
                {"§n", 0xB4684D}, {"§p", 0xDEB12D}, {"§q", 0x47A036}, {"§s", 0x2CBAA8},
                {"§t", 0x21497B}, {"§u", 0x9A5CC6}, {"§f", 0xFFFFFF}
            };
            // clang-format on
            double           minDis = DBL_MAX;
            std::string_view minStr;
            for (auto& [k, v] : carr) {
                auto dis = v.distanceTo(color);
                if (dis < minDis) {
                    minDis = dis;
                    minStr = k;
                }
            }
            res += minStr;
        } else {
            switch ((fmt::terminal_color)(fg.value.term_color)) {
                // clang-format off
            case fmt::terminal_color::black:          res += "§0"; break;
            case fmt::terminal_color::red:            res += "§4"; break;
            case fmt::terminal_color::green:          res += "§2"; break;
            case fmt::terminal_color::yellow:         res += "§6"; break;
            case fmt::terminal_color::blue:           res += "§1"; break;
            case fmt::terminal_color::magenta:        res += "§5"; break;
            case fmt::terminal_color::cyan:           res += "§3"; break;
            case fmt::terminal_color::white:          res += "§7"; break;
            case fmt::terminal_color::bright_black:   res += "§8"; break;
            case fmt::terminal_color::bright_red:     res += "§c"; break;
            case fmt::terminal_color::bright_green:   res += "§a"; break;
            case fmt::terminal_color::bright_yellow:  res += "§e"; break;
            case fmt::terminal_color::bright_blue:    res += "§9"; break;
            case fmt::terminal_color::bright_magenta: res += "§d"; break;
            case fmt::terminal_color::bright_cyan:    res += "§b"; break;
            case fmt::terminal_color::bright_white:
            default :                                 res += "§f"; break;
                // clang-format on
            }
        }
    }
    if (style.has_background()) {
        hasMcStyle = true;
    }
    if (hasMcStyle) {
        return res;
    }
    return "§r";
}

std::string getAnsiCodeFromTextStyle(fmt::text_style style) {
    fmt::basic_memory_buffer<char> buf;
    bool                           has_style = false;
    if (style.has_emphasis()) {
        has_style     = true;
        auto emphasis = fmt::detail::make_emphasis<char>(style.get_emphasis());
        buf.append(emphasis.begin(), emphasis.end());
    }
    if (style.has_foreground()) {
        has_style       = true;
        auto foreground = fmt::detail::make_foreground_color<char>(style.get_foreground());
        buf.append(foreground.begin(), foreground.end());
    }
    if (!has_style) fmt::detail::reset_color<char>(buf);
    return fmt::to_string(buf);
}

std::wstring str2wstr(std::string_view str, uint codePage) {
    int          len = MultiByteToWideChar(codePage, 0, str.data(), (int)str.size(), nullptr, 0);
    std::wstring wstr;
    if (len == 0) return wstr;
    wstr.resize(len);
    MultiByteToWideChar(codePage, 0, str.data(), (int)str.size(), wstr.data(), len);
    return wstr;
}

std::string wstr2str(std::wstring_view wstr, uint codePage) {
    int         len = WideCharToMultiByte(codePage, 0, wstr.data(), (int)wstr.size(), nullptr, 0, nullptr, nullptr);
    std::string str;
    if (len == 0) return str;
    str.resize(len);
    WideCharToMultiByte(codePage, 0, wstr.data(), (int)wstr.size(), str.data(), (int)str.size(), nullptr, nullptr);
    return str;
}

std::string str2str(std::string_view str, uint fromCodePage, uint toCodePage) {
    return wstr2str(str2wstr(str, fromCodePage), toCodePage);
}

std::string removeEscapeCode(std::string_view str) {
    std::string res;
    auto        sbu8 = sv2u8sv(str);
    for (auto& s : ctre::split<u8"(\x1B(?:[@-Z\\-_]|\\[[0-?]*[ -/]*[@-~]))|((?<!§)§(?:[0-9a-u]))">(sbu8)) {
        res += u8sv2sv(s);
    }
    return res;
}

std::string replaceAnsiToMcCode(std::string_view str) {
    std::string res;
    auto        i     = ctre::iterator<"\x1B(?:[@-Z\\-_]|\\[[0-?]*[ -/]*[@-~])">(str);
    auto        begin = i.orig_begin;
    for (; i.current_match; ++i) {
        if (begin != i.current_match.begin()) res += std::string_view{begin, i.current_match.begin()};
        begin = i.current;

        res += getMcCodeFromTextStyle(getTextStyleFromCode(i.current_match.view()));
    }
    if (begin != str.end()) res += std::string_view{begin, str.end()};
    return res;
}

std::string replaceMcToAnsiCode(std::string_view str) {
    auto        sbu8 = sv2u8sv(str);
    std::string res;
    auto        i     = ctre::iterator<u8"(?<!§)§(?:[0-9a-u])">(sbu8);
    auto        begin = sbu8.begin();
    for (; i.current_match; ++i) {
        auto view = i.current_match.view();
        if (begin != view.begin()) res += u8sv2sv(std::u8string_view{begin, view.begin()});
        begin  = view.end();
        res   += getAnsiCodeFromTextStyle(getTextStyleFromCode(u8sv2sv(view)));
    }
    if (begin != sbu8.end()) res += u8sv2sv(std::u8string_view{begin, sbu8.end()});
    res += getAnsiCodeFromTextStyle({});
    return res;
}

bool isu8str(std::string_view str) noexcept {
    bool res = true;
    fmt::detail::for_each_codepoint(str, [&](uint32_t cp, fmt::string_view) {
        if (cp == fmt::detail::invalid_code_point) {
            res = false;
            return false;
        }
        return true;
    });
    return res;
}

std::string tou8str(std::string_view str) {
    if (isu8str(str)) {
        return std::string{str};
    } else {
        return str2str(str, CodePage::DefaultACP, CodePage::UTF8);
    }
}
std::string toSnakeCase(std::string_view str) {
    std::string res;
    if (str.empty()) {
        return res;
    }
    res.reserve(str.length());
    res.push_back((char)tolower(str.front()));
    str.remove_prefix(1);
    for (auto c : str) {
        if (isupper(c)) {
            res.push_back('_');
            res.push_back((char)tolower(c));
        } else {
            res.push_back(c);
        }
    }
    return res;
}
Expected<bool> strtobool(std::string const& str) {
    bool res = false;
    if (Util::toBool(str, res)) {
        return res;
    } else {
        return makeErrorCodeError(std::errc::invalid_argument);
    }
}
} // namespace ll::inline utils::string_utils
