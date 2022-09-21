/**
 * @file  MC/VanillaBiomes.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class VanillaBiomes.
 *
 */
class VanillaBiomes {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLABIOMES
public:
    class VanillaBiomes& operator=(class VanillaBiomes const &) = delete;
    VanillaBiomes(class VanillaBiomes const &) = delete;
    VanillaBiomes() = delete;
#endif

public:
    /**
     * @hash   -979456965
     * @symbol ?SWAMP_WATER_COLOR@VanillaBiomes@@2VColor@mce@@B
     */
    MCAPI static class mce::Color const SWAMP_WATER_COLOR;
    /**
     * @hash   -700261013
     * @symbol ?WATER_FOG_COLOR_SWAMP@VanillaBiomes@@2VColor@mce@@B
     */
    MCAPI static class mce::Color const WATER_FOG_COLOR_SWAMP;
    /**
     * @hash   -765033324
     * @symbol ?initBiomeComponents@VanillaBiomes@@SAXAEAVBiomeComponentFactory@@@Z
     */
    MCAPI static void initBiomeComponents(class BiomeComponentFactory &);
    /**
     * @hash   360675474
     * @symbol ?initBiomeDimensionComponent@VanillaBiomes@@SAXAEAVBiomeRegistry@@@Z
     */
    MCAPI static void initBiomeDimensionComponent(class BiomeRegistry &);
    /**
     * @hash   -1651549271
     * @symbol ?initBiomes@VanillaBiomes@@SAXAEAVBiomeRegistry@@AEBUSpawnSettings@@AEBVBaseGameVersion@@AEBVExperiments@@@Z
     */
    MCAPI static void initBiomes(class BiomeRegistry &, struct SpawnSettings const &, class BaseGameVersion const &, class Experiments const &);
    /**
     * @hash   1867327352
     * @symbol ?initClientOnlyComponents@VanillaBiomes@@SAXAEAVBiomeRegistry@@@Z
     */
    MCAPI static void initClientOnlyComponents(class BiomeRegistry &);
    /**
     * @hash   -292718920
     * @symbol ?initDefaultWorldGenComponents@VanillaBiomes@@SAXAEAVIWorldRegistriesProvider@@@Z
     */
    MCAPI static void initDefaultWorldGenComponents(class IWorldRegistriesProvider &);
    /**
     * @hash   354885515
     * @symbol ?initSurfaceBuilders@VanillaBiomes@@SAXAEAVSurfaceBuilderRegistry@@AEBVBaseGameVersion@@@Z
     */
    MCAPI static void initSurfaceBuilders(class SurfaceBuilderRegistry &, class BaseGameVersion const &);
    /**
     * @hash   1823612084
     * @symbol ?initVanillaBiomeTypeComponent@VanillaBiomes@@SAXAEAVBiomeRegistry@@@Z
     */
    MCAPI static void initVanillaBiomeTypeComponent(class BiomeRegistry &);
    /**
     * @hash   1873529224
     * @symbol ?mPlayerValidSpawns@VanillaBiomes@@2V?$set@HU?$less@H@std@@V?$allocator@H@2@@std@@A
     */
    MCAPI static class std::set<int, struct std::less<int>, class std::allocator<int>> mPlayerValidSpawns;
    /**
     * @hash   -1511833741
     * @symbol ?shutdownBiomes@VanillaBiomes@@SAXXZ
     */
    MCAPI static void shutdownBiomes();

};