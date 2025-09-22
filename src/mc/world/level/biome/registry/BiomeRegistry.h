#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/biome/components/vanilla/VanillaBiomeTypes.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/platform/brstd/flat_set.h"
#include "mc/util/IDType.h"
#include "mc/util/TagRegistry.h"
#include "mc/world/level/biome/registry/WellKnownBiomeTags.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class Biome;
class Dimension;
class HashedString;
class ILevelStorageManagerConnector;
class IWorldRegistriesProvider;
class LevelStorage;
class LinkedAssetValidator;
class ResourcePackManager;
struct BiomeIdType;
struct BiomeTagIDType;
struct BiomeTagSetIDType;
namespace SharedTypes::v1_21_100 { struct BiomeJsonDocument; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class BiomeRegistry : public ::Bedrock::EnableNonOwnerReferences {
public:
    // BiomeRegistry inner types declare
    // clang-format off
    struct BiomeComparator;
    struct LoadedBiomeDocument;
    // clang-format on

    // BiomeRegistry inner types define
    struct LoadedBiomeDocument {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnka38b0d;
        // NOLINTEND

    public:
        // prevent constructor by default
        LoadedBiomeDocument& operator=(LoadedBiomeDocument const&);
        LoadedBiomeDocument(LoadedBiomeDocument const&);
        LoadedBiomeDocument();
    };

    using BiomeNameLookupMap = ::std::unordered_map<uint64, ::std::unique_ptr<::Biome>>;

    struct BiomeComparator {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 600, ::WellKnownBiomeTags>                                    mWellKnownBiomeTags;
    ::ll::TypedStorage<1, 1, bool>                                                      mSurfaceBuildersResolved;
    ::ll::TypedStorage<1, 1, bool>                                                      mClientInitialized;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint64, ::std::unique_ptr<::Biome>>> mBiomesByName;
    ::ll::TypedStorage<
        8,
        40,
        ::brstd::flat_set<
            ::gsl::not_null<::Biome*>,
            ::BiomeRegistry::BiomeComparator,
            ::std::vector<::gsl::not_null<::Biome*>>>>
        mBiomesById;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::BiomeIdType const, ::std::string const&>>>
                                                  mRemovedBiomesIdAndFullName;
    ::ll::TypedStorage<4, 4, uint>                mNextCustomBiomeId;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>> mClosedForRegistration;
    ::ll::TypedStorage<1, 1, bool>                mLoadFromAllPacks;
    ::ll::TypedStorage<8, 128, ::TagRegistry<::IDType<::BiomeTagIDType>, ::IDType<::BiomeTagSetIDType>>> mTagRegistry;
    ::ll::TypedStorage<8, 8, ::Biome*>                                                                   mEmptyBiome;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnSaveSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnLevelStorageManagerStartLeaveGameSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeRegistry();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BiomeRegistry() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BiomeRegistry(::BaseGameVersion const& baseGameVersion);

    MCAPI void _initTagRegistry();

    MCAPI ::Biome& _register(::std::string_view name, ::BiomeIdType id);

    MCAPI void _save(::LevelStorage& levelStorage) const;

    MCFOLD void forEachBiome(::std::function<void(::Biome const&)> callback) const;

    MCFOLD void forEachNonConstBiome(::std::function<void(::Biome&)> callback);

    MCAPI ::std::vector<::Biome const*> getBiomesInDimension(::DimensionType type) const;

    MCAPI void initServerFromPacks(
        ::ResourcePackManager const&                       loader,
        ::IWorldRegistriesProvider&                        worldRegistries,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> linkedAssetValidator
    );

    MCAPI void
    initializeWithLevelStorageManagerConnector(::ILevelStorageManagerConnector& levelStorageManagerConnector);

    MCAPI ::std::unordered_map<::std::string, ::std::unique_ptr<::SharedTypes::v1_21_100::BiomeJsonDocument>>
    loadAllBiomeDocuments(
        ::ResourcePackManager const&                       loader,
        bool                                               loadFromAllPacks,
        ::cereal::ReflectionCtx&                           ctx,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> linkedAssetValidator
    );

    MCAPI void loadBiomeData(::LevelStorage const& levelStorage);

    MCAPI void loadBiomeTable(::LevelStorage const& levelStorage, ::BaseGameVersion const& baseGameVersion);

    MCAPI ::Biome* lookupByHash(::HashedString const& hash);

    MCAPI ::Biome const* lookupById(::BiomeIdType) const;

    MCFOLD ::Biome* lookupById(::BiomeIdType id);

    MCAPI ::Biome const* lookupByName(::std::string const& name) const;

    MCAPI ::Biome* lookupByName(::std::string const& name);

    MCAPI void saveBiomeTable(::LevelStorage& levelStorage, ::BaseGameVersion const& baseGameVersion) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BaseGameVersion const& baseGameVersion);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
