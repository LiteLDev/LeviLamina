#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/OwnerPtr.h"

// auto generated forward declare list
// clang-format off
class AutomaticFeatureRules;
class BaseGameVersion;
class BiomeRegistry;
class Experiments;
class IWorldRegistriesProvider;
class LevelSeed64;
class LevelStorage;
class LinkedAssetValidator;
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
    ::ll::UntypedStorage<8, 128> mUnk8597ca;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeManager& operator=(BiomeManager const&);
    BiomeManager(BiomeManager const&);
    BiomeManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    BiomeManager(::OwnerPtr<::BiomeRegistry> biomes, ::std::unique_ptr<::AutomaticFeatureRules> automaticFeatureRules);

    MCNAPI void _initializeServerBiomeRegistry(
        ::Experiments const&                               experiments,
        ::IWorldRegistriesProvider&                        worldRegistries,
        ::ResourcePackManager const&                       resourcePackManager,
        ::LevelSeed64                                      levelSeed,
        ::LevelStorage&                                    levelStorage,
        ::BaseGameVersion const&                           baseGameVersion,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> linkedAssetValidator
    );

    MCNAPI void initializeBiomeRegistryAndAutomaticFeatureRulesOnServer(
        ::Experiments const&                               experiments,
        ::IWorldRegistriesProvider&                        worldRegistries,
        ::ResourcePackManager&                             resourcePackManager,
        ::LevelSeed64                                      levelSeed,
        ::LevelStorage&                                    levelStorage,
        ::BaseGameVersion const&                           baseGameVersion,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> linkedAssetValidator
    );

    MCNAPI ~BiomeManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::OwnerPtr<::BiomeRegistry> biomes, ::std::unique_ptr<::AutomaticFeatureRules> automaticFeatureRules);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
