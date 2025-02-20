#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/world/level/biome/registry/BiomeComponentFactory.h"

// auto generated forward declare list
// clang-format off
class AutomaticFeatureRules;
class BaseGameVersion;
class BiomeRegistry;
class Experiments;
class IWorldRegistriesProvider;
class LevelSeed64;
class LevelStorage;
class ResourcePackManager;
// clang-format on

class BiomeManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mUnk8968b3;
    ::ll::UntypedStorage<8, 16>  mUnk618caa;
    ::ll::UntypedStorage<8, 16>  mUnk5f2b2c;
    ::ll::UntypedStorage<8, 8>   mUnk6f2312;
    ::ll::UntypedStorage<8, 64>  mUnk3a5e8f;
    ::ll::UntypedStorage<8, 128> mUnk524485;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeManager& operator=(BiomeManager const&);
    BiomeManager(BiomeManager const&);
    BiomeManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BiomeManager(
        ::OwnerPtr<::BiomeRegistry>                biomes,
        ::BiomeComponentFactory::FactoryScope      factoryScope,
        bool                                       clientSideChunkGenerationEnabled,
        ::std::unique_ptr<::AutomaticFeatureRules> automaticFeatureRules
    );

    MCAPI void initializeBiomeRegistryAndAutomaticFeatureRulesOnServer(
        ::Experiments const&        experiments,
        ::IWorldRegistriesProvider& worldRegistries,
        ::ResourcePackManager&      resourcePackManager,
        ::LevelSeed64               levelSeed,
        ::LevelStorage&             levelStorage,
        ::BaseGameVersion const&    baseGameVersion
    );

    MCAPI ~BiomeManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::OwnerPtr<::BiomeRegistry>                biomes,
        ::BiomeComponentFactory::FactoryScope      factoryScope,
        bool                                       clientSideChunkGenerationEnabled,
        ::std::unique_ptr<::AutomaticFeatureRules> automaticFeatureRules
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
