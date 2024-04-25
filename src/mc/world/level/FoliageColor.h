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
    // symbol: ?getBirchColor@FoliageColor@@SAHMM@Z
    MCAPI static int getBirchColor(float temp, float rain);

    // symbol: ?getDefaultColor@FoliageColor@@SAHXZ
    MCAPI static int getDefaultColor();

    // symbol: ?getEvergreenColor@FoliageColor@@SAHMM@Z
    MCAPI static int getEvergreenColor(float temp, float rain);

    // symbol: ?getFoliageColor@FoliageColor@@SAHMM@Z
    MCAPI static int getFoliageColor(float temp, float rain);

    // symbol: ?getFoliageColor@FoliageColor@@SAHW4PaletteName@1@MM@Z
    MCAPI static int getFoliageColor(::FoliageColor::PaletteName paletteName, float temp, float rain);

    // symbol: ?getMapBirchColor@FoliageColor@@SAHMM@Z
    MCAPI static int getMapBirchColor(float temp, float rain);

    // symbol: ?getMapEvergreenColor@FoliageColor@@SAHMM@Z
    MCAPI static int getMapEvergreenColor(float temp, float rain);

    // symbol: ?getMapFoliageColor@FoliageColor@@SAHMM@Z
    MCAPI static int getMapFoliageColor(float temp, float rain);

    // symbol: ?getMapGrassColor@FoliageColor@@SAHAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static int getMapGrassColor(class BlockSource& source, class BlockPos const& pos);

    // symbol: ?getMapGrassColor@FoliageColor@@SAHMM@Z
    MCAPI static int getMapGrassColor(float temp, float rain);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?FOLIAGE_BOTTOM_LEFT@FoliageColor@@0VColor@mce@@B
    MCAPI static class mce::Color const FOLIAGE_BOTTOM_LEFT;

    // symbol: ?FOLIAGE_BOTTOM_RIGHT@FoliageColor@@0VColor@mce@@B
    MCAPI static class mce::Color const FOLIAGE_BOTTOM_RIGHT;

    // symbol: ?FOLIAGE_TOP_LEFT@FoliageColor@@0VColor@mce@@B
    MCAPI static class mce::Color const FOLIAGE_TOP_LEFT;

    // symbol: ?FOLIAGE_TOP_RIGHT@FoliageColor@@0VColor@mce@@B
    MCAPI static class mce::Color const FOLIAGE_TOP_RIGHT;

    // symbol: ?GRASS_BOTTOM_LEFT@FoliageColor@@0VColor@mce@@B
    MCAPI static class mce::Color const GRASS_BOTTOM_LEFT;

    // symbol: ?GRASS_BOTTOM_RIGHT@FoliageColor@@0VColor@mce@@B
    MCAPI static class mce::Color const GRASS_BOTTOM_RIGHT;

    // symbol: ?GRASS_TOP_LEFT@FoliageColor@@0VColor@mce@@B
    MCAPI static class mce::Color const GRASS_TOP_LEFT;

    // symbol: ?GRASS_TOP_RIGHT@FoliageColor@@0VColor@mce@@B
    MCAPI static class mce::Color const GRASS_TOP_RIGHT;

    // symbol:
    // ?mFoliagePalettes@FoliageColor@@0V?$array@V?$unique_ptr@V?$array@H$0BAAAA@@std@@U?$default_delete@V?$array@H$0BAAAA@@std@@@2@@std@@$04@std@@A
    MCAPI static std::array<std::unique_ptr<std::array<int, 65536>>, 5> mFoliagePalettes;

    // symbol:
    // ?mGrassPalettes@FoliageColor@@0V?$array@V?$unique_ptr@V?$array@H$0BAAAA@@std@@U?$default_delete@V?$array@H$0BAAAA@@std@@@2@@std@@$04@std@@A
    MCAPI static std::array<std::unique_ptr<std::array<int, 65536>>, 5> mGrassPalettes;

    // NOLINTEND
};
