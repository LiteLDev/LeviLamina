#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class Palette {

public:
    // prevent constructor by default
    Palette& operator=(Palette const&) = delete;
    Palette(Palette const&)            = delete;
    Palette()                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?fromByte\@Palette\@\@SA?AW4PaletteColor\@\@E\@Z
     */
    MCAPI static enum class PaletteColor fromByte(unsigned char);
    /**
     * @symbol ?getColor\@Palette\@\@SAAEBVColor\@mce\@\@W4PaletteColor\@\@\@Z
     */
    MCAPI static class mce::Color const& getColor(enum class PaletteColor);
    /**
     * @symbol ?BLACK\@Palette\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const BLACK;
    /**
     * @symbol ?BLUE\@Palette\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const BLUE;
    /**
     * @symbol ?BROWN\@Palette\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const BROWN;
    /**
     * @symbol ?CYAN\@Palette\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const CYAN;
    /**
     * @symbol ?GRAY\@Palette\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const GRAY;
    /**
     * @symbol ?GREEN\@Palette\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const GREEN;
    /**
     * @symbol ?LIGHT_BLUE\@Palette\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const LIGHT_BLUE;
    /**
     * @symbol ?LIGHT_GREEN\@Palette\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const LIGHT_GREEN;
    /**
     * @symbol ?MAGENTA\@Palette\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const MAGENTA;
    /**
     * @symbol ?ORANGE\@Palette\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const ORANGE;
    /**
     * @symbol ?PINK\@Palette\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const PINK;
    /**
     * @symbol ?PURPLE\@Palette\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const PURPLE;
    /**
     * @symbol ?RED\@Palette\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const RED;
    /**
     * @symbol ?SILVER\@Palette\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const SILVER;
    /**
     * @symbol ?WHITE\@Palette\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const WHITE;
    /**
     * @symbol ?YELLOW\@Palette\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const YELLOW;
    // NOLINTEND
};
