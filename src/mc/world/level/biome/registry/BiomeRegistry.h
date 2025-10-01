#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
class WellKnownTagID;
struct BiomeIdType;
struct BiomeTagIDType;
struct BiomeTagSetIDType;
namespace SharedTypes::v1_21_110 { struct BiomeJsonDocument; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class BiomeRegistry : public ::Bedrock::EnableNonOwnerReferences {
public:
    // BiomeRegistry inner types declare
    // clang-format off
    struct BiomeComparator;
    struct LoadedBiomeDocument;
    struct SeasonTextureRowSettings;
    // clang-format on

    // BiomeRegistry inner types define
    struct LoadedBiomeDocument {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk4dc404;
        // NOLINTEND

    public:
        // prevent constructor by default
        LoadedBiomeDocument& operator=(LoadedBiomeDocument const&);
        LoadedBiomeDocument(LoadedBiomeDocument const&);
        LoadedBiomeDocument();
    };

    struct SeasonTextureRowSettings {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk660be0;
        ::ll::UntypedStorage<4, 4> mUnk222da8;
        ::ll::UntypedStorage<4, 4> mUnk4607e5;
        // NOLINTEND

    public:
        // prevent constructor by default
        SeasonTextureRowSettings& operator=(SeasonTextureRowSettings const&);
        SeasonTextureRowSettings(SeasonTextureRowSettings const&);
        SeasonTextureRowSettings();
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
    ::ll::TypedStorage<8, 128, ::TagRegistry<::IDType<::BiomeTagIDType>, ::IDType<::BiomeTagSetIDType>>> mTagRegistry;
    ::ll::TypedStorage<8, 8, ::Biome*>                                                                   mEmptyBiome;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnSaveSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnLevelStorageManagerStartLeaveGameSubscription;
    ::ll::TypedStorage<8, 24, ::std::vector<::BiomeRegistry::SeasonTextureRowSettings>> mSeasonTextureRowSettings;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BiomeRegistry() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BiomeRegistry();

    MCAPI void _initTagRegistry();

    MCAPI ::Biome& _register(::std::string_view name, ::BiomeIdType id);

    MCAPI void _save(::LevelStorage& levelStorage) const;

    MCAPI bool biomeHasTag(::Biome const& biome, ::HashedString const& id) const;

    MCAPI bool biomeHasTag(::Biome const& biome, uint64 tagHash) const;

    MCFOLD bool biomeHasTag(::Biome const& biome, ::WellKnownTagID const& tagID) const;

    MCAPI bool biomeHasTag(::Biome const&, ::IDType<::BiomeTagIDType> const&) const;

    MCFOLD void forEachBiome(::std::function<void(::Biome const&)> callback) const;

    MCFOLD void forEachNonConstBiome(::std::function<void(::Biome&)> callback);

    MCAPI ::std::vector<::Biome const*> getBiomesInDimension(::DimensionType type) const;

    MCAPI void initServerFromPacks(
        ::ResourcePackManager const&                       loader,
        ::IWorldRegistriesProvider&                        worldRegistries,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> linkedAssetValidator,
        ::BaseGameVersion const&                           baseGameVersion
    );

    MCAPI void
    initializeWithLevelStorageManagerConnector(::ILevelStorageManagerConnector& levelStorageManagerConnector);

    MCAPI ::std::unordered_map<::std::string, ::std::unique_ptr<::SharedTypes::v1_21_110::BiomeJsonDocument>>
    loadAllBiomeDocuments(
        ::ResourcePackManager const&                       loader,
        ::cereal::ReflectionCtx&                           ctx,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> linkedAssetValidator,
        ::BaseGameVersion const&                           baseGameVersion
    );

    MCAPI void loadBiomeData(::LevelStorage const& levelStorage);

    MCAPI void loadBiomeTable(::LevelStorage const& levelStorage);

    MCAPI ::Biome* lookupByHash(::HashedString const& hash);

    MCAPI ::Biome const* lookupById(::BiomeIdType) const;

    MCFOLD ::Biome* lookupById(::BiomeIdType id);

    MCAPI ::Biome const* lookupByName(::std::string const& name) const;

    MCAPI ::Biome* lookupByName(::std::string const& name);

    MCAPI void removeFailedToLoadBiomes();

    MCAPI void saveBiomeTable(::LevelStorage& levelStorage) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
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
