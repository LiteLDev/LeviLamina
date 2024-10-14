#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class FoliageColor {
public:
    // FoliageColor inner types define
    enum class PaletteName {};

public:
    // prevent constructor by default
    FoliageColor& operator=(FoliageColor const&);
    FoliageColor(FoliageColor const&);
    FoliageColor();

public:
    // NOLINTBEGIN
    MCAPI static int getBirchColor(float temp, float rain);

    MCAPI static int getDefaultColor();

    MCAPI static int getEvergreenColor(float temp, float rain);

    MCAPI static int getFoliageColor(float temp, float rain);

    MCAPI static int getFoliageColor(::FoliageColor::PaletteName paletteName, float temp, float rain);

    MCAPI static int getMapBirchColor(float temp, float rain);

    MCAPI static int getMapEvergreenColor(float temp, float rain);

    MCAPI static int getMapFoliageColor(float temp, float rain);

    MCAPI static int getMapGrassColor(class BlockSource& source, class BlockPos const& pos);

    MCAPI static int getMapGrassColor(float temp, float rain);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static class mce::Color const& FOLIAGE_BOTTOM_LEFT();

    MCAPI static class mce::Color const& FOLIAGE_BOTTOM_RIGHT();

    MCAPI static class mce::Color const& FOLIAGE_TOP_LEFT();

    MCAPI static class mce::Color const& FOLIAGE_TOP_RIGHT();

    MCAPI static class mce::Color const& GRASS_BOTTOM_LEFT();

    MCAPI static class mce::Color const& GRASS_BOTTOM_RIGHT();

    MCAPI static class mce::Color const& GRASS_TOP_LEFT();

    MCAPI static class mce::Color const& GRASS_TOP_RIGHT();

    MCAPI static std::array<std::unique_ptr<std::array<int, 65536>>, 5>& mFoliagePalettes();

    MCAPI static std::array<std::unique_ptr<std::array<int, 65536>>, 5>& mGrassPalettes();

    // NOLINTEND
};
