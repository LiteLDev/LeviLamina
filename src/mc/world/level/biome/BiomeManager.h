#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtr.h"
#include "mc/world/level/biome/registry/BiomeComponentFactory.h"

class BiomeManager {
public:
    // prevent constructor by default
    BiomeManager& operator=(BiomeManager const&);
    BiomeManager(BiomeManager const&);
    BiomeManager();

public:
    // NOLINTBEGIN
    MCAPI
    BiomeManager(class OwnerPtr<class BiomeRegistry>, ::BiomeComponentFactory::FactoryScope, bool, std::unique_ptr<class AutomaticFeatureRules>);

    MCAPI class BiomeComponentFactory& getBiomeComponentFactory();

    MCAPI class BiomeRegistry& getBiomeRegistry();

    MCAPI class SurfaceBuilderRegistry& getSurfaceBuilderRegistry();

    MCAPI void initializeBiomeRegistryAndAutomaticFeatureRulesOnServer(
        class Experiments const&,
        class IWorldRegistriesProvider&,
        class ResourcePackManager&,
        class LevelSeed64
    );

    MCAPI void initializeWithLevelStorageManager(class LevelStorageManager&);

    MCAPI void loadBiomeData(class LevelStorage&);

    MCAPI void sendLevelBiomesRegistered();

    MCAPI ~BiomeManager();

    MCAPI static bool use3DBiomeMaps(class BaseGameVersion const&);

    // NOLINTEND
};
