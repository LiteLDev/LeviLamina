#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class VanillaBiomes {

public:
    // prevent constructor by default
    VanillaBiomes& operator=(VanillaBiomes const&) = delete;
    VanillaBiomes(VanillaBiomes const&)            = delete;
    VanillaBiomes()                                = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?initBiomeComponents\@VanillaBiomes\@\@SAXAEAVBiomeComponentFactory\@\@\@Z
     */
    MCAPI static void initBiomeComponents(class BiomeComponentFactory&);
    /**
     * @symbol ?initBiomeDimensionComponent\@VanillaBiomes\@\@SAXAEAVBiomeRegistry\@\@\@Z
     */
    MCAPI static void initBiomeDimensionComponent(class BiomeRegistry&);
    /**
     * @symbol
     * ?initBiomes\@VanillaBiomes\@\@SAXAEAVBiomeRegistry\@\@AEBUSpawnSettings\@\@AEBVBaseGameVersion\@\@AEBVExperiments\@\@\@Z
     */
    MCAPI static void
    initBiomes(class BiomeRegistry&, struct SpawnSettings const&, class BaseGameVersion const&, class Experiments const&);
    /**
     * @symbol ?initClientOnlyComponents\@VanillaBiomes\@\@SAXAEAVBiomeRegistry\@\@\@Z
     */
    MCAPI static void initClientOnlyComponents(class BiomeRegistry&);
    /**
     * @symbol ?initDefaultWorldGenComponents\@VanillaBiomes\@\@SAXAEAVIWorldRegistriesProvider\@\@\@Z
     */
    MCAPI static void initDefaultWorldGenComponents(class IWorldRegistriesProvider&);
    /**
     * @symbol ?initSurfaceBuilders\@VanillaBiomes\@\@SAXAEAVSurfaceBuilderRegistry\@\@AEBVBaseGameVersion\@\@\@Z
     */
    MCAPI static void initSurfaceBuilders(class SurfaceBuilderRegistry&, class BaseGameVersion const&);
    /**
     * @symbol ?initVanillaBiomeTypeComponent\@VanillaBiomes\@\@SAXAEAVBiomeRegistry\@\@\@Z
     */
    MCAPI static void initVanillaBiomeTypeComponent(class BiomeRegistry&);
    /**
     * @symbol ?shutdownBiomes\@VanillaBiomes\@\@SAXXZ
     */
    MCAPI static void shutdownBiomes();
    /**
     * @symbol ?SWAMP_WATER_COLOR\@VanillaBiomes\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const SWAMP_WATER_COLOR;
    /**
     * @symbol ?WATER_FOG_COLOR_SWAMP\@VanillaBiomes\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const WATER_FOG_COLOR_SWAMP;
    /**
     * @symbol ?mPlayerValidSpawns\@VanillaBiomes\@\@2V?$set\@HU?$less\@H\@std\@\@V?$allocator\@H\@2\@\@std\@\@A
     */
    MCAPI static std::set<int> mPlayerValidSpawns;
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?addBiomeDimensionAttributeComponentHelper\@VanillaBiomes\@\@CAXAEAVBiomeRegistry\@\@AEBVHashedString\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI static void
    addBiomeDimensionAttributeComponentHelper(class BiomeRegistry&, class HashedString const&, class AutomaticID<class Dimension, int>);
    // NOLINTEND
};
