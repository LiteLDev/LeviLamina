/**
 * @file  FoliageColor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FoliageColor.
 *
 */
class FoliageColor {

#define AFTER_EXTRA
// Add Member There
public:
enum class PaletteName;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FOLIAGECOLOR
public:
    class FoliageColor& operator=(class FoliageColor const &) = delete;
    FoliageColor(class FoliageColor const &) = delete;
    FoliageColor() = delete;
#endif

public:
    /**
     * @hash   -1388793170
     * @symbol  ?getBirchColor\@FoliageColor\@\@SAHMM\@Z
     */
    MCAPI static int getBirchColor(float, float);
    /**
     * @hash   532318278
     * @symbol  ?getDefaultColor\@FoliageColor\@\@SAHXZ
     */
    MCAPI static int getDefaultColor();
    /**
     * @hash   1026706206
     * @symbol  ?getEvergreenColor\@FoliageColor\@\@SAHMM\@Z
     */
    MCAPI static int getEvergreenColor(float, float);
    /**
     * @hash   1810175198
     * @symbol  ?getFoliageColor\@FoliageColor\@\@SAHMM\@Z
     */
    MCAPI static int getFoliageColor(float, float);
    /**
     * @hash   952056536
     * @symbol  ?getFoliageColor\@FoliageColor\@\@SAHW4PaletteName\@1\@MM\@Z
     */
    MCAPI static int getFoliageColor(enum class FoliageColor::PaletteName, float, float);
    /**
     * @hash   -347462432
     * @symbol  ?getMapBirchColor\@FoliageColor\@\@SAHMM\@Z
     */
    MCAPI static int getMapBirchColor(float, float);
    /**
     * @hash   958856144
     * @symbol  ?getMapEvergreenColor\@FoliageColor\@\@SAHMM\@Z
     */
    MCAPI static int getMapEvergreenColor(float, float);
    /**
     * @hash   1314292128
     * @symbol  ?getMapFoliageColor\@FoliageColor\@\@SAHMM\@Z
     */
    MCAPI static int getMapFoliageColor(float, float);
    /**
     * @hash   -1964758972
     * @symbol  ?getMapGrassColor\@FoliageColor\@\@SAHAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static int getMapGrassColor(class BlockSource &, class BlockPos const &);
    /**
     * @hash   1706105040
     * @symbol  ?getMapGrassColor\@FoliageColor\@\@SAHMM\@Z
     */
    MCAPI static int getMapGrassColor(float, float);

//private:

private:
    /**
     * @hash   1044150799
     * @symbol  ?FOLIAGE_BOTTOM_LEFT\@FoliageColor\@\@0VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const FOLIAGE_BOTTOM_LEFT;
    /**
     * @hash   -582999144
     * @symbol  ?FOLIAGE_BOTTOM_RIGHT\@FoliageColor\@\@0VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const FOLIAGE_BOTTOM_RIGHT;
    /**
     * @hash   -914763087
     * @symbol  ?FOLIAGE_TOP_LEFT\@FoliageColor\@\@0VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const FOLIAGE_TOP_LEFT;
    /**
     * @hash   -1178864906
     * @symbol  ?FOLIAGE_TOP_RIGHT\@FoliageColor\@\@0VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const FOLIAGE_TOP_RIGHT;
    /**
     * @hash   -676379988
     * @symbol  ?GRASS_BOTTOM_LEFT\@FoliageColor\@\@0VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const GRASS_BOTTOM_LEFT;
    /**
     * @hash   1916966427
     * @symbol  ?GRASS_BOTTOM_RIGHT\@FoliageColor\@\@0VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const GRASS_BOTTOM_RIGHT;
    /**
     * @hash   -1647698252
     * @symbol  ?GRASS_TOP_LEFT\@FoliageColor\@\@0VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const GRASS_TOP_LEFT;
    /**
     * @hash   1871793875
     * @symbol  ?GRASS_TOP_RIGHT\@FoliageColor\@\@0VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const GRASS_TOP_RIGHT;
    /**
     * @hash   -1151959356
     * @symbol  ?mFoliagePalettes\@FoliageColor\@\@0V?$array\@V?$unique_ptr\@V?$array\@H$0BAAAA\@\@std\@\@U?$default_delete\@V?$array\@H$0BAAAA\@\@std\@\@\@2\@\@std\@\@$04\@std\@\@A
     */
    MCAPI static class std::array<std::unique_ptr<class std::array<int, 65536>>, 5> mFoliagePalettes;
    /**
     * @hash   -1237064631
     * @symbol  ?mGrassPalettes\@FoliageColor\@\@0V?$array\@V?$unique_ptr\@V?$array\@H$0BAAAA\@\@std\@\@U?$default_delete\@V?$array\@H$0BAAAA\@\@std\@\@\@2\@\@std\@\@$04\@std\@\@A
     */
    MCAPI static class std::array<std::unique_ptr<class std::array<int, 65536>>, 5> mGrassPalettes;

};