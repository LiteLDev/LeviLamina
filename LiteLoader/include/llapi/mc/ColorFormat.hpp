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
     * @symbol ?AQUA\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const AQUA;
    /**
     * @symbol ?BLACK\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const BLACK;
    /**
     * @symbol ?BLUE\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const BLUE;
    /**
     * @symbol ?BOLD\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const BOLD;
    /**
     * @symbol ?ColorCodeFromColor\@ColorFormat\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVColor\@mce\@\@\@Z
     */
    MCAPI std::string ColorCodeFromColor(class mce::Color const &);
    /**
     * @symbol ?ColorFromColorCode\@ColorFormat\@\@YAPEBVColor\@mce\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class mce::Color const * ColorFromColorCode(std::string const &);
    /**
     * @symbol ?DARK_AQUA\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const DARK_AQUA;
    /**
     * @symbol ?DARK_BLUE\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const DARK_BLUE;
    /**
     * @symbol ?DARK_GRAY\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const DARK_GRAY;
    /**
     * @symbol ?DARK_GREEN\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const DARK_GREEN;
    /**
     * @symbol ?DARK_PURPLE\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const DARK_PURPLE;
    /**
     * @symbol ?DARK_RED\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const DARK_RED;
    /**
     * @symbol ?ESCAPE\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const ESCAPE;
    /**
     * @symbol ?FormatCodeFromName\@ColorFormat\@\@YA?BV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI class std::basic_string_view<char, struct std::char_traits<char>> const FormatCodeFromName(std::string const &);
    /**
     * @symbol ?GOLD\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const GOLD;
    /**
     * @symbol ?GRAY\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const GRAY;
    /**
     * @symbol ?GREEN\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const GREEN;
    /**
     * @symbol ?ITALIC\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const ITALIC;
    /**
     * @symbol ?LIGHT_PURPLE\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const LIGHT_PURPLE;
    /**
     * @symbol ?MATERIAL_AMETHYST\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const MATERIAL_AMETHYST;
    /**
     * @symbol ?MATERIAL_COPPER\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const MATERIAL_COPPER;
    /**
     * @symbol ?MATERIAL_DIAMOND\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const MATERIAL_DIAMOND;
    /**
     * @symbol ?MATERIAL_EMERALD\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const MATERIAL_EMERALD;
    /**
     * @symbol ?MATERIAL_GOLD\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const MATERIAL_GOLD;
    /**
     * @symbol ?MATERIAL_IRON\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const MATERIAL_IRON;
    /**
     * @symbol ?MATERIAL_LAPIS\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const MATERIAL_LAPIS;
    /**
     * @symbol ?MATERIAL_NETHERITE\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const MATERIAL_NETHERITE;
    /**
     * @symbol ?MATERIAL_QUARTZ\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const MATERIAL_QUARTZ;
    /**
     * @symbol ?MATERIAL_REDSTONE\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const MATERIAL_REDSTONE;
    /**
     * @symbol ?MINECOIN_GOLD\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const MINECOIN_GOLD;
    /**
     * @symbol ?OBFUSCATED\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const OBFUSCATED;
    /**
     * @symbol ?RED\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const RED;
    /**
     * @symbol ?RESET\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const RESET;
    /**
     * @symbol ?WHITE\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const WHITE;
    /**
     * @symbol ?YELLOW\@ColorFormat\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const YELLOW;

};