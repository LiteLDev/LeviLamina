#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class VanillaBiomes {
public:
    // prevent constructor by default
    VanillaBiomes& operator=(VanillaBiomes const&);
    VanillaBiomes(VanillaBiomes const&);
    VanillaBiomes();

public:
    // NOLINTBEGIN
    // symbol: ?initAdditionalCommonComponents@VanillaBiomes@@SAXAEAVBiomeRegistry@@@Z
    MCAPI static void initAdditionalCommonComponents(class BiomeRegistry&);

    // symbol: ?initBiomeComponents@VanillaBiomes@@SAXAEAVBiomeComponentFactory@@@Z
    MCAPI static void initBiomeComponents(class BiomeComponentFactory& factory);

    // symbol: ?initBiomeDimensionComponent@VanillaBiomes@@SAXAEAVBiomeRegistry@@@Z
    MCAPI static void initBiomeDimensionComponent(class BiomeRegistry& registry);

    // symbol:
    // ?initBiomes@VanillaBiomes@@SAXAEAVBiomeRegistry@@AEBUSpawnSettings@@AEBVBaseGameVersion@@AEBVExperiments@@@Z
    MCAPI static void initBiomes(
        class BiomeRegistry&         registry,
        struct SpawnSettings const&  spawnSettings,
        class BaseGameVersion const& baseGameVersion,
        class Experiments const&     experiments
    );

    // symbol: ?initDefaultWorldGenComponents@VanillaBiomes@@SAXAEAVIWorldRegistriesProvider@@@Z
    MCAPI static void initDefaultWorldGenComponents(class IWorldRegistriesProvider& registries);

    // symbol: ?initSurfaceBuilders@VanillaBiomes@@SAXAEAVSurfaceBuilderRegistry@@AEBVBaseGameVersion@@@Z
    MCAPI static void
    initSurfaceBuilders(class SurfaceBuilderRegistry& registry, class BaseGameVersion const& baseGameVersion);

    // symbol: ?initVanillaBiomeTypeComponent@VanillaBiomes@@SAXAEAVBiomeRegistry@@@Z
    MCAPI static void initVanillaBiomeTypeComponent(class BiomeRegistry& registry);

    // symbol: ?shutdownBiomes@VanillaBiomes@@SAXXZ
    MCAPI static void shutdownBiomes();

    // symbol: ?SWAMP_WATER_COLOR@VanillaBiomes@@2VColor@mce@@B
    MCAPI static class mce::Color const SWAMP_WATER_COLOR;

    // symbol: ?WATER_FOG_COLOR_SWAMP@VanillaBiomes@@2VColor@mce@@B
    MCAPI static class mce::Color const WATER_FOG_COLOR_SWAMP;

    // symbol: ?mPlayerValidSpawns@VanillaBiomes@@2V?$set@HU?$less@H@std@@V?$allocator@H@2@@std@@A
    MCAPI static std::set<int> mPlayerValidSpawns;

    // NOLINTEND
};
