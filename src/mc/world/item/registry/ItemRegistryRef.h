#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class ActorInfoRegistry;
class BaseGameVersion;
class BlockDefinitionGroup;
class CreativeItemRegistry;
class Experiments;
class HashedString;
class IContainerRegistryAccess;
class IContainerRegistryTracker;
class IDynamicContainerSerialization;
class Item;
class ItemRegistry;
class LevelData;
class LinkedAssetValidator;
class ResourcePackManager;
struct ItemData;
struct ItemRegistryComplexAlias;
struct ItemTag;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ItemRegistryRef {
public:
    // ItemRegistryRef inner types declare
    // clang-format off
    class LockGuard;
    // clang-format on

    // ItemRegistryRef inner types define
    using CreativeItemsServerInitCallbackSignature = void(
        ::ItemRegistryRef,
        ::BlockDefinitionGroup const&,
        ::CreativeItemRegistry*,
        ::BaseGameVersion const&,
        ::Experiments const&,
        ::ResourcePackManager const&,
        ::cereal::ReflectionCtx const&
    );

    class LockGuard {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnkeb2627;
        // NOLINTEND

    public:
        // prevent constructor by default
        LockGuard& operator=(LockGuard const&);
        LockGuard(LockGuard const&);
        LockGuard();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~LockGuard();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::ItemRegistry>> mWeakRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemRegistryRef& operator=(ItemRegistryRef const&);
    ItemRegistryRef();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ItemRegistryRef(::ItemRegistryRef const&);

    MCAPI ::std::shared_ptr<::ItemRegistry> _lockRegistry() const;

    MCAPI void addItemToTagMap(::Item const& item) const;

    MCAPI void alterAvailableCreativeItems(::ActorInfoRegistry* infoRegistry, ::LevelData& levelData) const;

    MCAPI bool canUpdateTags() const;

    MCAPI ::Bedrock::NonOwnerPointer<::cereal::ReflectionCtx const> cerealContext() const;

    MCAPI void clearDeadItemRegistry() const;

    MCAPI ::Bedrock::NonOwnerPointer<::CreativeItemRegistry const> getCreativeItemRegistry() const;

    MCAPI ::Bedrock::NonOwnerPointer<::CreativeItemRegistry> getCreativeItemRegistry();

    MCFOLD ::WeakPtr<::Item> getItem(::HashedString const& id) const;

    MCAPI ::WeakPtr<::Item> getItem(short itemId) const;

    MCAPI int getItemCount() const;

    MCAPI ::HashedString getNameFromLegacyID(short id) const;

    MCAPI ::std::unordered_map<::HashedString, ::WeakPtr<::Item>> const& getNameToItemMap() const;

    MCAPI ::BaseGameVersion getWorldBaseGameVersion() const;

    MCAPI void initCreativeItemsServer(
        ::BlockDefinitionGroup const& blockDefinitionGroup,
        ::Experiments const&          experiment,
        ::ResourcePackManager const&  resourcePackManager,
        ::std::function<void(
            ::ItemRegistryRef,
            ::BlockDefinitionGroup const&,
            ::CreativeItemRegistry*,
            ::BaseGameVersion const&,
            ::Experiments const&,
            ::ResourcePackManager const&,
            ::cereal::ReflectionCtx const&
        )>                            registerCallback
    ) const;

    MCAPI void initServer(
        ::Experiments const&                               experiments,
        ::BaseGameVersion const&                           baseGameVersion,
        ::ResourcePackManager*                             rpm,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator
    ) const;

    MCAPI bool isComplexAlias(::HashedString const& oldName) const;

    MCAPI ::WeakPtr<::Item> lookupByName(::HashedString const& inString) const;

    MCAPI ::WeakPtr<::Item> lookupByName(int& outItemAux, ::std::string_view inString) const;

    MCAPI ::WeakPtr<::Item> lookupByName(int& outItemId, int& outItemAux, ::std::string_view inString) const;

    MCAPI ::WeakPtr<::Item> lookupByNameNoAlias(::std::string_view inString) const;

    MCAPI ::WeakPtr<::Item> lookupByNameNoAlias(::HashedString const& inString) const;

    MCAPI ::std::unordered_set<::Item const*> lookupByTag(::ItemTag const& tag) const;

    MCFOLD ::WeakPtr<::Item> lookupByVanillaName(::HashedString const& inString) const;

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

    MCAPI void shutdown() const;

    MCAPI void unregisterItem(::HashedString const& itemName) const;

    MCAPI ::std::vector<::std::string> validateServerItemComponents(::std::vector<::ItemData> const& itemData);

    MCAPI ~ItemRegistryRef();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::ItemRegistryRef const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
