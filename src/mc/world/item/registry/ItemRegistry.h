#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SharedPtr.h"
#include "mc/common/WeakPtr.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/resource_processing/util/MinecraftDocumentInput.h"
#include "mc/resources/PackLoadInfo.h"
#include "mc/util/BaseGameVersion.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/ItemTag.h"
#include "mc/world/item/registry/ItemRegistrationOrder.h"

// auto generated forward declare list
// clang-format off
class ActorInfoRegistry;
class BlockDefinitionGroup;
class CreativeItemRegistry;
class Experiments;
class IMinecraftEventing;
class ItemEventResponseFactory;
class ItemRegistryRef;
class LevelData;
class LinkedAssetValidator;
class ResourcePackManager;
struct ItemData;
struct ItemIconInfo;
struct ItemRegistryComplexAlias;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Bedrock::Threading { class Mutex; }
namespace ItemLoaderTraits { struct Loader; }
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
    struct ParsedName;
    // clang-format on

    // ItemRegistry inner types define
    struct ItemAlias {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 48, ::HashedString>    currentName;
        ::ll::TypedStorage<8, 32, ::BaseGameVersion> sinceVersion;
        // NOLINTEND
    };

    struct ItemHashAlias {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, uint64>             aliasName;
        ::ll::TypedStorage<8, 32, ::BaseGameVersion> sinceVersion;
        // NOLINTEND
    };

    struct LoadedItemAsset {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 272, ::Bedrock::Resources::MinecraftDocumentInput> mDocumentInput;
        ::ll::TypedStorage<1, 1, ::PackType>                                     mPackType;
        ::ll::TypedStorage<8, 96, ::PackLoadInfo>                                mPackLoadInfo;
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ItemEventResponseFactory>> mEventResponseFactory;
        ::ll::TypedStorage<8, 32, ::std::string>                                 mLoadedPackName;
        ::ll::TypedStorage<1, 1, bool>                                           mIsComponentBased;
        // NOLINTEND
    };

    struct ItemLoadResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 440, ::std::optional<::ItemRegistry::LoadedItemAsset>> mLoadedItemAsset;
        ::ll::TypedStorage<8, 32, ::std::string>                                     mError;
        // NOLINTEND
    };

    struct ParsedName {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> mItemIdentifier;
        ::ll::TypedStorage<8, 32, ::std::string> mParsedNamespace;
        ::ll::TypedStorage<8, 32, ::std::string> mParsedName;
        ::ll::TypedStorage<4, 4, int>            mAux;
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

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::cereal::ReflectionCtx>>>      mCerealContext;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::LinkedAssetValidator>>              mValidator;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::ItemLoaderTraits::Loader>>>   mDocumentLoader;
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
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::std::atomic<int>>> mCanUpdateTags;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedPtr<::Item>>>    mDeadItemRegistry;
    ::ll::TypedStorage<1, 1, bool>                                   mAddToPreRegistry;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::SharedPtr<::Item>>>
                                                                              mHardcodedVanillaItemPreRegistry;
    ::ll::TypedStorage<1, 1, ::ItemRegistrationOrder>                         mItemRegistrationOrder;
    ::ll::TypedStorage<8, 32, ::BaseGameVersion>                              mWorldBaseGameVersion;
    ::ll::TypedStorage<1, 1, bool>                                            mCheckForItemWorldCompatibility;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Bedrock::Threading::Mutex>> mCompatibilityCheckMutex;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CreativeItemRegistry>>       mCreativeItemRegistry;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ItemRegistry();

    MCAPI void _preRegisterItem(::HashedString const& itemName, ::SharedPtr<::Item> item);

    MCAPI void alterAvailableCreativeItems(::ActorInfoRegistry* registry, ::LevelData& levelData);

    MCAPI void clearItemAndCreativeItemRegistry();

#ifdef LL_PLAT_C
    MCAPI void findAllAttachableDefinitions();
#endif

    MCAPI ::std::vector<::std::reference_wrapper<::HashedString const>> const&
    getComplexAliasSplitNames(::HashedString const& oldName) const;

    MCFOLD ::WeakPtr<::Item> getItem(::HashedString const& id);

    MCAPI ::WeakPtr<::Item> getItem(short id);

#ifdef LL_PLAT_C
    MCAPI void initClient(
        ::std::vector<::ItemData> const& serverItemData,
        ::Experiments const&             experiments,
        ::BaseGameVersion const&         baseGameVersion
    );

    MCAPI void initClientData(
        ::ResourcePackManager& resourcePackManager,
        ::Experiments const&   experiments,
        ::std::optional<::ItemIconInfo> (*iconFactory)(::std::string const&, int)
    );
#endif

    MCAPI bool isComplexAlias(::HashedString const& oldName) const;

    MCAPI ::WeakPtr<::Item> lookupByName(int& inOutItemAux, ::std::string_view inString) const;

    MCAPI ::WeakPtr<::Item> lookupByName(int& outItemId, int& inOutItemAux, ::std::string_view inString) const;

    MCAPI ::WeakPtr<::Item> lookupByNameNoAlias(::std::string_view inString) const;

    MCAPI ::WeakPtr<::Item> lookupByNameNoParsing(int& inOutItemAux, ::HashedString const& fullName) const;

    MCFOLD ::WeakPtr<::Item> lookupByVanillaName(::HashedString const& inString) const;

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

    MCAPI uint64 remapToFullLegacyNameByHash(uint64 newHash);

    MCAPI uint64 remapToLegacyNameByHash(uint64 newHash);

    MCAPI void shutdown();

    MCAPI void unregisterItem(::HashedString const& itemName);

    MCAPI ::std::vector<::std::string> validateServerItemComponents(::std::vector<::ItemData> const& items);

    MCAPI ~ItemRegistry();
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
