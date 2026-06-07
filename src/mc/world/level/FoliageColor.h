#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class FoliageColor {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static int getMapBirchColor();

    MCNAPI static int getMapDryColor();

    MCNAPI static int getMapEvergreenColor();

    MCNAPI static int getMapFoliageColor(float temp, float rain);

    MCNAPI static int getMapGrassColor(float temp, float rain);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::mce::Color const& FOLIAGE_BOTTOM_LEFT();

    MCNAPI static ::mce::Color const& FOLIAGE_BOTTOM_RIGHT();

    MCNAPI static ::mce::Color const& FOLIAGE_TOP_LEFT();

    MCNAPI static ::mce::Color const& FOLIAGE_TOP_RIGHT();

    MCNAPI static ::mce::Color const& GRASS_BOTTOM_LEFT();

    MCNAPI static ::mce::Color const& GRASS_BOTTOM_RIGHT();

    MCNAPI static ::mce::Color const& GRASS_TOP_LEFT();

    MCNAPI static ::mce::Color const& GRASS_TOP_RIGHT();
    // NOLINTEND
};
