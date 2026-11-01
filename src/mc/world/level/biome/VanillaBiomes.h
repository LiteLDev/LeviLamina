#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/SpawnBiomeType.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class BiomeRegistry;
class Experiments;
class IWorldRegistriesProvider;
class SurfaceBuilderRegistry;
struct BiomeIdType;
struct BiomeJsonDocumentGlue;
struct SpawnSettings;
// clang-format on

class VanillaBiomes {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void initBiomeComponentGlue(::BiomeJsonDocumentGlue& biomeJsonDocumentGlue);

    MCNAPI static void initBiomeDimensionComponent(::BiomeRegistry& registry);

    MCNAPI static void initBiomes(
        ::BiomeRegistry&         registry,
        ::SpawnSettings const&   spawnSettings,
        ::BaseGameVersion const& baseGameVersion,
        ::Experiments const&     experiments
    );

    MCNAPI static void initDefaultWorldGenComponents(::IWorldRegistriesProvider& registries);

    MCNAPI static void
    initSurfaceBuilders(::SurfaceBuilderRegistry& registry, ::BaseGameVersion const& baseGameVersion);

    MCNAPI static void initVanillaBiomeTypeComponent(::BiomeRegistry& registry);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::set<::BiomeIdType>& mPlayerValidSpawns();

    MCNAPI static ::SpawnBiomeType& mSpawnBiomeType();
    // NOLINTEND
};
