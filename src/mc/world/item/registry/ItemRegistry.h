#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SharedPtr.h"
#include "mc/common/WeakPtr.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/util/BaseGameVersion.h"
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class ActorInfoRegistry;
class BlockDefinitionGroup;
class CreativeItemRegistry;
class Experiments;
class HashedString;
class IContainerRegistryAccess;
class IContainerRegistryTracker;
class IDynamicContainerSerialization;
class IMinecraftEventing;
class IPackLoadContext;
class ItemRegistryRef;
class LevelData;
class LinkedAssetValidator;
class ResourcePackManager;
struct ItemData;
struct ItemParseContext;
struct ItemRegistryComplexAlias;
struct ItemTag;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Bedrock::Threading { class Mutex; }
namespace Core { class Path; }
namespace PuvLoadData { struct LoadResultWithTiming; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ItemRegistry : public ::std::enable_shared_from_this<::ItemRegistry> {
public:
    // ItemRegistry inner types declare
    // clang-format off
    struct ItemAlias;
    struct ItemHashAlias;
    struct LoadedItemAsset;
    struct ItemLoadResult;
    // clang-format on

    // ItemRegistry inner types define
    struct ItemAlias {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 48> mUnk2254ff;
        ::ll::UntypedStorage<8, 32> mUnk541114;
        // NOLINTEND

