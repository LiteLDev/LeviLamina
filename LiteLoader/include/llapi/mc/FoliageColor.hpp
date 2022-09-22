/**
 * @file  FoliageColor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -2071195426
     * @symbol ?getBirchColor@FoliageColor@@SAHMM@Z
     */
    MCAPI static int getBirchColor(float, float);
    /**
     * @hash   -150083978
     * @symbol ?getDefaultColor@FoliageColor@@SAHXZ
     */
    MCAPI static int getDefaultColor();
    /**
     * @hash   344303950
     * @symbol ?getEvergreenColor@FoliageColor@@SAHMM@Z
     */
    MCAPI static int getEvergreenColor(float, float);
    /**
     * @hash   1127772942
     * @symbol ?getFoliageColor@FoliageColor@@SAHMM@Z
     */
    MCAPI static int getFoliageColor(float, float);
    /**
     * @hash   269654280
     * @symbol ?getFoliageColor@FoliageColor@@SAHW4PaletteName@1@MM@Z
     */
    MCAPI static int getFoliageColor(enum FoliageColor::PaletteName, float, float);
    /**
     * @hash   -1029864688
     * @symbol ?getMapBirchColor@FoliageColor@@SAHMM@Z
     */
    MCAPI static int getMapBirchColor(float, float);
    /**
     * @hash   276453888
     * @symbol ?getMapEvergreenColor@FoliageColor@@SAHMM@Z
     */
    MCAPI static int getMapEvergreenColor(float, float);
    /**
     * @hash   631889872
     * @symbol ?getMapFoliageColor@FoliageColor@@SAHMM@Z
     */
    MCAPI static int getMapFoliageColor(float, float);
    /**
     * @hash   1647806068
     * @symbol ?getMapGrassColor@FoliageColor@@SAHAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI static int getMapGrassColor(class BlockSource &, class BlockPos const &);
    /**
     * @hash   1023702784
     * @symbol ?getMapGrassColor@FoliageColor@@SAHMM@Z
     */
    MCAPI static int getMapGrassColor(float, float);

//private:

private:
    /**
     * @hash   -49028985
     * @symbol ?FOLIAGE_BOTTOM_LEFT@FoliageColor@@0VColor@mce@@B
     */
    MCAPI static class mce::Color const FOLIAGE_BOTTOM_LEFT;
    /**
     * @hash   -1676178928
     * @symbol ?FOLIAGE_BOTTOM_RIGHT@FoliageColor@@0VColor@mce@@B
     */
    MCAPI static class mce::Color const FOLIAGE_BOTTOM_RIGHT;
    /**
     * @hash   -2007942871
     * @symbol ?FOLIAGE_TOP_LEFT@FoliageColor@@0VColor@mce@@B
     */
    MCAPI static class mce::Color const FOLIAGE_TOP_LEFT;
    /**
     * @hash   2022922606
     * @symbol ?FOLIAGE_TOP_RIGHT@FoliageColor@@0VColor@mce@@B
     */
    MCAPI static class mce::Color const FOLIAGE_TOP_RIGHT;
    /**
     * @hash   -1769559772
     * @symbol ?GRASS_BOTTOM_LEFT@FoliageColor@@0VColor@mce@@B
     */
    MCAPI static class mce::Color const GRASS_BOTTOM_LEFT;
    /**
     * @hash   823786643
     * @symbol ?GRASS_BOTTOM_RIGHT@FoliageColor@@0VColor@mce@@B
     */
    MCAPI static class mce::Color const GRASS_BOTTOM_RIGHT;
    /**
     * @hash   1554089260
     * @symbol ?GRASS_TOP_LEFT@FoliageColor@@0VColor@mce@@B
     */
    MCAPI static class mce::Color const GRASS_TOP_LEFT;
    /**
     * @hash   778614091
     * @symbol ?GRASS_TOP_RIGHT@FoliageColor@@0VColor@mce@@B
     */
    MCAPI static class mce::Color const GRASS_TOP_RIGHT;
    /**
     * @hash   -2014268500
     * @symbol ?mFoliagePalettes@FoliageColor@@0V?$array@V?$unique_ptr@V?$array@H$0BAAAA@@std@@U?$default_delete@V?$array@H$0BAAAA@@std@@@2@@std@@$04@std@@A
     */
    MCAPI static class std::array<std::unique_ptr<class std::array<int, 65536>>, 5> mFoliagePalettes;
    /**
     * @hash   -2099373775
     * @symbol ?mGrassPalettes@FoliageColor@@0V?$array@V?$unique_ptr@V?$array@H$0BAAAA@@std@@U?$default_delete@V?$array@H$0BAAAA@@std@@@2@@std@@$04@std@@A
     */
    MCAPI static class std::array<std::unique_ptr<class std::array<int, 65536>>, 5> mGrassPalettes;

};