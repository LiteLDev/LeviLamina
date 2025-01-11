#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
namespace mce { class Color; }
// clang-format on

class FoliageColor {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static int getMapBirchColor();

    MCAPI static int getMapEvergreenColor();

    MCAPI static int getMapFoliageColor(float temp, float rain);

    MCAPI static int getMapGrassColor(::BlockSource& source, ::BlockPos const& pos);

    MCAPI static int getMapGrassColor(float temp, float rain);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::mce::Color const& FOLIAGE_BOTTOM_LEFT();

    MCAPI static ::mce::Color const& FOLIAGE_BOTTOM_RIGHT();

    MCAPI static ::mce::Color const& FOLIAGE_TOP_LEFT();

    MCAPI static ::mce::Color const& FOLIAGE_TOP_RIGHT();

    MCAPI static ::mce::Color const& GRASS_BOTTOM_LEFT();

    MCAPI static ::mce::Color const& GRASS_BOTTOM_RIGHT();

    MCAPI static ::mce::Color const& GRASS_TOP_LEFT();

    MCAPI static ::mce::Color const& GRASS_TOP_RIGHT();
    // NOLINTEND
};
