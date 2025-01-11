#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SharedPtr.h"
#include "mc/common/WeakPtr.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"

// auto generated forward declare list
// clang-format off
class ActorInfoRegistry;
class BaseGameVersion;
class Block;
class BlockDefinitionGroup;
class BlockLegacy;
class CompoundTag;
class CreativeItemRegistry;
class Experiments;
class HashedString;
class IPackLoadContext;
class Item;
class ItemRegistryRef;
class ResourcePackManager;
struct ItemParseContext;
struct ItemRegistryComplexAlias;
struct ItemTag;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Bedrock::Threading { class Mutex; }
namespace Core { class Path; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ItemRegistry : public ::std::enable_shared_from_this<::ItemRegistry> {
public:
    // ItemRegistry inner types declare
    // clang-format off
    struct ItemAlias;
    struct ItemHashAlias;
    struct ItemLoadResult;
    struct LoadedItemAsset;
    // clang-format on

    // ItemRegistry inner types define
    using ItemRegistryMap = ::std::vector<::SharedPtr<::Item>>;

    struct LoadedItemAsset {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16>  mUnk3d8ae0;
        ::ll::UntypedStorage<8, 112> mUnkb0fb71;
        ::ll::UntypedStorage<8, 16>  mUnk48eade;
        // NOLINTEND

    public:
        // prevent constructor by default
        LoadedItemAsset& operator=(LoadedItemAsset const&);
        LoadedItemAsset(LoadedItemAsset const&);
        LoadedItemAsset();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~LoadedItemAsset();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    using CreativeItemsServerInitCallbackSignature =
        void(::ItemRegistryRef, ::ActorInfoRegistry*, ::BlockDefinitionGroup*, ::CreativeItemRegistry*, bool, ::BaseGameVersion const&, ::Experiments const&);

    struct ItemAlias {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 48>  mUnk2254ff;
        ::ll::UntypedStorage<8, 120> mUnk541114;
        // NOLINTEND

    public:
        // prevent constructor by default
        ItemAlias& operator=(ItemAlias const&);
        ItemAlias(ItemAlias const&);
        ItemAlias();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~ItemAlias();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct ItemHashAlias {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>   mUnk627c3a;
        ::ll::UntypedStorage<8, 120> mUnk99d309;
        // NOLINTEND

    public:
        // prevent constructor by default
        ItemHashAlias& operator=(ItemHashAlias const&);
        ItemHashAlias(ItemHashAlias const&);
        ItemHashAlias();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~ItemHashAlias();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    struct ItemLoadResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 152> mUnkbbb797;
        ::ll::UntypedStorage<8, 32>  mUnkb57c73;
        // NOLINTEND

    public:
        // prevent constructor by default
        ItemLoadResult& operator=(ItemLoadResult const&);
        ItemLoadResult(ItemLoadResult const&);
        ItemLoadResult();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~ItemLoadResult();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::cereal::ReflectionCtx>>                       mCerealContext;
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
        ::std::unique_ptr<::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::MultiThreaded>>>
                                                                              mFinishedInitPublisher;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::std::atomic<int>>>          mCanUpdateTags;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedPtr<::Item>>>             mDeadItemRegistry;
    ::ll::TypedStorage<8, 120, ::BaseGameVersion>                             mWorldBaseGameVersion;
    ::ll::TypedStorage<1, 1, bool>                                            mCheckForItemWorldCompatibility;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Bedrock::Threading::Mutex>> mCompatibilityCheckMutex;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CreativeItemRegistry>>       mCreativeItemRegistry;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ItemRegistry();

    MCAPI void
    _loadItemDefinition(::ItemRegistry::LoadedItemAsset const& loadedItemAsset, ::ItemParseContext& parseContext);

    MCAPI void addItemToTagMap(::Item const& item);

    MCAPI void clearItemAndCreativeItemRegistry();

    MCAPI void digestServerItemComponents(::std::vector<::std::pair<::std::string, ::CompoundTag>> const& items);

    MCAPI void finishedRegistration(::Experiments const& experiments);

    MCAPI ::std::vector<::std::reference_wrapper<::HashedString const>> const&
    getComplexAliasSplitNames(::HashedString const& oldName) const;

    MCAPI ::WeakPtr<::Item> getItem(short id);

    MCAPI ::WeakPtr<::Item> getItem(::HashedString const& id);

    MCAPI ::std::pair<::HashedString, int> getNameFromAlias(::HashedString const& name, int aux) const;

    MCAPI void
    init(::Experiments const& experiments, ::BaseGameVersion const& baseGameVersion, ::ResourcePackManager* rpm);

    MCAPI void initCreativeItemsServer(
        ::ActorInfoRegistry*    actorInfoRegistry,
        ::BlockDefinitionGroup* blockDefinitionGroup,
        bool                    isClient,
        ::Experiments const&    experiments,
        ::std::function<
            void(::ItemRegistryRef, ::ActorInfoRegistry*, ::BlockDefinitionGroup*, ::CreativeItemRegistry*, bool, ::BaseGameVersion const&, ::Experiments const&)>
            registerCallback
    );

    MCAPI bool isComplexAlias(::HashedString const& oldName) const;

    MCAPI ::WeakPtr<::Item> lookupByName(::HashedString const& inString) const;

    MCAPI ::WeakPtr<::Item> lookupByName(int& inOutItemAux, ::std::string_view inString) const;

    MCAPI ::WeakPtr<::Item> lookupByNameNoAlias(::std::string_view inString) const;

    MCAPI ::WeakPtr<::Item> lookupByNameNoParsing(int& inOutItemAux, ::HashedString const& fullName) const;

    MCAPI void
    registerAlias(::HashedString const& alias, ::HashedString const& name, ::BaseGameVersion const& fromVersion);

    MCAPI ::WeakPtr<::Item>
    registerComplexAlias(::HashedString const& alias, ::ItemRegistryComplexAlias const& complexAlias);

    MCAPI void registerItem(::SharedPtr<::Item> item);

    MCAPI void registerLegacyID(::HashedString const& name, short id);

    MCAPI void registerLegacyMapping(
        ::HashedString const&    alias,
        ::HashedString const&    name,
        ::BaseGameVersion const& fromVersion
    );

    MCAPI void setCheckForItemWorldCompatibility(bool value);

    MCAPI void unregisterItem(::HashedString const& itemName);

    MCAPI ::std::vector<::std::string>
    validateServerItemComponents(::std::vector<::std::pair<::std::string, ::CompoundTag>> const& items);

    MCAPI ~ItemRegistry();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::vector<::ItemRegistry::LoadedItemAsset> _loadAllItemAssets(
        ::ResourcePackManager const&   resourcePackManager,
        ::Experiments const&           experiments,
        ::cereal::ReflectionCtx const& ctx
    );

    MCAPI static ::ItemRegistry::ItemLoadResult _tryLoadItemAsset(
        ::std::string                         jsonData,
        ::std::shared_ptr<::IPackLoadContext> packLoadContext,
        ::Core::Path const&                   filenameWithExtension,
        ::cereal::ReflectionCtx const&        ctx
    );

    MCAPI static short getBlockItemId(::Block const& block);

    MCAPI static short getBlockItemId(::BlockLegacy const& block);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static bool const& LOG_CREATIVE_ITEM_REGISTRY_DURING_INIT();

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
