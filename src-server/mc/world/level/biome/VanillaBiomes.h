#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/level/SpawnBiomeType.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class BiomeRegistry;
class Dimension;
class Experiments;
class IWorldRegistriesProvider;
struct BiomeIdType;
struct BiomeJsonDocumentGlue;
struct SpawnSettings;
// clang-format on

class VanillaBiomes {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void addBiomeDimensionAttributeComponentHelper(::BiomeRegistry& registry, ::BiomeIdType id, ::DimensionType dimensionType);

    MCAPI static void initBiomeComponentGlue(::BiomeJsonDocumentGlue& biomeJsonDocumentGlue);

    MCAPI static void initBiomeDimensionComponent(::BiomeRegistry& registry);

    MCAPI static void initBiomes(::BiomeRegistry& registry, ::SpawnSettings const& spawnSettings, ::BaseGameVersion const& baseGameVersion, ::Experiments const&);

    MCAPI static void initDefaultWorldGenComponents(::IWorldRegistriesProvider& registries);

    MCAPI static void initVanillaBiomeTypeComponent(::BiomeRegistry& registry);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::set<::BiomeIdType>& mPlayerValidSpawns();

    MCAPI static ::SpawnBiomeType& mSpawnBiomeType();
    // NOLINTEND

};
