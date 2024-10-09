#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/world/level/biome/registry/BiomeComponentFactory.h"

class BiomeManager {
public:
    // prevent constructor by default
    BiomeManager& operator=(BiomeManager const&);
    BiomeManager(BiomeManager const&);
    BiomeManager();

public:
    // NOLINTBEGIN
    MCAPI BiomeManager(
        class OwnerPtr<class BiomeRegistry>          biomes,
        ::BiomeComponentFactory::FactoryScope        factoryScope,
        bool                                         clientSideChunkGenerationEnabled,
        std::unique_ptr<class AutomaticFeatureRules> automaticFeatureRules
    );

    MCAPI class BiomeComponentFactory& getBiomeComponentFactory();

    MCAPI class BiomeRegistry& getBiomeRegistry();

    MCAPI class SurfaceBuilderRegistry& getSurfaceBuilderRegistry();

    MCAPI void initializeBiomeRegistryAndAutomaticFeatureRulesOnServer(
        class Experiments const&        experiments,
        class IWorldRegistriesProvider& worldRegistries,
        class ResourcePackManager&      resourcePackManager,
        class LevelSeed64               levelSeed
    );

    MCAPI void initializeWithLevelStorageManager(class LevelStorageManager& levelStorageManager);

    MCAPI void loadBiomeData(class LevelStorage& levelStorage);

    MCAPI void sendLevelBiomesRegistered();

    MCAPI ~BiomeManager();

    MCAPI static bool use3DBiomeMaps(class BaseGameVersion const& baseGameVersion);

    // NOLINTEND
};
