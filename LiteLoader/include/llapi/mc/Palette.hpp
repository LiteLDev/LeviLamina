/**
 * @file  Palette.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Palette.
 *
 */
class Palette {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PALETTE
public:
    class Palette& operator=(class Palette const &) = delete;
    Palette(class Palette const &) = delete;
    Palette() = delete;
#endif

public:
    /**
     * @hash   1915734113
     * @symbol ?BLACK@Palette@@2VColor@mce@@B
     */
    MCAPI static class mce::Color const BLACK;
    /**
     * @hash   523110179
     * @symbol ?BLUE@Palette@@2VColor@mce@@B
     */
    MCAPI static class mce::Color const BLUE;
    /**
     * @hash   -1954046831
     * @symbol ?BROWN@Palette@@2VColor@mce@@B
     */
    MCAPI static class mce::Color const BROWN;
    /**
     * @hash   257525411
     * @symbol ?CYAN@Palette@@2VColor@mce@@B
     */
    MCAPI static class mce::Color const CYAN;
    /**
     * @hash   1628182147
     * @symbol ?GRAY@Palette@@2VColor@mce@@B
     */
    MCAPI static class mce::Color const GRAY;
    /**
     * @hash   -727033151
     * @symbol ?GREEN@Palette@@2VColor@mce@@B
     */
    MCAPI static class mce::Color const GREEN;
    /**
     * @hash   415976835
     * @symbol ?LIGHT_BLUE@Palette@@2VColor@mce@@B
     */
    MCAPI static class mce::Color const LIGHT_BLUE;
    /**
     * @hash   250490721
     * @symbol ?LIGHT_GREEN@Palette@@2VColor@mce@@B
     */
    MCAPI static class mce::Color const LIGHT_GREEN;
    /**
     * @hash   219088401
     * @symbol ?MAGENTA@Palette@@2VColor@mce@@B
     */
    MCAPI static class mce::Color const MAGENTA;
    /**
     * @hash   -2077092157
     * @symbol ?ORANGE@Palette@@2VColor@mce@@B
     */
    MCAPI static class mce::Color const ORANGE;
    /**
     * @hash   217654355
     * @symbol ?PINK@Palette@@2VColor@mce@@B
     */
    MCAPI static class mce::Color const PINK;
    /**
     * @hash   1661466643
     * @symbol ?PURPLE@Palette@@2VColor@mce@@B
     */
    MCAPI static class mce::Color const PURPLE;
    /**
     * @hash   -524759215
     * @symbol ?RED@Palette@@2VColor@mce@@B
     */
    MCAPI static class mce::Color const RED;
    /**
     * @hash   2047679635
     * @symbol ?SILVER@Palette@@2VColor@mce@@B
     */
    MCAPI static class mce::Color const SILVER;
    /**
     * @hash   1927365041
     * @symbol ?WHITE@Palette@@2VColor@mce@@B
     */
    MCAPI static class mce::Color const WHITE;
    /**
     * @hash   1007465139
     * @symbol ?YELLOW@Palette@@2VColor@mce@@B
     */
    MCAPI static class mce::Color const YELLOW;
    /**
     * @hash   110319988
     * @symbol ?fromByte@Palette@@SA?AW4PaletteColor@@E@Z
     */
    MCAPI static enum PaletteColor fromByte(unsigned char);
    /**
     * @hash   -129054999
     * @symbol ?getColor@Palette@@SAAEBVColor@mce@@W4PaletteColor@@@Z
     */
    MCAPI static class mce::Color const & getColor(enum PaletteColor);

};