    public:
        // prevent constructor by default
        ItemAlias& operator=(ItemAlias const&);
        ItemAlias(ItemAlias const&);
        ItemAlias();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ItemAlias();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct ItemHashAlias {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk627c3a;
        ::ll::UntypedStorage<8, 32> mUnk99d309;
        // NOLINTEND

    public:
        // prevent constructor by default
        ItemHashAlias& operator=(ItemHashAlias const&);
        ItemHashAlias(ItemHashAlias const&);
        ItemHashAlias();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ItemHashAlias(uint64 nameHash, ::BaseGameVersion const& version);

        MCNAPI ::ItemRegistry::ItemHashAlias& operator=(::ItemRegistry::ItemHashAlias&&);

        MCNAPI ~ItemHashAlias();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(uint64 nameHash, ::BaseGameVersion const& version);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct LoadedItemAsset {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk3d8ae0;
        ::ll::UntypedStorage<8, 24> mUnkb0fb71;
        ::ll::UntypedStorage<8, 16> mUnk48eade;
        ::ll::UntypedStorage<8, 32> mUnkb103c2;
        // NOLINTEND

    public:
        // prevent constructor by default
        LoadedItemAsset& operator=(LoadedItemAsset const&);
        LoadedItemAsset(LoadedItemAsset const&);
        LoadedItemAsset();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI LoadedItemAsset(::ItemRegistry::LoadedItemAsset&&);

        MCNAPI ~LoadedItemAsset();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::ItemRegistry::LoadedItemAsset&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct ItemLoadResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 96> mUnkbbb797;
        ::ll::UntypedStorage<8, 32> mUnkb57c73;
        // NOLINTEND

    public:
        // prevent constructor by default
        ItemLoadResult& operator=(ItemLoadResult const&);
        ItemLoadResult(ItemLoadResult const&);
        ItemLoadResult();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ItemLoadResult();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using CreativeItemsServerInitCallbackSignature = void(
        ::ItemRegistryRef,
        ::BlockDefinitionGroup const&,
        ::CreativeItemRegistry*,
        ::BaseGameVersion const&,
        ::Experiments const&,
        ::ResourcePackManager const&,
        ::cereal::ReflectionCtx const&,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> const,
        ::IMinecraftEventing&
    );

    using ItemRegistryMap = ::std::vector<::SharedPtr<::Item>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::cereal::ReflectionCtx>>>      mCerealContext;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::LinkedAssetValidator>>              mValidator;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedPtr<::Item>>>                              mItemRegistry;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, ::WeakPtr<::Item>>>                    mIdToItemMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::WeakPtr<::Item>>>         mNameToItemMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::WeakPtr<::Item>>>         mTileNamespaceToItemMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::WeakPtr<::Item>>>         mTileItemNameToItemMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::ItemRegistry::ItemAlias>> mItemAliasLookupMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint64, ::ItemRegistry::ItemHashAlias>>     mReverseAliasLookupMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint64, ::ItemRegistry::ItemHashAlias>>
        mReverseFullNameAliasLookupMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::ItemRegistryComplexAlias>> mComplexAliasLookupMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<short, ::HashedString>>                      mLegacyIDToNameMap;
    ::ll::TypedStorage<2, 2, short>                                                             mMaxItemID;
    ::ll::TypedStorage<8, 24, ::std::vector<::HashedString>>                                    mAttachableDefinitions;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ItemTag, ::std::unordered_set<::Item const*>>> mTagToItemsMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::Item const*> const>                            mEmptyItemSet;
    ::ll::TypedStorage<1, 1, bool>                                      mServerInitializingCreativeItems;
    ::ll::TypedStorage<1, 1, bool>                                      mIsInitialized;
    ::ll::TypedStorage<8, 64, ::std::function<void(::ItemRegistryRef)>> mExtraItemInitCallback;
    ::ll::TypedStorage<
        8,
        8,
        ::std::unique_ptr<::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>>
                                                                              mFinishedInitServerPublisher;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::std::atomic<int>>>          mCanUpdateTags;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedPtr<::Item>>>             mDeadItemRegistry;
    ::ll::TypedStorage<8, 32, ::BaseGameVersion>                              mWorldBaseGameVersion;
    ::ll::TypedStorage<1, 1, bool>                                            mCheckForItemWorldCompatibility;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Bedrock::Threading::Mutex>> mCompatibilityCheckMutex;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CreativeItemRegistry>>       mCreativeItemRegistry;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ItemRegistry();

    MCAPI void _initServerData(
        ::std::vector<::ItemRegistry::LoadedItemAsset> const& allItemAssets,
        ::ItemParseContext&                                   parseContext,
        ::IMinecraftEventing&                                 eventing
    );

    MCAPI ::PuvLoadData::LoadResultWithTiming
    _loadItemDefinition(::ItemRegistry::LoadedItemAsset const& loadedItemAsset, ::ItemParseContext& parseContext);

    MCAPI void addItemToTagMap(::Item const& item);

    MCAPI void alterAvailableCreativeItems(::ActorInfoRegistry* registry, ::LevelData& levelData);

    MCAPI void clearItemAndCreativeItemRegistry();

    MCAPI_C void digestServerItemComponents(::std::vector<::ItemData> const& items);

    MCAPI_C void findAllAttachableDefinitions();

    MCAPI void finishedRegistration();

    MCAPI ::std::vector<::std::reference_wrapper<::HashedString const>> const&
    getComplexAliasSplitNames(::HashedString const& oldName) const;

    MCAPI ::WeakPtr<::Item> getItem(short id);

    MCAPI_C short getLegacyIDFromName(::HashedString const& name);

    MCAPI ::std::pair<::HashedString, int> getNameFromAlias(::HashedString const& name, int aux) const;

    MCAPI ::HashedString getNameFromLegacyID(short id);

    MCAPI_C void initClient(
        ::std::vector<::ItemData> const& serverItemData,
        ::Experiments const&             experiments,
        ::BaseGameVersion const&         baseGameVersion
    );

    MCAPI_C void initClientData(::ResourcePackManager& resourcePackManager, ::Experiments const& experiments);

    MCAPI void initCreativeItemsServer(
        ::BlockDefinitionGroup const&                      blockDefinitionGroup,
        ::Experiments const&                               experiments,
        ::ResourcePackManager const&                       resourcePackManager,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator,
        ::IMinecraftEventing&                              eventing,
        ::std::function<void(
            ::ItemRegistryRef,
            ::BlockDefinitionGroup const&,
            ::CreativeItemRegistry*,
            ::BaseGameVersion const&,
            ::Experiments const&,
            ::ResourcePackManager const&,
            ::cereal::ReflectionCtx const&,
            ::Bedrock::NonOwnerPointer<::LinkedAssetValidator>,
            ::IMinecraftEventing&
        )>                                                 registerCallback
    );

    MCAPI void initServer(
        ::Experiments const&                               experiments,
        ::BaseGameVersion const&                           baseGameVersion,
        ::ResourcePackManager*                             rpm,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator,
        ::IMinecraftEventing&                              eventing
    );

    MCAPI ::WeakPtr<::Item> lookupByName(int& inOutItemAux, ::std::string_view inString) const;

    MCAPI ::WeakPtr<::Item> lookupByNameNoAlias(::std::string_view inString) const;

    MCAPI ::WeakPtr<::Item> lookupByNameNoParsing(int& inOutItemAux, ::HashedString const& fullName) const;

    MCAPI_C void matchServerItemIds(::std::vector<::ItemData> const& serverItemData);

    MCAPI void onLevelInit(
        ::WeakRef<::IDynamicContainerSerialization> containerSerialization,
        ::WeakRef<::IContainerRegistryAccess>       containerAccess,
        ::WeakRef<::IContainerRegistryTracker>      containerTracker
    );

    MCAPI void
    registerAlias(::HashedString const& alias, ::HashedString const& name, ::BaseGameVersion const& fromVersion);

    MCAPI ::WeakPtr<::Item>
    registerComplexAlias(::HashedString const& alias, ::ItemRegistryComplexAlias const& complexAlias);

    MCAPI void registerItem(::SharedPtr<::Item> item);

    MCAPI void registerLegacyMapping(
        ::HashedString const&    alias,
        ::HashedString const&    name,
        ::BaseGameVersion const& fromVersion
    );

    MCAPI void registerValidatorIdentifier(::std::string const& str);

    MCAPI void setCheckForItemWorldCompatibility(bool value);

    MCAPI_C void setItemId(::HashedString const& itemName, short itemId, bool isComponentBased);

    MCAPI void unregisterItem(::HashedString const& itemName);

    MCAPI ::std::vector<::std::string> validateServerItemComponents(::std::vector<::ItemData> const& items);

    MCAPI ~ItemRegistry();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::vector<::ItemRegistry::LoadedItemAsset> _loadAllItemAssets(
        ::ResourcePackManager const&                       resourcePackManager,
        ::Experiments const&                               experiments,
        ::cereal::ReflectionCtx const&                     ctx,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator
    );

    MCAPI static ::ItemRegistry::ItemLoadResult _tryLoadItemAsset(
        ::std::string                         jsonData,
        ::std::shared_ptr<::IPackLoadContext> packLoadContext,
        ::Core::Path const&                   filenameWithExtension,
        ::cereal::ReflectionCtx const&        ctx,
        ::std::string const&                  packName
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& MINECRAFT_NAMESPACE();
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
};
