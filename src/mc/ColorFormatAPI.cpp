#include "liteloader/api/memory/Hook.h"
#include "mc/ColorFormat.hpp"
#include "mc/Util.hpp"

#include "liteloader/core/LiteLoader.h"

using ll::logger;
namespace ColorFormat {
std::unordered_map<std::string, const char*> const colorCodeToConsoleMap = {
    {"§0", "\x1b[38;2;000;000;000m"}, // BLACK
    {"§1", "\x1b[38;2;000;000;170m"}, // DARK_BLUE
    {"§2", "\x1b[38;2;000;170;000m"}, // DARK_GREEN
    {"§3", "\x1b[38;2;000;170;170m"}, // DARK_AQUA
    {"§4", "\x1b[38;2;170;000;000m"}, // DARK_RED
    {"§5", "\x1b[38;2;170;000;170m"}, // DARK_PURPLE
    {"§6", "\x1b[38;2;255;170;000m"}, // GOLD
    {"§7", "\x1b[38;2;170;170;170m"}, // GRAY
    {"§8", "\x1b[38;2;085;085;085m"}, // DARK_GRAY
    {"§9", "\x1b[38;2;085;085;255m"}, // BLUE
    {"§a", "\x1b[38;2;085;255;085m"}, // GREEN
    {"§b", "\x1b[38;2;085;255;255m"}, // AQUA
    {"§c", "\x1b[38;2;255;085;085m"}, // RED
    {"§d", "\x1b[38;2;255;085;255m"}, // LIGHT_PURPLE
    {"§e", "\x1b[38;2;255;255;085m"}, // YELLOW
    {"§f", "\x1b[38;2;255;255;255m"}, // WHITE
    {"§g", "\x1b[38;2;221;214;005m"}, // MINECOIN_GOLD
  //{"§", ""},                        //ESCAPE
    {"§l", "\x1b[1m"               }, // BOLD
    {"§o", "\x1b[3m"               }, // ITALIC
    {"§k", ""                      }, // OBFUSCATED
    {"§r", "\x1b[0m"               }, // RESET
};

std::unordered_map<std::string, mce::Color const> const colorCodeToColorMap =
    std::unordered_map<std::string, mce::Color const>{
        {"§0", mce::Color(0.0f,      0.0f,      0.0f)     },
        {"§1", mce::Color(0.0f,      0.0f,      0.666667f)},
        {"§2", mce::Color(0.0f,      0.666667f, 0.0f)     },
        {"§3", mce::Color(0.0f,      0.666667f, 0.666667f)},
        {"§4", mce::Color(0.666667f, 0.0f,      0.0f)     },
        {"§5", mce::Color(0.666667f, 0.0f,      0.666667f)},
        {"§6", mce::Color(1.0f,      0.666667f, 0.0f)     },
        {"§7", mce::Color(0.666667f, 0.666667f, 0.666667f)},
        {"§8", mce::Color(0.333333f, 0.333333f, 0.333333f)},
        {"§9", mce::Color(0.333333f, 0.333333f, 1.0f)     },
        {"§a", mce::Color(0.333333f, 1.0f,      0.333333f)},
        {"§b", mce::Color(0.333333f, 1.0f,      1.0f)     },
        {"§c", mce::Color(1.0f,      0.333333f, 0.333333f)},
        {"§d", mce::Color(1.0f,      0.333333f, 1.0f)     },
        {"§e", mce::Color(1.0f,      1.0f,      0.333333f)},
        {"§f", mce::Color(1.0f,      1.0f,      1.0f)     },
        {"§g", mce::Color(0.87f,     0.84f,     0.02f)    },
};

std::unordered_map<unsigned char, const char*> const decorationToColorCodeMap = {
    {0,  "§r"},
    {1,  "§l"},
    {3,  "§o"},
    {31, "§4"},
    {32, "§2"},
    {33, "§e"},
    {34, "§1"},
    {35, "§5"},
    {36, "§3"},
    {37, "§7"},
    {90, "§8"},
    {91, "§c"},
    {92, "§a"},
    {93, "§g"},
    {94, "§9"},
    {95, "§5"},
    {96, "§b"},
    {97, "§f"},
};

std::string nearestColorCodeFromColor(mce::Color const& color) {
    double      minDst  = 10000000.0f;
    std::string minCode = "";
    for (auto& [code, codeColor] : colorCodeToColorMap) {
        auto dst = color.distanceTo(codeColor);
        // std::cout << code << color.toConsoleCode() << color.toHexString() << " - " << codeColor.toConsoleCode() <<
        // codeColor.toHexString() << " - " << dst << std::endl;
        if (dst < minDst) {
            minDst  = dst;
            minCode = code;
        }
    }
    // std::cout << minCode << color.toConsoleCode() << color.toHexString() << " - " <<
    // colorCodeToColorMap.at(minCode).toConsoleCode() << colorCodeToColorMap.at(minCode).toHexString() << " - " <<
    // minDst << std::endl;
    return minCode;
}

inline int __readUnsignedChar(unsigned char& out, std::istringstream& iss) {
    while (true) {
        int c = iss.get();
        if (isdigit(c))
            out = out * 10 + c - '0';
        else
            return c;
    }
    return EOF;
}

std::string consoleCodeFromColorCode(std::string const& mcCode) {
    auto iter = colorCodeToConsoleMap.find(mcCode);
    if (iter == colorCodeToConsoleMap.end())
        return "";
    return iter->second;
}

mce::Color ColorFromConsoleCode(std::string const& console) {
    unsigned char      decoration = 0;
    unsigned char      r          = 0;
    unsigned char      g          = 0;
    unsigned char      b          = 0;
    std::istringstream iss(console);
    int                c = 0;
    if (iss.get() != '\x1b' || iss.get() != '[')
        return mce::Color::NIL;
    c = __readUnsignedChar(decoration, iss);
    if (c == EOF)
        return mce::Color::NIL;
    if (c == 'm') {
        auto codeIter = decorationToColorCodeMap.find(decoration);
        if (codeIter != decorationToColorCodeMap.end())
            return *ColorFromColorCode(codeIter->second);
        return mce::Color::NIL;
    }
    if (decoration == 38 && c == ';') {
        unsigned char unk;
        c = __readUnsignedChar(unk, iss);
        if (c != ';')
            return mce::Color::NIL;
        c = __readUnsignedChar(r, iss);
        if (c != ';')
            return mce::Color::NIL;
        c = __readUnsignedChar(g, iss);
        if (c != ';')
            return mce::Color::NIL;
        c = __readUnsignedChar(b, iss);
        if (c != 'm')
            return mce::Color::NIL;
        return mce::Color(r, g, b);
    }
    return mce::Color::NIL;
}

std::string nearestColorCodeFromConsoleCode(std::string const& code) {
    if (code.empty())
        return code;
    for (auto& [mcCode, consoleCode] : colorCodeToConsoleMap) {
        if (consoleCode == code)
            return mcCode;
    }
    if (code.size() == 19 && code.substr(0, 7) == "\x1b[38;2;" && code.back() == 'm') {
        mce::Color color(0, 0, 0);
        color.r        = std::stoi(code.substr(7, 7 + 3)) / 255.0f;
        color.g        = std::stoi(code.substr(11, 11 + 3)) / 255.0f;
        color.b        = std::stoi(code.substr(15, 15 + 3)) / 255.0f;
        auto colorCode = ColorCodeFromColor(color);
        if (colorCode.empty())
            return nearestColorCodeFromColor(color);
        else
            return colorCode;
    }
    unsigned char      decoration = 0;
    unsigned char      r          = 0;
    unsigned char      g          = 0;
    unsigned char      b          = 0;
    std::istringstream iss(code);
    int                c = 0;
    if (iss.get() != '\x1b' || iss.get() != '[')
        return "";
    c = __readUnsignedChar(decoration, iss);
    if (c == EOF)
        return "";
    if (c == 'm') {
        auto codeIter = decorationToColorCodeMap.find(decoration);
        if (codeIter != decorationToColorCodeMap.end())
            return codeIter->second;
        return "";
    }
    if (decoration == 38 && c == ';') {
        unsigned char unk;
        c = __readUnsignedChar(unk, iss);
        if (c != ';')
            return "";
        c = __readUnsignedChar(r, iss);
        if (c != ';')
            return "";
        c = __readUnsignedChar(g, iss);
        if (c != ';')
            return "";
        c = __readUnsignedChar(b, iss);
        if (c != 'm')
            return "";
        mce::Color color(r, g, b);
        return nearestColorCodeFromColor(color);
    }
    // std::cout << code << "\\x" << Util::toHex(code.substr(0, 1)) << code.substr(1) << std::endl;
    return "";
}

// For compatibility
std::string convertToColsole(std::string&& str, bool keepColorCode) {
    convertToConsole(str, keepColorCode);
    return std::move(str);
}

std::string convertToConsole(std::string&& str, bool keepColorCode) {
    convertToConsole(str, keepColorCode);
    return std::move(str);
}

std::string& removeColorCode(std::string& str) {
    size_t size = str.size();
    for (size_t pos = str.find("§"); pos < size - 2; pos = str.find("§", pos)) {
        str.erase(pos, 3);
        size -= 3;
    }
    return str;
}

std::string removeColorCode(std::string&& str) {
    removeColorCode(str);
    return std::move(str);
}

// For compatibility
std::string& convertToColsole(std::string& str, bool keepColorCode) { return convertToConsole(str, keepColorCode); }

std::string& convertToConsole(std::string& str, bool keepColorCode) {
    size_t size = str.size();
    for (size_t pos = str.find("§"); pos < size - 2; pos = str.find("§", pos)) {
        std::string consoleCode = consoleCodeFromColorCode(str.substr(pos, 3));
        if (keepColorCode) {
            str.insert(pos + (str[pos + 2] == 'r' ? 0 : 3), consoleCode);
            pos  += consoleCode.size() + 3;
            size += consoleCode.size();
        } else {
            str.replace(pos, 3, consoleCode);
            pos  += consoleCode.size();
            size += consoleCode.size() - 3;
        }
    }
    return str;
}

std::string& convertToMc(std::string& str) {
    size_t size = str.size();
    for (size_t pos = str.find('\x1b'); pos < size - 2; pos = str.find('\x1b', pos)) {
        size_t      endPos      = str.find('m', pos);
        size_t      codeSize    = endPos - pos + 1;
        auto        consoleCode = str.substr(pos, codeSize);
        std::string mcCode      = nearestColorCodeFromConsoleCode(consoleCode);
        if (mcCode.empty())
            mcCode = "\\x" + Util::toHex(consoleCode.substr(0, 1)) + consoleCode.substr(1);
        str.replace(pos, codeSize, mcCode);
        pos  += 3;
        size += 3 - codeSize;
    }
    return str;
}

std::string convertToMc(std::string&& str) {
    convertToMc(str);
    return std::move(str);
}

std::string& transferConsoleColorToColorCode(std::string& str) { return convertToMc(str); }

std::string& transferColorCodeToConsole(std::string& str, bool keepColorCode) {
    return convertToConsole(str, keepColorCode);
}

#ifdef DEBUG
inline void testCode(int i) { std::cout << "\x1b[" << std::to_string(i) << "mTest-" << std::to_string(i) << std::endl; }
inline std::string mcCodeWithColor(std::string const& code) {
    if (ColorFromColorCode(code))
        return fmt::format("{}{}{}", ColorFromColorCode(code)->toConsoleCode(), code, "\x1b[0m");
    return fmt::format("{}{}{}", "\x1b[0m", code, "\x1b[0m");
}
inline std::string consoleCodeWithColor(std::string const& code) {
    if (code.empty())
        return "";
    return fmt::format("{}\\x{}{}\x1b[0m", code, Util::toHex(code.substr(0, 1)), code.substr(1));
}
inline std::string colorWithColor(mce::Color const& color) {
    return fmt::format("{}{}{}", color.toConsoleCode(), color.toHexString(), "\x1b[0m");
    return fmt::format("{}mce::Color({}, {}, {}){}", color.toConsoleCode(), color.r, color.b, color.g, "\x1b[0m");
}

void testAll() {
    static bool first = true;
    if (!first)
        return;
    first = false;

    for (auto& [dec, code] : decorationToColorCodeMap) {
        if (ColorFromColorCode(code)) {
            std::string console = std::string("\x1b[") + std::to_string(dec) + 'm';
            logger.info("{}\"{}\" ,\"{}\"{},", '{', consoleCodeWithColor(console), mcCodeWithColor(code), '}');
        }
    }
    for (auto& [code, console] : colorCodeToColorMap) {
        if (ColorFromColorCode(code))
            logger.info("{}\"{}\" ,{}{},", '{', mcCodeWithColor(code), colorWithColor(console), '}');
    }

    for (auto& [code, console] : colorCodeToConsoleMap) {
        if (ColorFromColorCode(code))
            logger.info("{}\"{}\" ,\"{}\"{},", '{', mcCodeWithColor(code), consoleCodeWithColor(console), '}');
    }


#define PrintAllColorCode(code)                                                                                        \
    std::string code_##code  = "§"## #code;                                                                            \
    mce::Color  color_##code = *ColorFromColorCode(code_##code);                                                       \
    std::cout << "{\"§" << #code << "\", mce::Color(" << color_##code.r << ", " << color_##code.g << ", "              \
              << color_##code.b << ")}," << std::endl;

    PrintAllColorCode(0);
    PrintAllColorCode(1);
    PrintAllColorCode(2);
    PrintAllColorCode(3);
    PrintAllColorCode(4);
    PrintAllColorCode(5);
    PrintAllColorCode(6);
    PrintAllColorCode(7);
    PrintAllColorCode(8);
    PrintAllColorCode(9);
    PrintAllColorCode(a);
    PrintAllColorCode(b);
    PrintAllColorCode(c);
    PrintAllColorCode(d);
    PrintAllColorCode(e);
    PrintAllColorCode(f);
    PrintAllColorCode(g);
    // PrintColor("§");
    // PrintColor("§l");
    // PrintColor("§o");
    // PrintColor("§k");
    // PrintColor("§r");
    // fmt::v9::emphasis emp = fmt::v9::emphasis::bold;
    // auto color = fmt::v9::detail::make_emphasis<char>(emp);
    for (int i = 0; i < 255; i++) {
        // testCode(i);
    }
    std::string format;
    format = fmt::v9::detail::make_emphasis<char>(fmt::v9::emphasis::bold);
    logger.info(
        "{}{}\"{}\", \"\\x{}{}\"{},", format, '{', "§l", Util::toHex(format.substr(0, 1)), format.substr(1), '}'
    );
    format = fmt::v9::detail::make_emphasis<char>(fmt::v9::emphasis::italic);
    logger.info(
        "{}{}\"{}\", \"\\x{}{}\"{},", format, '{', "§o", Util::toHex(format.substr(0, 1)), format.substr(1), '}'
    );
    format = "";
    logger.info("{}{}\"{}\", \"\\x{}{}\"{},", format, '{', "§k", "", "", '}');
    format = "\x1b[0m";
    logger.info(
        "{}{}\"{}\", \"\\x{}{}\"{},", format, '{', "§r", Util::toHex(format.substr(0, 1)), format.substr(1), '}'
    );
}
}
LL_AUTO_INSTANCE_HOOK(
    TestColorFormat,
    HookPriority::Normal,
    "?startServerThread@ServerInstance@@QEAAXXZ",
    void,
) {
    if (false)
        ColorFormat::testAll();
    origin();
#endif // DEBUG
}