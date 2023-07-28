#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/mce/Color.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class MapDecoration {
public:
    // MapDecoration inner types declare
    // clang-format off

    // clang-format on

    // MapDecoration inner types define
    enum class Type : int {
        MarkerWhite      = 0x0,
        MarkerGreen      = 0x1,
        MarkerRed        = 0x2,
        MarkerBlue       = 0x3,
        XWhite           = 0x4,
        TriangleRed      = 0x5,
        SquareWhite      = 0x6,
        MarkerSign       = 0x7,
        MarkerPink       = 0x8,
        MarkerOrange     = 0x9,
        MarkerYellow     = 0xA,
        MarkerTeal       = 0xB,
        TriangleGreen    = 0xC,
        SmallSquareWhite = 0xD,
        Mansion          = 0xE,
        Monument         = 0xF,
        NoDraw           = 0x10,
        Count            = 0x11,

        Player          = 0x0,
        PlayerOffMap    = 0x6,
        PlayerOffLimits = 0xD,
        PlayerHidden    = 0x10,

        ItemFrame = 0x1,
    };

public:
    MapDecoration() = delete;

    std::string mLabel;
    Type        mImage;
    int8_t      mX;
    int8_t      mY;
    int8_t      mRotation;
    mce::Color  mColor;
    /**
     * @symbol
     * ??0MapDecoration\@\@QEAA\@W4Type\@0\@CCCAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVColor\@mce\@\@\@Z
     */
    MCAPI
    MapDecoration(enum class MapDecoration::Type, signed char, signed char, signed char, std::string const&, class mce::Color const&); // NOLINT
    /**
     * @symbol ?getColor\@MapDecoration\@\@QEBAAEBVColor\@mce\@\@XZ
     */
    MCAPI class mce::Color const& getColor() const; // NOLINT
    /**
     * @symbol ?getImg\@MapDecoration\@\@QEBA?AW4Type\@1\@XZ
     */
    MCAPI enum class MapDecoration::Type getImg() const; // NOLINT
    /**
     * @symbol
     * ?getLabel\@MapDecoration\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getLabel() const; // NOLINT
    /**
     * @symbol ?getRot\@MapDecoration\@\@QEBACXZ
     */
    MCAPI signed char getRot() const; // NOLINT
    /**
     * @symbol ?getX\@MapDecoration\@\@QEBACXZ
     */
    MCAPI signed char getX() const; // NOLINT
    /**
     * @symbol ?getY\@MapDecoration\@\@QEBACXZ
     */
    MCAPI signed char getY() const; // NOLINT
    /**
     * @symbol ??1MapDecoration\@\@QEAA\@XZ
     */
    MCAPI ~MapDecoration(); // NOLINT
};
