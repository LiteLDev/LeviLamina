/**
 * @file  VanillaBiomes.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   75375075
     * @symbol  ?SWAMP_WATER_COLOR\@VanillaBiomes\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const SWAMP_WATER_COLOR;
    /**
     * @hash   354571027
     * @symbol  ?WATER_FOG_COLOR_SWAMP\@VanillaBiomes\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const WATER_FOG_COLOR_SWAMP;
    /**
     * @hash   -659338700
     * @symbol  ?initBiomeComponents\@VanillaBiomes\@\@SAXAEAVBiomeComponentFactory\@\@\@Z
     */
    MCAPI static void initBiomeComponents(class BiomeComponentFactory &);
    /**
     * @hash   467769314
     * @symbol  ?initBiomeDimensionComponent\@VanillaBiomes\@\@SAXAEAVBiomeRegistry\@\@\@Z
     */
    MCAPI static void initBiomeDimensionComponent(class BiomeRegistry &);
    /**
     * @hash   -1546731079
     * @symbol  ?initBiomes\@VanillaBiomes\@\@SAXAEAVBiomeRegistry\@\@AEBUSpawnSettings\@\@AEBVBaseGameVersion\@\@AEBVExperiments\@\@\@Z
     */
    MCAPI static void initBiomes(class BiomeRegistry &, struct SpawnSettings const &, class BaseGameVersion const &, class Experiments const &);
    /**
     * @hash   1972376184
     * @symbol  ?initClientOnlyComponents\@VanillaBiomes\@\@SAXAEAVBiomeRegistry\@\@\@Z
     */
    MCAPI static void initClientOnlyComponents(class BiomeRegistry &);
    /**
     * @hash   -189130808
     * @symbol  ?initDefaultWorldGenComponents\@VanillaBiomes\@\@SAXAEAVIWorldRegistriesProvider\@\@\@Z
     */
    MCAPI static void initDefaultWorldGenComponents(class IWorldRegistriesProvider &);
    /**
     * @hash   460103483
     * @symbol  ?initSurfaceBuilders\@VanillaBiomes\@\@SAXAEAVSurfaceBuilderRegistry\@\@AEBVBaseGameVersion\@\@\@Z
     */
    MCAPI static void initSurfaceBuilders(class SurfaceBuilderRegistry &, class BaseGameVersion const &);
    /**
     * @hash   1928876180
     * @symbol  ?initVanillaBiomeTypeComponent\@VanillaBiomes\@\@SAXAEAVBiomeRegistry\@\@\@Z
     */
    MCAPI static void initVanillaBiomeTypeComponent(class BiomeRegistry &);
    /**
     * @hash   -1314220000
     * @symbol  ?mPlayerValidSpawns\@VanillaBiomes\@\@2V?$set\@HU?$less\@H\@std\@\@V?$allocator\@H\@2\@\@std\@\@A
     */
    MCAPI static class std::set<int, struct std::less<int>, class std::allocator<int>> mPlayerValidSpawns;
    /**
     * @hash   -1409952365
     * @symbol  ?shutdownBiomes\@VanillaBiomes\@\@SAXXZ
     */
    MCAPI static void shutdownBiomes();

//private:
    /**
     * @hash   -1890994024
     * @symbol  ?addBiomeDimensionAttributeComponentHelper\@VanillaBiomes\@\@CAXAEAVBiomeRegistry\@\@AEBVHashedString\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI static void addBiomeDimensionAttributeComponentHelper(class BiomeRegistry &, class HashedString const &, class AutomaticID<class Dimension, int>);

private:

};