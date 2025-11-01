#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"

class MapDecoration {
public:
    // MapDecoration inner types define
    enum class Type : schar {
        MarkerWhite      = 0,
        MarkerGreen      = 1,
        MarkerRed        = 2,
        MarkerBlue       = 3,
        XWhite           = 4,
        TriangleRed      = 5,
        SquareWhite      = 6,
        MarkerSign       = 7,
        MarkerPink       = 8,
        MarkerOrange     = 9,
        MarkerYellow     = 10,
        MarkerTeal       = 11,
        TriangleGreen    = 12,
        SmallSquareWhite = 13,
        Mansion          = 14,
        Monument         = 15,
        NoDraw           = 16,
        VillageDesert    = 17,
        VillagePlains    = 18,
        VillageSavanna   = 19,
        VillageSnowy     = 20,
        VillageTaiga     = 21,
        JungleTemple     = 22,
        WitchHut         = 23,
        TrialChambers    = 24,
        Count            = 25,
        Player           = 0,
        PlayerOffMap     = 6,
        PlayerOffLimits  = 13,
        PlayerHidden     = 16,
        ItemFrame        = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>        mLabel;
    ::ll::TypedStorage<1, 1, ::MapDecoration::Type> mImage;
    ::ll::TypedStorage<1, 1, char>                  mX;
    ::ll::TypedStorage<1, 1, char>                  mY;
    ::ll::TypedStorage<1, 1, char>                  mRotation;
    ::ll::TypedStorage<4, 16, ::mce::Color>         mColor;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~MapDecoration();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
