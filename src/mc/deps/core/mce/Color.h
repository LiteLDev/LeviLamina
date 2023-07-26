#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class Color {

public:
    // prevent constructor by default
    Color& operator=(Color const&) = delete;
    Color(Color const&)            = delete;
    Color()                        = delete;

public:
    /**
     * @symbol ??8Color\@mce\@\@QEBA_NAEBV01\@\@Z
     */
    MCAPI bool operator==(class mce::Color const&) const; // NOLINT
    /**
     * @symbol ?toABGR\@Color\@mce\@\@QEBAHXZ
     */
    MCAPI int toABGR() const; // NOLINT
    /**
     * @symbol ?toARGB\@Color\@mce\@\@QEBAHXZ
     */
    MCAPI int toARGB() const; // NOLINT
    /**
     * @symbol
     * ?toHexString\@Color\@mce\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string toHexString() const; // NOLINT
    /**
     * @symbol
     * ?fromHexString\@Color\@mce\@\@SA?AV12\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class mce::Color fromHexString(std::string const&); // NOLINT
    /**
     * @symbol ?BLACK\@Color\@mce\@\@2V12\@B
     */
    MCAPI static class mce::Color const BLACK; // NOLINT
    /**
     * @symbol ?BLUE\@Color\@mce\@\@2V12\@B
     */
    MCAPI static class mce::Color const BLUE; // NOLINT
    /**
     * @symbol ?CYAN\@Color\@mce\@\@2V12\@B
     */
    MCAPI static class mce::Color const CYAN; // NOLINT
    /**
     * @symbol ?GREEN\@Color\@mce\@\@2V12\@B
     */
    MCAPI static class mce::Color const GREEN; // NOLINT
    /**
     * @symbol ?GREY\@Color\@mce\@\@2V12\@B
     */
    MCAPI static class mce::Color const GREY; // NOLINT
    /**
     * @symbol ?MINECOIN_GOLD\@Color\@mce\@\@2V12\@B
     */
    MCAPI static class mce::Color const MINECOIN_GOLD; // NOLINT
    /**
     * @symbol ?NIL\@Color\@mce\@\@2V12\@B
     */
    MCAPI static class mce::Color const NIL; // NOLINT
    /**
     * @symbol ?ORANGE\@Color\@mce\@\@2V12\@B
     */
    MCAPI static class mce::Color const ORANGE; // NOLINT
    /**
     * @symbol ?PINK\@Color\@mce\@\@2V12\@B
     */
    MCAPI static class mce::Color const PINK; // NOLINT
    /**
     * @symbol ?PURPLE\@Color\@mce\@\@2V12\@B
     */
    MCAPI static class mce::Color const PURPLE; // NOLINT
    /**
     * @symbol ?RED\@Color\@mce\@\@2V12\@B
     */
    MCAPI static class mce::Color const RED; // NOLINT
    /**
     * @symbol ?SHADE_DOWN\@Color\@mce\@\@2V12\@B
     */
    MCAPI static class mce::Color const SHADE_DOWN; // NOLINT
    /**
     * @symbol ?SHADE_NORTH_SOUTH\@Color\@mce\@\@2V12\@B
     */
    MCAPI static class mce::Color const SHADE_NORTH_SOUTH; // NOLINT
    /**
     * @symbol ?SHADE_UP\@Color\@mce\@\@2V12\@B
     */
    MCAPI static class mce::Color const SHADE_UP; // NOLINT
    /**
     * @symbol ?SHADE_WEST_EAST\@Color\@mce\@\@2V12\@B
     */
    MCAPI static class mce::Color const SHADE_WEST_EAST; // NOLINT
    /**
     * @symbol ?WHITE\@Color\@mce\@\@2V12\@B
     */
    MCAPI static class mce::Color const WHITE; // NOLINT
    /**
     * @symbol ?YELLOW\@Color\@mce\@\@2V12\@B
     */
    MCAPI static class mce::Color const YELLOW; // NOLINT
};

}; // namespace mce
