/**
 * @file  ColorFormat.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   1404042331
     * @symbol  ?AQUA\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const AQUA;
    /**
     * @hash   -590278535
     * @symbol  ?BLACK\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const BLACK;
    /**
     * @hash   -384053925
     * @symbol  ?BLUE\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const BLUE;
    /**
     * @hash   1111872923
     * @symbol  ?BOLD\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const BOLD;
    /**
     * @hash   963537512
     * @symbol  ?ColorCodeFromColor\@ColorFormat\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVColor\@mce\@\@\@Z
     */
    MCAPI std::string ColorCodeFromColor(class mce::Color const &);
    /**
     * @hash   -1863519155
     * @symbol  ?ColorFromColorCode\@ColorFormat\@\@YAPEBVColor\@mce\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class mce::Color const * ColorFromColorCode(std::string const &);
    /**
     * @hash   -1543655015
     * @symbol  ?DARK_AQUA\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const DARK_AQUA;
    /**
     * @hash   963216025
     * @symbol  ?DARK_BLUE\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const DARK_BLUE;
    /**
     * @hash   -2008157223
     * @symbol  ?DARK_GRAY\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const DARK_GRAY;
    /**
     * @hash   753919931
     * @symbol  ?DARK_GREEN\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const DARK_GREEN;
    /**
     * @hash   1504056857
     * @symbol  ?DARK_PURPLE\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const DARK_PURPLE;
    /**
     * @hash   202465147
     * @symbol  ?DARK_RED\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const DARK_RED;
    /**
     * @hash   -2057248389
     * @symbol  ?ESCAPE\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const ESCAPE;
    /**
     * @hash   -12035082
     * @symbol  ?FromString\@ColorFormat\@\@YA?BV?$basic_string_span\@$$CBD$0?0\@gsl\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class gsl::basic_string_span<char const, -1> const FromString(std::string const &);
    /**
     * @hash   -1894689477
     * @symbol  ?GOLD\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const GOLD;
    /**
     * @hash   939263355
     * @symbol  ?GRAY\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const GRAY;
    /**
     * @hash   1930843961
     * @symbol  ?GREEN\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const GREEN;
    /**
     * @hash   1342789787
     * @symbol  ?ITALIC\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const ITALIC;
    /**
     * @hash   -984750085
     * @symbol  ?LIGHT_PURPLE\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const LIGHT_PURPLE;
    /**
     * @hash   2052611577
     * @symbol  ?MINECOIN_GOLD\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const MINECOIN_GOLD;
    /**
     * @hash   -715789477
     * @symbol  ?OBFUSCATED\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const OBFUSCATED;
    /**
     * @hash   -949135751
     * @symbol  ?RED\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const RED;
    /**
     * @hash   -929070855
     * @symbol  ?RESET\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const RESET;
    /**
     * @hash   -1632031719
     * @symbol  ?WHITE\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const WHITE;
    /**
     * @hash   2040401275
     * @symbol  ?YELLOW\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const YELLOW;

};