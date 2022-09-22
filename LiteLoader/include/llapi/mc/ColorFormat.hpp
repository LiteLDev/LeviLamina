/**
 * @file  ColorFormat.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace ColorFormat.
 *
 */
namespace ColorFormat {

#define AFTER_EXTRA
// Add Member There
LIAPI extern std::unordered_map<std::string, const char*> const colorCodeToConsoleMap;
LIAPI extern std::unordered_map<std::string, mce::Color const> const colorCodeToColorMap;


LIAPI std::string nearestColorCodeFromColor(mce::Color const& color);
LIAPI mce::Color ColorFromConsoleCode(std::string const& consoleCode);

LIAPI std::string consoleCodeFromColorCode(std::string const& mcCode);
LIAPI std::string nearestColorCodeFromConsoleCode(std::string const& consoleCode);

LIAPI std::string& convertToMc(std::string& str);
LIAPI std::string convertToMc(std::string&& str);

[[deprecated("This is a typo. Use convertToConsole instead")]]
LIAPI std::string& convertToColsole(std::string& str, bool keepColorCode = false);
[[deprecated("This is a typo. Use convertToConsole instead")]]
LIAPI std::string convertToColsole(std::string&& str, bool keepColorCode = false);
 
LIAPI std::string& convertToConsole(std::string& str, bool keepColorCode = false);
LIAPI std::string convertToConsole(std::string&& str, bool keepColorCode = false);

LIAPI std::string& removeColorCode(std::string& str);
LIAPI std::string removeColorCode(std::string&& str);

[[deprecated("Use convertToMc instead")]]
LIAPI std::string& transferConsoleColorToColorCode(std::string& str);
[[deprecated("Use convertToConsole instead")]]
LIAPI std::string& transferColorCodeToConsole(std::string& str, bool keepColorCode = false);

#undef AFTER_EXTRA
    /**
     * @hash   -297811789
     * @symbol ?AQUA@ColorFormat@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI extern std::string const AQUA;
    /**
     * @hash   2002834641
     * @symbol ?BLACK@ColorFormat@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI extern std::string const BLACK;
    /**
     * @hash   -2085908045
     * @symbol ?BLUE@ColorFormat@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI extern std::string const BLUE;
    /**
     * @hash   -589981197
     * @symbol ?BOLD@ColorFormat@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI extern std::string const BOLD;
    /**
     * @hash   1552007784
     * @symbol ?ColorCodeFromColor@ColorFormat@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVColor@mce@@@Z
     */
    MCAPI std::string ColorCodeFromColor(class mce::Color const &);
    /**
     * @hash   -1275048883
     * @symbol ?ColorFromColorCode@ColorFormat@@YAPEBVColor@mce@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI class mce::Color const * ColorFromColorCode(std::string const &);
    /**
     * @hash   1049458161
     * @symbol ?DARK_AQUA@ColorFormat@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI extern std::string const DARK_AQUA;
    /**
     * @hash   -738638095
     * @symbol ?DARK_BLUE@ColorFormat@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI extern std::string const DARK_BLUE;
    /**
     * @hash   584955953
     * @symbol ?DARK_GRAY@ColorFormat@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI extern std::string const DARK_GRAY;
    /**
     * @hash   -947934189
     * @symbol ?DARK_GREEN@ColorFormat@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI extern std::string const DARK_GREEN;
    /**
     * @hash   -197797263
     * @symbol ?DARK_PURPLE@ColorFormat@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI extern std::string const DARK_PURPLE;
    /**
     * @hash   -1499388973
     * @symbol ?DARK_RED@ColorFormat@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI extern std::string const DARK_RED;
    /**
     * @hash   535864787
     * @symbol ?ESCAPE@ColorFormat@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI extern std::string const ESCAPE;
    /**
     * @hash   576435190
     * @symbol ?FromString@ColorFormat@@YA?BV?$basic_string_span@$$CBD$0?0@gsl@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI class gsl::basic_string_span<char const, -1> const FromString(std::string const &);
    /**
     * @hash   698423699
     * @symbol ?GOLD@ColorFormat@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI extern std::string const GOLD;
    /**
     * @hash   -762590765
     * @symbol ?GRAY@ColorFormat@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI extern std::string const GRAY;
    /**
     * @hash   228989841
     * @symbol ?GREEN@ColorFormat@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI extern std::string const GREEN;
    /**
     * @hash   -359064333
     * @symbol ?ITALIC@ColorFormat@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI extern std::string const ITALIC;
    /**
     * @hash   1608363091
     * @symbol ?LIGHT_PURPLE@ColorFormat@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI extern std::string const LIGHT_PURPLE;
    /**
     * @hash   350757457
     * @symbol ?MINECOIN_GOLD@ColorFormat@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI extern std::string const MINECOIN_GOLD;
    /**
     * @hash   1877323699
     * @symbol ?OBFUSCATED@ColorFormat@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI extern std::string const OBFUSCATED;
    /**
     * @hash   1643977425
     * @symbol ?RED@ColorFormat@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI extern std::string const RED;
    /**
     * @hash   1664042321
     * @symbol ?RESET@ColorFormat@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI extern std::string const RESET;
    /**
     * @hash   961081457
     * @symbol ?WHITE@ColorFormat@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI extern std::string const WHITE;
    /**
     * @hash   338547155
     * @symbol ?YELLOW@ColorFormat@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI extern std::string const YELLOW;

};