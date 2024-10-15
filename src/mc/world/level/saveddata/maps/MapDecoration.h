#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/math/Color.h"

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
    std::string mLabel;
    Type        mImage;
    schar       mX;
    schar       mY;
    schar       mRotation;
    mce::Color  mColor;

public:
    // NOLINTBEGIN
    MCAPI MapDecoration();

    MCAPI MapDecoration(
        ::MapDecoration::Type   img,
        schar                   x,
        schar                   y,
        schar                   rot,
        std::string const&      label,
        class mce::Color const& color
    );

    MCAPI class mce::Color const& getColor() const;

    MCAPI ::MapDecoration::Type getImg() const;

    MCAPI std::string const& getLabel() const;

    MCAPI schar getRot() const;

    MCAPI schar getX() const;

    MCAPI schar getY() const;

    MCAPI void load(class CompoundTag const& tag);

    MCAPI void save(class CompoundTag& tag);

    MCAPI ~MapDecoration();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void* ctor$(
        ::MapDecoration::Type   img,
        schar                   x,
        schar                   y,
        schar                   rot,
        std::string const&      label,
        class mce::Color const& color
    );

    MCAPI void dtor$();

    // NOLINTEND
};
