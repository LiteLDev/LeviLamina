#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class BiomeComponentFactory;
class BiomeRegistry;
class Experiments;
class IWorldRegistriesProvider;
class SurfaceBuilderRegistry;
struct SpawnSettings;
namespace mce { class Color; }
// clang-format on

class VanillaBiomes {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void initAdditionalCommonComponents(::BiomeRegistry& registry);

    MCAPI static void initBiomeComponentGlue(::BiomeComponentFactory& factory);

    MCAPI static void initBiomeDimensionComponent(::BiomeRegistry& registry);

    MCAPI static void initBiomes(
        ::BiomeRegistry&         registry,
        ::SpawnSettings const&   spawnSettings,
        ::BaseGameVersion const& baseGameVersion,
        ::Experiments const&     experiments
    );

    MCAPI static void initDefaultWorldGenComponents(::IWorldRegistriesProvider& registries);

    MCAPI static void initSurfaceBuilders(::SurfaceBuilderRegistry& registry, ::BaseGameVersion const& baseGameVersion);

    MCAPI static void initVanillaBiomeTypeComponent(::BiomeRegistry& registry);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::mce::Color const& SWAMP_WATER_COLOR();

    MCAPI static ::mce::Color const& WATER_FOG_COLOR_SWAMP();

    MCAPI static ::std::set<ushort>& mPlayerValidSpawns();
    // NOLINTEND
};
