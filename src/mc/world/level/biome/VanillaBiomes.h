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
    MCAPI static void initAdditionalCommonComponents(class BiomeRegistry& registry);

    MCAPI static void initBiomeComponentGlue(class BiomeComponentFactory& factory);

    MCAPI static void initBiomeComponents(class BiomeComponentFactory& factory);

    MCAPI static void initBiomeDimensionComponent(class BiomeRegistry& registry);

    MCAPI static void initBiomes(
        class BiomeRegistry&         registry,
        struct SpawnSettings const&  spawnSettings,
        class BaseGameVersion const& baseGameVersion,
        class Experiments const&     experiments
    );

    MCAPI static void initDefaultWorldGenComponents(class IWorldRegistriesProvider& registries);

    MCAPI static void
    initSurfaceBuilders(class SurfaceBuilderRegistry& registry, class BaseGameVersion const& baseGameVersion);

    MCAPI static void initVanillaBiomeTypeComponent(class BiomeRegistry& registry);

    MCAPI static void shutdownBiomes();

    MCAPI static class mce::Color const SWAMP_WATER_COLOR;

    MCAPI static class mce::Color const WATER_FOG_COLOR_SWAMP;

    MCAPI static std::set<int> mPlayerValidSpawns;

    // NOLINTEND
};
