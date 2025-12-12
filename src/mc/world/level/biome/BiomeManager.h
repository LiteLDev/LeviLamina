#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/world/level/biome/glue/BiomeJsonDocumentGlue.h"

// auto generated forward declare list
// clang-format off
class AutomaticFeatureRules;
class BiomeRegistry;
class IWorldRegistriesProvider;
class LevelSeed64;
class LevelStorage;
class LinkedAssetValidator;
class ResourcePackManager;
namespace Bedrock::PubSub { class Subscription; }
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
        ::IWorldRegistriesProvider&                        worldRegistries,
        ::LevelSeed64                                      levelSeed,
        ::LevelStorage&                                    levelStorage,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> linkedAssetValidator,
        ::std::unordered_map<::std::string, ::std::unique_ptr<::BiomeJsonDocumentGlue::ResolvedBiomeData>>&
            biomeIdToResolvedData
    );

    MCNAPI void initializeBiomeRegistryAndAutomaticFeatureRulesOnServer(
        ::IWorldRegistriesProvider&                        worldRegistries,
        ::ResourcePackManager&                             resourcePackManager,
        ::LevelSeed64                                      levelSeed,
        ::LevelStorage&                                    levelStorage,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> linkedAssetValidator,
        ::std::unordered_map<::std::string, ::std::unique_ptr<::BiomeJsonDocumentGlue::ResolvedBiomeData>>&
            biomeIdToResolvedData
    );

    MCNAPI_C ::Bedrock::PubSub::Subscription
    subscribeToLevelBiomesRegistered(::std::function<void(::BiomeRegistry&)> callback);

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
