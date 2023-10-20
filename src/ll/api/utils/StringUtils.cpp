#include "ll/api/utils/StringUtils.h"

#include "ctre/ctre-unicode.hpp"

#include "ll/api/base/Global.h"

#include "windows.h"

namespace ll::StringUtils {

fmt::text_style getTextStyleFromCode(std::string_view code) {
    if (code.starts_with("§")) {
        switch (code[2]) {
            // clang-format off
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
        case 'k': return fmt::emphasis::reverse;
        case 'l': return fmt::emphasis::bold;
        case 'o': return fmt::emphasis::italic;
        case 'r': return {};
        case 'f':
        default : return fmt::fg(fmt::terminal_color::bright_white);
            // clang-format on
        }
    } else if (code.starts_with('\x1B')) {
        // TODO
    }

    return {};
}

std::string getMcCodeFromTextStyle(fmt::text_style style) {
    // TODO
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
    int len = MultiByteToWideChar(codePage, 0, str.data(), (int)str.size(), nullptr, 0);
    if (len == 0) { return {}; }
    std::wstring wstr(len, L'\0');
    MultiByteToWideChar(codePage, 0, str.data(), (int)str.size(), wstr.data(), len);
    return wstr;
}

std::string wstr2str(std::wstring_view str, uint codePage) {
    int len = WideCharToMultiByte(codePage, 0, str.data(), (int)str.size(), nullptr, 0, nullptr, nullptr);
    if (len == 0) { return {}; }
    std::string ret(len, '\0');
    WideCharToMultiByte(codePage, 0, str.data(), (int)str.size(), ret.data(), (int)ret.size(), nullptr, nullptr);
    return ret;
}

std::string str2str(std::string_view str, uint fromCodePage, uint toCodePage) {
    return wstr2str(str2wstr(str, fromCodePage), toCodePage);
}

std::string removeEscapeCode(std::string_view str) {
    std::stringstream res;
    auto              sbu8 = sv2u8sv(str);
    for (auto& s : ctre::split<u8"(\x1B(?:[@-Z\\-_]|\\[[0-?]*[ -/]*[@-~]))|((?<!§)§(?:[0-9a-u]))">(sbu8)) {
        res << u8sv2sv(s);
    }
    return res.str();
}

std::string replaceAnsiToMcCode(std::string_view str) {
    std::stringstream res;

    auto i     = ctre::iterator<"\x1B(?:[@-Z\\-_]|\\[[0-?]*[ -/]*[@-~])">(str);
    auto begin = i.orig_begin;
    for (; i.current_match; ++i) {
        if (begin != i.current_match.begin()) res << std::string_view{begin, i.current_match.begin()};
        begin = i.current;

        res << getMcCodeFromTextStyle(getTextStyleFromCode(i.current_match.view()));
    }
    if (begin != str.end()) res << std::string_view{begin, str.end()};
    return res.str();
}

std::string replaceMcToAnsiCode(std::string_view str) {
    auto              sbu8 = sv2u8sv(str);
    std::stringstream res;
    auto              i     = ctre::iterator<u8"(?<!§)§(?:[0-9a-u])">(sbu8);
    auto              begin = sbu8.begin();
    for (; i.current_match; ++i) {
        auto view = i.current_match.view();
        if (begin != view.begin()) res << u8sv2sv(std::u8string_view{begin, view.begin()});
        begin = view.end();
        res << getAnsiCodeFromTextStyle(getTextStyleFromCode(u8sv2sv(view)));
    }
    if (begin != sbu8.end()) res << u8sv2sv(std::u8string_view{begin, sbu8.end()});
    res << getAnsiCodeFromTextStyle({});
    return res.str();
}

} // namespace ll::StringUtils
