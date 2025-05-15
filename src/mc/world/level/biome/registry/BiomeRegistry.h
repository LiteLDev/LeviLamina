#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
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
class ResourcePackManager;
struct BiomeTagIDType;
struct BiomeTagSetIDType;
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
        ::ll::UntypedStorage<8, 8> mUnk621aa6;
        // NOLINTEND

    public:
        // prevent constructor by default
        LoadedBiomeDocument& operator=(LoadedBiomeDocument const&);
        LoadedBiomeDocument(LoadedBiomeDocument const&);
        LoadedBiomeDocument();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~LoadedBiomeDocument();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using BiomeNameLookupMap = ::std::unordered_map<uint64, ::std::unique_ptr<::Biome>>;

    struct BiomeComparator {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 984, ::WellKnownBiomeTags>                                    mWellKnownBiomeTags;
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
    ::ll::TypedStorage<4, 4, uint>                mNextCustomBiomeId;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>> mClosedForRegistration;
    ::ll::TypedStorage<1, 1, bool>                mLoadFromPacks;
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

    MCAPI void _initEngineBiome(::BaseGameVersion const& baseGameVersion);

    MCAPI void _initTagRegistry();

    MCAPI ::Biome& _register(::std::string const& name, ushort id);

    MCAPI void _save(::LevelStorage& levelStorage) const;

    MCFOLD void forEachBiome(::std::function<void(::Biome const&)> callback) const;

    MCFOLD void forEachNonConstBiome(::std::function<void(::Biome&)> callback);

    MCAPI ::std::vector<::Biome const*> getBiomesInDimension(::DimensionType type) const;

    MCAPI void initServerFromPacks(::ResourcePackManager& loader, ::IWorldRegistriesProvider& worldRegistries);

    MCAPI void initializeWithLevelStorageManagerConnector(::ILevelStorageManagerConnector& levelStorageManagerConnector
    );

    MCAPI void loadBiomeData(::LevelStorage const& levelStorage);

    MCAPI void loadBiomeTable(::LevelStorage const& levelStorage, ::BaseGameVersion const& baseGameVersion);

    MCAPI ::Biome const* lookupByHash(::HashedString const&) const;

    MCFOLD ::Biome* lookupByHash(::HashedString const& hash);

    MCAPI ::Biome const* lookupByName(::std::string const&) const;

    MCFOLD ::Biome* lookupByName(::std::string const& name);

    MCAPI void saveBiomeTable(::LevelStorage& levelStorage, ::BaseGameVersion const& baseGameVersion) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::BiomeRegistry::LoadedBiomeDocument _loadBiomeDocument(
        ::ResourcePackManager&   loader,
        ::std::string const&     biomeName,
        bool                     loadFromPacks,
        ::cereal::ReflectionCtx& ctx
    );
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
