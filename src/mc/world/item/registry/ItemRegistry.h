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
#include "mc/world/item/registry/ItemRegistrationState.h"
#include "mc/world/item/registry/ItemRegistryRef.h"

// auto generated forward declare list
// clang-format off
class ActorInfoRegistry;
class BlockDefinitionGroup;
class CreativeItemRegistry;
class Experiments;
class IEducationOptions;
class IMinecraftEventing;
class ItemEventResponseFactory;
class ItemRegistryRef;
class LevelData;
class LinkedAssetValidator;
class ResourcePackManager;
struct ItemData;
struct ItemIconInfo;
struct ItemParseContext;
struct ItemRegistryComplexAlias;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace ItemLoaderTraits { struct Loader; }
namespace Puv { class Input; }
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
        ::IMinecraftEventing&,
        ::IEducationOptions const&
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
    ::ll::TypedStorage<1, 1, ::ItemRegistrationState>                   mItemRegistrationState;
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
    ::ll::TypedStorage<8, 32, ::BaseGameVersion>                        mWorldBaseGameVersion;
    ::ll::TypedStorage<1, 1, bool>                                      mCheckForItemWorldCompatibility;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::std::mutex>>          mCompatibilityCheckMutex;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CreativeItemRegistry>> mCreativeItemRegistry;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemRegistry();

#ifdef LL_PLAT_C
    MCNAPI void _bindBetaItemTypes(::Experiments const& experiments);

    MCNAPI void _movePreRegistryToMainRegistry();

    MCNAPI void _populateVanillaItemVersionMap(
        ::ItemRegistry::LoadedItemAsset const& loadedItemAsset,
        ::ItemParseContext&                    parseContext
    );
#endif

    MCNAPI void _preRegisterItem(::HashedString const& itemName, ::SharedPtr<::Item> item);

#ifdef LL_PLAT_C
    MCNAPI ::WeakPtr<::Item>
    _registerOrPromoteItem(::HashedString const& itemName, bool isComponentBased, ::cereal::ReflectionCtx const& ctx);
#endif

    MCNAPI ::ItemRegistry::ParsedName _tryParseItemName(::Puv::Input const& input);

    MCNAPI ::ItemRegistryRef::LoadedItem
    _tryRegisterAndInitItem(::ItemRegistry::LoadedItemAsset const& loadedItemAsset, ::ItemParseContext& parseContext);

    MCNAPI void addItemToTagMap(::Item const& item);

    MCNAPI void alterAvailableCreativeItems(::ActorInfoRegistry* registry, ::LevelData& levelData);

#ifdef LL_PLAT_C
    MCNAPI void buildClientRegistryFromServer(
        ::std::vector<::ItemData> const& serverItemData,
        ::Experiments const&             experiments,
        ::BaseGameVersion const&         baseGameVersion,
        ::IEducationOptions const&       educationOptions
    );
#endif

#ifdef LL_PLAT_S
    MCNAPI void buildServerRegistry(
        ::Experiments const&                               experiments,
        ::BaseGameVersion const&                           baseGameVersion,
        ::IEducationOptions const&                         educationOptions,
        ::ResourcePackManager*                             rpm,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator,
        ::IMinecraftEventing&                              eventing
    );
#endif

    MCNAPI void clearItemAndCreativeItemRegistry();

#ifdef LL_PLAT_C
    MCNAPI void findAllAttachableDefinitions();

    MCNAPI void finishedRegistration(::Experiments const& experiments);
#endif

    MCNAPI ::std::vector<::std::reference_wrapper<::HashedString const>> const&
    getComplexAliasSplitNames(::HashedString const& oldName) const;

    MCFOLD ::WeakPtr<::Item> getItem(::HashedString const& id);

    MCAPI ::WeakPtr<::Item> getItem(short id);

    MCNAPI ::std::pair<::HashedString, int> getNameFromAlias(::HashedString const& name, int aux) const;

    MCNAPI bool isComplexAlias(::HashedString const& oldName) const;

    MCNAPI ::WeakPtr<::Item> lookupByName(int& inOutItemAux, ::std::string_view inString) const;

    MCNAPI ::WeakPtr<::Item> lookupByName(int& outItemId, int& inOutItemAux, ::std::string_view inString) const;

    MCAPI ::WeakPtr<::Item> lookupByNameNoAlias(::std::string_view inString) const;

    MCNAPI ::WeakPtr<::Item> lookupByNameNoParsing(int& inOutItemAux, ::HashedString const& fullName) const;

    MCNAPI ::WeakPtr<::Item> lookupByVanillaName(::HashedString const& inString) const;

#ifdef LL_PLAT_C
    MCNAPI void populateClientItemData(
        ::ResourcePackManager& resourcePackManager,
        ::Experiments const&   experiments,
        ::std::optional<::ItemIconInfo> (*iconFactory)(::std::string const&, int)
    );
#endif

    MCNAPI void
    registerAlias(::HashedString const& alias, ::HashedString const& name, ::BaseGameVersion const& fromVersion);

    MCNAPI ::WeakPtr<::Item>
    registerComplexAlias(::HashedString const& alias, ::ItemRegistryComplexAlias const& complexAlias);

    MCAPI void registerItem(::SharedPtr<::Item> item);

    MCNAPI void registerLegacyMapping(
        ::HashedString const&    alias,
        ::HashedString const&    name,
        ::BaseGameVersion const& fromVersion
    );

    MCNAPI void registerValidatorIdentifier(::std::string const& str);

    MCNAPI uint64 remapToFullLegacyNameByHash(uint64 newHash);

    MCNAPI uint64 remapToLegacyNameByHash(uint64 newHash);

    MCNAPI void shutdown();

    MCAPI void unregisterItem(::HashedString const& itemName);

    MCNAPI ::std::vector<::std::string> validateServerItemComponents(::std::vector<::ItemData> const& items);

    MCNAPI ~ItemRegistry();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static ::std::vector<::ItemRegistry::LoadedItemAsset> _loadAllItemAssets(
        ::ResourcePackManager const&   resourcePackManager,
        ::Experiments const&           experiments,
        ::cereal::ReflectionCtx const& ctx
    );
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
