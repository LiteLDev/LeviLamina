#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/puv/puv_load_data/LoadResultWithTiming.h"

// auto generated forward declare list
// clang-format off
class ActorInfoRegistry;
class BaseGameVersion;
class BlockDefinitionGroup;
class BlockPalette;
class CreativeContentPacket;
class CreativeItemRegistry;
class Experiments;
class HashedString;
class IContainerRegistryAccess;
class IContainerRegistryTracker;
class IDynamicContainerSerialization;
class IMinecraftEventing;
class Item;
class ItemInstance;
class ItemRegistry;
class LevelData;
class LinkedAssetValidator;
class ResourcePackManager;
class ServerScriptManager;
class TagUpdateToken;
struct ItemData;
struct ItemIconInfo;
struct ItemRegistryComplexAlias;
struct ItemTag;
namespace Bedrock::Threading { class Mutex; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ItemRegistryRef {
public:
    // ItemRegistryRef inner types declare
    // clang-format off
    struct LoadedItem;
    class LockGuard;
    // clang-format on

    // ItemRegistryRef inner types define
    struct LoadedItem {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::WeakPtr<::Item>>                    mItem;
        ::ll::TypedStorage<8, 32, ::PuvLoadData::LoadResultWithTiming> mTiming;
        // NOLINTEND
    };

    class LockGuard {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Bedrock::Threading::Mutex>> mMutex;
        // NOLINTEND

    public:
        // prevent constructor by default
        LockGuard();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI explicit LockGuard(::std::shared_ptr<::Bedrock::Threading::Mutex> mutex);

        MCAPI ~LockGuard();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::std::shared_ptr<::Bedrock::Threading::Mutex> mutex);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
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
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::ItemRegistry>> mWeakRegistry;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addItemToTagMap(::Item const& item) const;

    MCAPI ::TagUpdateToken allowTagUpdate() const;

    MCAPI void alterAvailableCreativeItems(::ActorInfoRegistry* infoRegistry, ::LevelData& levelData) const;

    MCAPI void bindDynamicScriptTypes(::ServerScriptManager& scripts) const;

    MCAPI bool canUpdateTags() const;

    MCAPI ::Bedrock::NonOwnerPointer<::cereal::ReflectionCtx const> cerealContext() const;

    MCAPI void clearDeadItemRegistry() const;

#ifdef LL_PLAT_C
    MCAPI void findAllAttachableDefinitions() const;
#endif

    MCAPI ::std::vector<::std::reference_wrapper<::HashedString const>> const&
    getComplexAliasSplitNames(::HashedString const& oldName) const;

    MCAPI ::Bedrock::NonOwnerPointer<::CreativeItemRegistry const> getCreativeItemRegistry() const;

    MCAPI ::Bedrock::NonOwnerPointer<::CreativeItemRegistry> getCreativeItemRegistry();

    MCFOLD ::WeakPtr<::Item> getItem(::HashedString const& id) const;

    MCAPI ::WeakPtr<::Item> getItem(short itemId) const;

    MCAPI int getItemCount() const;

#ifdef LL_PLAT_C
    MCAPI uint getMaxItemID() const;
#endif

    MCAPI ::HashedString getNameFromLegacyID(short id) const;

    MCAPI ::std::unordered_map<::HashedString, ::WeakPtr<::Item>> const& getNameToItemMap() const;

    MCAPI ::BaseGameVersion getWorldBaseGameVersion() const;

#ifdef LL_PLAT_C
    MCAPI void initClient(
        ::std::vector<::ItemData> const& serverItemData,
        ::Experiments const&             experiments,
        ::BaseGameVersion const&         baseGameVersion
    ) const;

    MCAPI void initClientData(
        ::ResourcePackManager& packManager,
        ::Experiments const&   experiments,
        ::std::optional<::ItemIconInfo> (*iconFactory)(::std::string const&, int)
    ) const;

    MCAPI void initCreativeItemsClient(
        ::CreativeContentPacket const& creativeContentPacket,
        ::BlockPalette const&          blockPalette
    ) const;
#endif

    MCAPI void initCreativeItemsServer(
        ::BlockDefinitionGroup const&                      blockDefinitionGroup,
        ::Experiments const&                               experiment,
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
    ) const;

    MCAPI void initServer(
        ::Experiments const&                               experiments,
        ::BaseGameVersion const&                           baseGameVersion,
        ::ResourcePackManager*                             rpm,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator,
        ::IMinecraftEventing&                              eventing
    ) const;

    MCAPI bool isComplexAlias(::HashedString const& oldName) const;

    MCAPI bool isCreativeItem(::ItemInstance const& itemInstance) const;

    MCAPI bool isRegistryInitialized() const;

    MCAPI bool isServerInitializingCreativeItems() const;

    MCAPI ::ItemRegistryRef::LockGuard lockItemWorldCompatibilityMutex() const;

    MCAPI ::WeakPtr<::Item> lookupByName(::HashedString const& inString) const;

    MCAPI ::WeakPtr<::Item> lookupByName(int& outItemAux, ::std::string_view inString) const;

    MCAPI ::WeakPtr<::Item> lookupByName(int& outItemId, int& outItemAux, ::std::string_view inString) const;

    MCAPI ::WeakPtr<::Item> lookupByNameNoAlias(::HashedString const& inString) const;

    MCAPI ::WeakPtr<::Item> lookupByNameNoAlias(::std::string_view inString) const;

    MCAPI ::WeakPtr<::Item> lookupByNameNoParsing(int& inOutItemAux, ::HashedString const& fullName) const;

    MCAPI ::std::unordered_set<::Item const*> lookupByTag(::ItemTag const& tag) const;

    MCFOLD ::WeakPtr<::Item> lookupByVanillaName(::HashedString const& inString) const;

    MCAPI ::Bedrock::PubSub::Connector<void()>* onFinishedInitServer() const;

    MCAPI void onLevelInit(
        ::WeakRef<::IDynamicContainerSerialization> containerSerialization,
        ::WeakRef<::IContainerRegistryAccess>       containerAccess,
        ::WeakRef<::IContainerRegistryTracker>      containerTracker
    ) const;

    MCAPI void
    registerAlias(::HashedString const& alias, ::HashedString const& name, ::BaseGameVersion const& fromVersion) const;

    MCAPI ::WeakPtr<::Item>
    registerComplexAlias(::HashedString const& alias, ::ItemRegistryComplexAlias const& complexAlias) const;

    MCAPI void registerExtraItemInitCallback(::std::function<void(::ItemRegistryRef)> callback) const;

    MCAPI void registerLegacyID(::HashedString const& name, short id) const;

    MCAPI void registerLegacyMapping(
        ::HashedString const&    alias,
        ::HashedString const&    name,
        ::BaseGameVersion const& fromVersion
    ) const;

    MCAPI uint64 remapToFullLegacyNameByHash(uint64 newHash) const;

    MCAPI uint64 remapToLegacyNameByHash(uint64 newHash) const;

    MCAPI void setCheckForItemWorldCompatibility(bool value) const;

    MCAPI void setServerInitializingCreativeItems(bool value) const;

    MCAPI bool shouldCheckForItemWorldCompatibility() const;

    MCAPI void shutdown() const;

    MCAPI void unregisterItem(::HashedString const& itemName) const;

    MCAPI ::std::vector<::std::string> validateServerItemComponents(::std::vector<::ItemData> const& itemData);
    // NOLINTEND
};
