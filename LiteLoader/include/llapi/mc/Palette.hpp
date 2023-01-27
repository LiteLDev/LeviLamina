/**
 * @file  Palette.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -1311600623
     * @symbol  ?BLACK\@Palette\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const BLACK;
    /**
     * @hash   1590742739
     * @symbol  ?BLUE\@Palette\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const BLUE;
    /**
     * @hash   -886414271
     * @symbol  ?BROWN\@Palette\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const BROWN;
    /**
     * @hash   1325157971
     * @symbol  ?CYAN\@Palette\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const CYAN;
    /**
     * @hash   -1599152589
     * @symbol  ?GRAY\@Palette\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const GRAY;
    /**
     * @hash   340599409
     * @symbol  ?GREEN\@Palette\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const GREEN;
    /**
     * @hash   1483609395
     * @symbol  ?LIGHT_BLUE\@Palette\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const LIGHT_BLUE;
    /**
     * @hash   1318123281
     * @symbol  ?LIGHT_GREEN\@Palette\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const LIGHT_GREEN;
    /**
     * @hash   1286720961
     * @symbol  ?MAGENTA\@Palette\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const MAGENTA;
    /**
     * @hash   -1009459597
     * @symbol  ?ORANGE\@Palette\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const ORANGE;
    /**
     * @hash   1285286915
     * @symbol  ?PINK\@Palette\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const PINK;
    /**
     * @hash   -1565868093
     * @symbol  ?PURPLE\@Palette\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const PURPLE;
    /**
     * @hash   542873345
     * @symbol  ?RED\@Palette\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const RED;
    /**
     * @hash   -1179655101
     * @symbol  ?SILVER\@Palette\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const SILVER;
    /**
     * @hash   -1299969695
     * @symbol  ?WHITE\@Palette\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const WHITE;
    /**
     * @hash   2075097699
     * @symbol  ?YELLOW\@Palette\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const YELLOW;
    /**
     * @hash   -928298060
     * @symbol  ?fromByte\@Palette\@\@SA?AW4PaletteColor\@\@E\@Z
     */
    MCAPI static enum class PaletteColor fromByte(unsigned char);
    /**
     * @hash   -1167673047
     * @symbol  ?getColor\@Palette\@\@SAAEBVColor\@mce\@\@W4PaletteColor\@\@\@Z
     */
    MCAPI static class mce::Color const & getColor(enum class PaletteColor);

};