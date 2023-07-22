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
LLAPI extern std::unordered_map<std::string, const char*> const colorCodeToConsoleMap;
LLAPI extern std::unordered_map<std::string, mce::Color const> const colorCodeToColorMap;


LLAPI std::string nearestColorCodeFromColor(mce::Color const& color);
LLAPI mce::Color ColorFromConsoleCode(std::string const& consoleCode);

LLAPI std::string consoleCodeFromColorCode(std::string const& mcCode);
LLAPI std::string nearestColorCodeFromConsoleCode(std::string const& consoleCode);

LLAPI std::string& convertToMc(std::string& str);
LLAPI std::string convertToMc(std::string&& str);

[[deprecated("This is a typo. Use convertToConsole instead")]]
LLAPI std::string& convertToColsole(std::string& str, bool keepColorCode = false);
[[deprecated("This is a typo. Use convertToConsole instead")]]
LLAPI std::string convertToColsole(std::string&& str, bool keepColorCode = false);
 
LLAPI std::string& convertToConsole(std::string& str, bool keepColorCode = false);
LLAPI std::string convertToConsole(std::string&& str, bool keepColorCode = false);

LLAPI std::string& removeColorCode(std::string& str);
LLAPI std::string removeColorCode(std::string&& str);

[[deprecated("Use convertToMc instead")]]
LLAPI std::string& transferConsoleColorToColorCode(std::string& str);
[[deprecated("Use convertToConsole instead")]]
LLAPI std::string& transferColorCodeToConsole(std::string& str, bool keepColorCode = false);

#undef AFTER_EXTRA
    /**
     * @symbol  ?AQUA\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const AQUA;
    /**
     * @symbol  ?BLACK\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const BLACK;
    /**
     * @symbol  ?BLUE\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const BLUE;
    /**
     * @symbol  ?BOLD\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const BOLD;
    /**
     * @symbol  ?ColorCodeFromColor\@ColorFormat\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVColor\@mce\@\@\@Z
     */
    MCAPI std::string ColorCodeFromColor(class mce::Color const &);
    /**
     * @symbol  ?ColorFromColorCode\@ColorFormat\@\@YAPEBVColor\@mce\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class mce::Color const * ColorFromColorCode(std::string const &);
    /**
     * @symbol  ?DARK_AQUA\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const DARK_AQUA;
    /**
     * @symbol  ?DARK_BLUE\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const DARK_BLUE;
    /**
     * @symbol  ?DARK_GRAY\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const DARK_GRAY;
    /**
     * @symbol  ?DARK_GREEN\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const DARK_GREEN;
    /**
     * @symbol  ?DARK_PURPLE\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const DARK_PURPLE;
    /**
     * @symbol  ?DARK_RED\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const DARK_RED;
    /**
     * @symbol  ?ESCAPE\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const ESCAPE;
    /**
     * @symbol  ?FromString\@ColorFormat\@\@YA?BV?$basic_string_span\@$$CBD$0?0\@gsl\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class gsl::basic_string_span<char const, -1> const FromString(std::string const &);
    /**
     * @symbol  ?GOLD\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const GOLD;
    /**
     * @symbol  ?GRAY\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const GRAY;
    /**
     * @symbol  ?GREEN\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const GREEN;
    /**
     * @symbol  ?ITALIC\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const ITALIC;
    /**
     * @symbol  ?LIGHT_PURPLE\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const LIGHT_PURPLE;
    /**
     * @symbol  ?MINECOIN_GOLD\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const MINECOIN_GOLD;
    /**
     * @symbol  ?OBFUSCATED\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const OBFUSCATED;
    /**
     * @symbol  ?RED\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const RED;
    /**
     * @symbol  ?RESET\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const RESET;
    /**
     * @symbol  ?WHITE\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const WHITE;
    /**
     * @symbol  ?YELLOW\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const YELLOW;

};