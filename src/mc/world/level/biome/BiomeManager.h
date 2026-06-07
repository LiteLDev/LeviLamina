#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/game_refs/OwnerPtr.h"

// auto generated forward declare list
// clang-format off
class AutomaticFeatureRules;
class BaseGameVersion;
class BiomeComponentFactory;
class BiomeRegistry;
class ILevelStorageManagerConnector;
class IWorldRegistriesProvider;
class LevelSeed64;
class LevelStorage;
class LinkedAssetValidator;
class ResourcePackManager;
class SurfaceBuilderRegistry;
struct BiomeDecorationFeature;
struct BiomeJsonDocumentGlueResolvedBiomeData;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class BiomeManager {
public:
    // BiomeManager inner types define
    using onLevelBiomesRegisteredSignature = void(::BiomeRegistry&);

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::OwnerPtr<::BiomeRegistry>>>               mBiomes;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::OwnerPtr<::BiomeComponentFactory>>>       mBiomeComponentFactory;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::OwnerPtr<::SurfaceBuilderRegistry>>>      mSurfaceBuilders;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::AutomaticFeatureRules>>> mAutomaticFeatureRules;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::BiomeDecorationFeature>>
        mBiomeDecorationFeatureMap;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::BiomeRegistry&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnLevelBiomesRegisteredPublisher;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    BiomeManager(::OwnerPtr<::BiomeRegistry> biomes, ::std::unique_ptr<::AutomaticFeatureRules> automaticFeatureRules);

    MCAPI void _initializeServerBiomeRegistry(
        ::IWorldRegistriesProvider&                        worldRegistries,
        ::LevelSeed64                                      levelSeed,
        ::LevelStorage&                                    levelStorage,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> linkedAssetValidator,
        ::std::unordered_map<::std::string, ::std::unique_ptr<::BiomeJsonDocumentGlueResolvedBiomeData>>&
            biomeIdToResolvedData
    );

    MCFOLD ::BiomeComponentFactory& getBiomeComponentFactory();

    MCFOLD ::std::unordered_map<::HashedString, ::BiomeDecorationFeature> const& getBiomeDecorationFeatures() const;

    MCFOLD ::BiomeRegistry& getBiomeRegistry();

    MCFOLD ::SurfaceBuilderRegistry& getSurfaceBuilderRegistry();

    MCAPI void initializeBiomeRegistryAndAutomaticFeatureRulesOnServer(
        ::IWorldRegistriesProvider&                        worldRegistries,
        ::ResourcePackManager&                             resourcePackManager,
        ::LevelSeed64                                      levelSeed,
        ::LevelStorage&                                    levelStorage,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> linkedAssetValidator,
        ::std::unordered_map<::std::string, ::std::unique_ptr<::BiomeJsonDocumentGlueResolvedBiomeData>>&
            biomeIdToResolvedData
    );

    MCAPI void
    initializeWithLevelStorageManagerConnector(::ILevelStorageManagerConnector& levelStorageManagerConnector);

    MCAPI void loadBiomeData(::LevelStorage& levelStorage);

#ifdef LL_PLAT_C
    MCAPI void sendLevelBiomesRegistered();

    MCAPI ::Bedrock::PubSub::Subscription
    subscribeToLevelBiomesRegistered(::std::function<void(::BiomeRegistry&)> callback);
#endif

    MCAPI ~BiomeManager();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool use3DBiomeMaps(::BaseGameVersion const& baseGameVersion);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::OwnerPtr<::BiomeRegistry> biomes, ::std::unique_ptr<::AutomaticFeatureRules> automaticFeatureRules);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
