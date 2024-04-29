#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/mce/Color.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class MapDecoration {
public:
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
        VillageDesert    = 0x11,
        VillagePlains    = 0x12,
        VillageSavanna   = 0x13,
        VillageSnowy     = 0x14,
        VillageTaiga     = 0x15,
        JungleTemple     = 0x16,
        WitchHut         = 0x17,
        TrialChambers    = 0x18,
        Count            = 0x19,
        Player           = MarkerWhite,
        PlayerOffMap     = SquareWhite,
        PlayerOffLimits  = SmallSquareWhite,
        PlayerHidden     = NoDraw,
        ItemFrame        = MarkerGreen,
    };

public:
    MapDecoration() = delete;

    std::string mLabel;
    Type        mImage;
    schar       mX;
    schar       mY;
    schar       mRotation;
    mce::Color  mColor;

public:
    // NOLINTBEGIN
    // symbol:
    // ??0MapDecoration@@QEAA@W4Type@0@CCCAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVColor@mce@@@Z
    MCAPI MapDecoration(
        ::MapDecoration::Type   img,
        schar                   x,
        schar                   y,
        schar                   rot,
        std::string const&      label,
        class mce::Color const& color
    );

    // symbol: ?getColor@MapDecoration@@QEBAAEBVColor@mce@@XZ
    MCAPI class mce::Color const& getColor() const;

    // symbol: ?getImg@MapDecoration@@QEBA?AW4Type@1@XZ
    MCAPI ::MapDecoration::Type getImg() const;

    // symbol: ?getLabel@MapDecoration@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getLabel() const;

    // symbol: ?getRot@MapDecoration@@QEBACXZ
    MCAPI schar getRot() const;

    // symbol: ?getX@MapDecoration@@QEBACXZ
    MCAPI schar getX() const;

    // symbol: ?getY@MapDecoration@@QEBACXZ
    MCAPI schar getY() const;

    // symbol: ??1MapDecoration@@QEAA@XZ
    MCAPI ~MapDecoration();

    // NOLINTEND
};
