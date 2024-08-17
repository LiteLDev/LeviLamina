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

#include "mc/common/ColorFormat.h"
#include "mc/deps/core/mce/Color.h"
#include "mc/deps/core/utility/Util.h"

#include "Windows.h"

namespace ll::inline utils::string_utils {

namespace cf = ColorFormat;

fmt::text_style getTextStyleFromCode(std::string_view code) {
    if (code.starts_with(cf::ESCAPE)) {
        switch (code[2]) {
            // clang-format off
        default :
        case cf::WHITE.back():              return fmt::fg(fmt::terminal_color::bright_white);
        case cf::BLACK.back():              return fmt::fg(fmt::terminal_color::black);
        case cf::DARK_BLUE.back():          return fmt::fg(fmt::rgb(0x0000AA));
        case cf::DARK_GREEN.back():         return fmt::fg(fmt::rgb(0x00AA00));
        case cf::DARK_AQUA.back():          return fmt::fg(fmt::rgb(0x00AAAA));
        case cf::DARK_RED.back():           return fmt::fg(fmt::rgb(0xAA0000));
        case cf::DARK_PURPLE.back():        return fmt::fg(fmt::rgb(0xAA00AA));
        case cf::GOLD.back():               return fmt::fg(fmt::rgb(0xFFAA00));
        case cf::GRAY.back():               return fmt::fg(fmt::rgb(0xAAAAAA));
        case cf::DARK_GRAY.back():          return fmt::fg(fmt::rgb(0x555555));
        case cf::BLUE.back():               return fmt::fg(fmt::rgb(0x5555FF));
        case cf::GREEN.back():              return fmt::fg(fmt::rgb(0x55FF55));
        case cf::AQUA.back():               return fmt::fg(fmt::rgb(0x55FFFF));
        case cf::RED.back():                return fmt::fg(fmt::rgb(0xFF5555));
        case cf::LIGHT_PURPLE.back():       return fmt::fg(fmt::rgb(0xFF55FF));
        case cf::YELLOW.back():             return fmt::fg(fmt::rgb(0xFFFF55));
        case cf::MINECOIN_GOLD.back():      return fmt::fg(fmt::rgb(0xDDD605));
        case cf::MATERIAL_QUARTZ.back():    return fmt::fg(fmt::rgb(0xE3D4D1));
        case cf::MATERIAL_IRON.back():      return fmt::fg(fmt::rgb(0xCECACA));
        case cf::MATERIAL_NETHERITE.back(): return fmt::fg(fmt::rgb(0x443A3B));
        case cf::MATERIAL_REDSTONE.back():  return fmt::fg(fmt::rgb(0x971607));
        case cf::MATERIAL_COPPER.back():    return fmt::fg(fmt::rgb(0xB4684D));
        case cf::MATERIAL_GOLD.back():      return fmt::fg(fmt::rgb(0xDEB12D));
        case cf::MATERIAL_EMERALD.back():   return fmt::fg(fmt::rgb(0x47A036));
        case cf::MATERIAL_DIAMOND.back():   return fmt::fg(fmt::rgb(0x2CBAA8));
        case cf::MATERIAL_LAPIS.back():     return fmt::fg(fmt::rgb(0x21497B));
        case cf::MATERIAL_AMETHYST.back():  return fmt::fg(fmt::rgb(0x9A5CC6));
        case cf::OBFUSCATED.back():         return fmt::emphasis::blink;
        case cf::BOLD.back():               return fmt::emphasis::bold;
        case cf::ITALIC.back():             return fmt::emphasis::italic;
        case cf::RESET.back():              return {};
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
            res += cf::OBFUSCATED;
        }
        if ((uchar)(fmt::emphasis::bold) & (uchar)(style.get_emphasis())) {
            res += cf::BOLD;
        }
        if ((uchar)(fmt::emphasis::italic) & (uchar)(style.get_emphasis())) {
            res += cf::ITALIC;
        }
    }
    if (style.has_foreground()) {
        hasMcStyle = true;
        auto fg    = style.get_foreground();
        if (fg.is_rgb) {
            auto color = mce::Color(fg.value.rgb_color);
            // clang-format off
            constexpr const auto carr  = std::array{
                std::pair{cf::BLACK             , mce::Color(0x000000)}, std::pair{cf::DARK_BLUE        , mce::Color(0x0000AA)},
                std::pair{cf::DARK_GREEN        , mce::Color(0x00AA00)}, std::pair{cf::DARK_AQUA        , mce::Color(0x00AAAA)},
                std::pair{cf::DARK_RED          , mce::Color(0xAA0000)}, std::pair{cf::DARK_PURPLE      , mce::Color(0xAA00AA)},
                std::pair{cf::GOLD              , mce::Color(0xFFAA00)}, std::pair{cf::GRAY             , mce::Color(0xAAAAAA)},
                std::pair{cf::DARK_GRAY         , mce::Color(0x555555)}, std::pair{cf::BLUE             , mce::Color(0x5555FF)},
                std::pair{cf::GREEN             , mce::Color(0x55FF55)}, std::pair{cf::AQUA             , mce::Color(0x55FFFF)},
                std::pair{cf::RED               , mce::Color(0xFF5555)}, std::pair{cf::LIGHT_PURPLE     , mce::Color(0xFF55FF)},
                std::pair{cf::YELLOW            , mce::Color(0xFFFF55)}, std::pair{cf::MINECOIN_GOLD    , mce::Color(0xDDD605)},
                std::pair{cf::MATERIAL_QUARTZ   , mce::Color(0xE3D4D1)}, std::pair{cf::MATERIAL_IRON    , mce::Color(0xCECACA)},
                std::pair{cf::MATERIAL_NETHERITE, mce::Color(0x443A3B)}, std::pair{cf::MATERIAL_REDSTONE, mce::Color(0x971607)},
                std::pair{cf::MATERIAL_COPPER   , mce::Color(0xB4684D)}, std::pair{cf::MATERIAL_GOLD    , mce::Color(0xDEB12D)},
                std::pair{cf::MATERIAL_EMERALD  , mce::Color(0x47A036)}, std::pair{cf::MATERIAL_DIAMOND , mce::Color(0x2CBAA8)},
                std::pair{cf::MATERIAL_LAPIS    , mce::Color(0x21497B)}, std::pair{cf::MATERIAL_AMETHYST, mce::Color(0x9A5CC6)},
                std::pair{cf::WHITE             , mce::Color(0xFFFFFF)}
            };
            // clang-format on
            double           minDis = std::numeric_limits<double>::max();
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
            case fmt::terminal_color::black:          res += cf::BLACK; break;
            case fmt::terminal_color::red:            res += cf::DARK_RED; break;
            case fmt::terminal_color::green:          res += cf::DARK_GREEN; break;
            case fmt::terminal_color::yellow:         res += cf::GOLD; break;
            case fmt::terminal_color::blue:           res += cf::DARK_BLUE; break;
            case fmt::terminal_color::magenta:        res += cf::DARK_PURPLE; break;
            case fmt::terminal_color::cyan:           res += cf::DARK_AQUA; break;
            case fmt::terminal_color::white:          res += cf::GRAY; break;
            case fmt::terminal_color::bright_black:   res += cf::DARK_GRAY; break;
            case fmt::terminal_color::bright_red:     res += cf::RED; break;
            case fmt::terminal_color::bright_green:   res += cf::GREEN; break;
            case fmt::terminal_color::bright_yellow:  res += cf::YELLOW; break;
            case fmt::terminal_color::bright_blue:    res += cf::BLUE; break;
            case fmt::terminal_color::bright_magenta: res += cf::LIGHT_PURPLE; break;
            case fmt::terminal_color::bright_cyan:    res += cf::AQUA; break;
            case fmt::terminal_color::bright_white:
            default :                                 res += cf::WHITE; break;
                // clang-format on
            }
        }
    }
    if (style.has_background()) {
        hasMcStyle = true;
    }
    if (!hasMcStyle) {
        res = cf::RESET;
    }
    return res;
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
    for (size_t i = 0; i < str.size(); ++i) {
        if (isupper(str[i])) {
            if (i > 0 && ((i + 1 < str.size() && !isupper(str[i + 1])) || !isupper(str[i - 1]))) {
                res.push_back('_');
            }
            res.push_back((char)tolower(str[i]));
        } else {
            res.push_back(str[i]);
        }
    }
    return res;
}
std::string toLowerCase(std::string_view str) {
    std::string res{str};
    std::transform(res.begin(), res.end(), res.begin(), [](char c) { return (char)std::tolower(c); });
    return res;
}
Expected<bool> strtobool(std::string_view str) {
    if (str.size() <= 4) {
        auto lower = toLowerCase(str);
        if (lower == "1" || lower == "y" || str == "yes" || lower == "true") {
            return true;
        } else if (lower == "0" || lower == "n" || str == "no" || lower == "false") {
            return false;
        }
    }
    return makeErrorCodeError(std::errc::invalid_argument);
}
} // namespace ll::inline utils::string_utils
