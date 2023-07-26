#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class FoliageColor {
public:
    // FoliageColor inner types declare
    // clang-format off

    // clang-format on

    // FoliageColor inner types define
    enum class PaletteName {};

public:
    // prevent constructor by default
    FoliageColor& operator=(FoliageColor const&) = delete;
    FoliageColor(FoliageColor const&)            = delete;
    FoliageColor()                               = delete;

public:
    /**
     * @symbol ?getBirchColor\@FoliageColor\@\@SAHMM\@Z
     */
    MCAPI static int getBirchColor(float, float); // NOLINT
    /**
     * @symbol ?getDefaultColor\@FoliageColor\@\@SAHXZ
     */
    MCAPI static int getDefaultColor(); // NOLINT
    /**
     * @symbol ?getEvergreenColor\@FoliageColor\@\@SAHMM\@Z
     */
    MCAPI static int getEvergreenColor(float, float); // NOLINT
    /**
     * @symbol ?getFoliageColor\@FoliageColor\@\@SAHMM\@Z
     */
    MCAPI static int getFoliageColor(float, float); // NOLINT
    /**
     * @symbol ?getFoliageColor\@FoliageColor\@\@SAHW4PaletteName\@1\@MM\@Z
     */
    MCAPI static int getFoliageColor(enum class FoliageColor::PaletteName, float, float); // NOLINT
    /**
     * @symbol ?getMapBirchColor\@FoliageColor\@\@SAHMM\@Z
     */
    MCAPI static int getMapBirchColor(float, float); // NOLINT
    /**
     * @symbol ?getMapEvergreenColor\@FoliageColor\@\@SAHMM\@Z
     */
    MCAPI static int getMapEvergreenColor(float, float); // NOLINT
    /**
     * @symbol ?getMapFoliageColor\@FoliageColor\@\@SAHMM\@Z
     */
    MCAPI static int getMapFoliageColor(float, float); // NOLINT
    /**
     * @symbol ?getMapGrassColor\@FoliageColor\@\@SAHMM\@Z
     */
    MCAPI static int getMapGrassColor(float, float); // NOLINT
    /**
     * @symbol ?getMapGrassColor\@FoliageColor\@\@SAHAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static int getMapGrassColor(class BlockSource&, class BlockPos const&); // NOLINT

    // private:

private:
    /**
     * @symbol ?FOLIAGE_BOTTOM_LEFT\@FoliageColor\@\@0VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const FOLIAGE_BOTTOM_LEFT; // NOLINT
    /**
     * @symbol ?FOLIAGE_BOTTOM_RIGHT\@FoliageColor\@\@0VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const FOLIAGE_BOTTOM_RIGHT; // NOLINT
    /**
     * @symbol ?FOLIAGE_TOP_LEFT\@FoliageColor\@\@0VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const FOLIAGE_TOP_LEFT; // NOLINT
    /**
     * @symbol ?FOLIAGE_TOP_RIGHT\@FoliageColor\@\@0VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const FOLIAGE_TOP_RIGHT; // NOLINT
    /**
     * @symbol ?GRASS_BOTTOM_LEFT\@FoliageColor\@\@0VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const GRASS_BOTTOM_LEFT; // NOLINT
    /**
     * @symbol ?GRASS_BOTTOM_RIGHT\@FoliageColor\@\@0VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const GRASS_BOTTOM_RIGHT; // NOLINT
    /**
     * @symbol ?GRASS_TOP_LEFT\@FoliageColor\@\@0VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const GRASS_TOP_LEFT; // NOLINT
    /**
     * @symbol ?GRASS_TOP_RIGHT\@FoliageColor\@\@0VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const GRASS_TOP_RIGHT; // NOLINT
    /**
     * @symbol
     * ?mFoliagePalettes\@FoliageColor\@\@0V?$array\@V?$unique_ptr\@V?$array\@H$0BAAAA\@\@std\@\@U?$default_delete\@V?$array\@H$0BAAAA\@\@std\@\@\@2\@\@std\@\@$04\@std\@\@A
     */
    MCAPI static class std::array<std::unique_ptr<class std::array<int, 65536>>, 5> mFoliagePalettes; // NOLINT
    /**
     * @symbol
     * ?mGrassPalettes\@FoliageColor\@\@0V?$array\@V?$unique_ptr\@V?$array\@H$0BAAAA\@\@std\@\@U?$default_delete\@V?$array\@H$0BAAAA\@\@std\@\@\@2\@\@std\@\@$04\@std\@\@A
     */
    MCAPI static class std::array<std::unique_ptr<class std::array<int, 65536>>, 5> mGrassPalettes; // NOLINT
};
