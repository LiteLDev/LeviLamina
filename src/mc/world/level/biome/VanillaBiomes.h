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
    /**
     * @symbol ?initBiomeComponents\@VanillaBiomes\@\@SAXAEAVBiomeComponentFactory\@\@\@Z
     */
    MCAPI static void initBiomeComponents(class BiomeComponentFactory&); // NOLINT
    /**
     * @symbol ?initBiomeDimensionComponent\@VanillaBiomes\@\@SAXAEAVBiomeRegistry\@\@\@Z
     */
    MCAPI static void initBiomeDimensionComponent(class BiomeRegistry&); // NOLINT
    /**
     * @symbol
     * ?initBiomes\@VanillaBiomes\@\@SAXAEAVBiomeRegistry\@\@AEBUSpawnSettings\@\@AEBVBaseGameVersion\@\@AEBVExperiments\@\@\@Z
     */
    MCAPI static void
    initBiomes(class BiomeRegistry&, struct SpawnSettings const&, class BaseGameVersion const&, class Experiments const&); // NOLINT
    /**
     * @symbol ?initClientOnlyComponents\@VanillaBiomes\@\@SAXAEAVBiomeRegistry\@\@\@Z
     */
    MCAPI static void initClientOnlyComponents(class BiomeRegistry&); // NOLINT
    /**
     * @symbol ?initDefaultWorldGenComponents\@VanillaBiomes\@\@SAXAEAVIWorldRegistriesProvider\@\@\@Z
     */
    MCAPI static void initDefaultWorldGenComponents(class IWorldRegistriesProvider&); // NOLINT
    /**
     * @symbol ?initSurfaceBuilders\@VanillaBiomes\@\@SAXAEAVSurfaceBuilderRegistry\@\@AEBVBaseGameVersion\@\@\@Z
     */
    MCAPI static void initSurfaceBuilders(class SurfaceBuilderRegistry&, class BaseGameVersion const&); // NOLINT
    /**
     * @symbol ?initVanillaBiomeTypeComponent\@VanillaBiomes\@\@SAXAEAVBiomeRegistry\@\@\@Z
     */
    MCAPI static void initVanillaBiomeTypeComponent(class BiomeRegistry&); // NOLINT
    /**
     * @symbol ?shutdownBiomes\@VanillaBiomes\@\@SAXXZ
     */
    MCAPI static void shutdownBiomes(); // NOLINT
    /**
     * @symbol ?SWAMP_WATER_COLOR\@VanillaBiomes\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const SWAMP_WATER_COLOR; // NOLINT
    /**
     * @symbol ?WATER_FOG_COLOR_SWAMP\@VanillaBiomes\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const WATER_FOG_COLOR_SWAMP; // NOLINT
    /**
     * @symbol ?mPlayerValidSpawns\@VanillaBiomes\@\@2V?$set\@HU?$less\@H\@std\@\@V?$allocator\@H\@2\@\@std\@\@A
     */
    MCAPI static class std::set<int, struct std::less<int>, class std::allocator<int>> mPlayerValidSpawns; // NOLINT

    // private:
    /**
     * @symbol
     * ?addBiomeDimensionAttributeComponentHelper\@VanillaBiomes\@\@CAXAEAVBiomeRegistry\@\@AEBVHashedString\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI static void
    addBiomeDimensionAttributeComponentHelper(class BiomeRegistry&, class HashedString const&, class AutomaticID<class Dimension, int>); // NOLINT

private:
};
