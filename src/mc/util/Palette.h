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
    /**
     * @symbol ?fromByte\@Palette\@\@SA?AW4PaletteColor\@\@E\@Z
     */
    MCAPI static enum class PaletteColor fromByte(unsigned char); // NOLINT
    /**
     * @symbol ?getColor\@Palette\@\@SAAEBVColor\@mce\@\@W4PaletteColor\@\@\@Z
     */
    MCAPI static class mce::Color const& getColor(enum class PaletteColor); // NOLINT
    /**
     * @symbol ?BLACK\@Palette\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const BLACK; // NOLINT
    /**
     * @symbol ?BLUE\@Palette\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const BLUE; // NOLINT
    /**
     * @symbol ?BROWN\@Palette\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const BROWN; // NOLINT
    /**
     * @symbol ?CYAN\@Palette\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const CYAN; // NOLINT
    /**
     * @symbol ?GRAY\@Palette\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const GRAY; // NOLINT
    /**
     * @symbol ?GREEN\@Palette\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const GREEN; // NOLINT
    /**
     * @symbol ?LIGHT_BLUE\@Palette\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const LIGHT_BLUE; // NOLINT
    /**
     * @symbol ?LIGHT_GREEN\@Palette\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const LIGHT_GREEN; // NOLINT
    /**
     * @symbol ?MAGENTA\@Palette\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const MAGENTA; // NOLINT
    /**
     * @symbol ?ORANGE\@Palette\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const ORANGE; // NOLINT
    /**
     * @symbol ?PINK\@Palette\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const PINK; // NOLINT
    /**
     * @symbol ?PURPLE\@Palette\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const PURPLE; // NOLINT
    /**
     * @symbol ?RED\@Palette\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const RED; // NOLINT
    /**
     * @symbol ?SILVER\@Palette\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const SILVER; // NOLINT
    /**
     * @symbol ?WHITE\@Palette\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const WHITE; // NOLINT
    /**
     * @symbol ?YELLOW\@Palette\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const YELLOW; // NOLINT
};
