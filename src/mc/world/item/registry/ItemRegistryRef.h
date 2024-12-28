#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class ActorInfoRegistry;
class BaseGameVersion;
class BlockDefinitionGroup;
class CompoundTag;
class CreativeItemRegistry;
class Experiments;
class HashedString;
class IDynamicContainerSerialization;
class Item;
class ItemInstance;
class ItemRegistry;
class LevelData;
class ResourcePackManager;
class ServerScriptManager;
class TagUpdateToken;
struct ItemRegistryComplexAlias;
struct ItemTag;
namespace Bedrock::Threading { class Mutex; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ItemRegistryRef {
public:
    // ItemRegistryRef inner types declare
    // clang-format off
    class LockGuard;
    // clang-format on

    // ItemRegistryRef inner types define
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

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk9bd30e;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemRegistryRef& operator=(ItemRegistryRef const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ItemRegistryRef();

    MCAPI ItemRegistryRef(::ItemRegistryRef const&);

    MCAPI explicit ItemRegistryRef(::std::weak_ptr<::ItemRegistry> registry);

    MCAPI ::std::shared_ptr<::ItemRegistry> _lockRegistry() const;

    MCAPI void addItemToTagMap(::Item const& item) const;

    MCAPI ::TagUpdateToken allowTagUpdate() const;

    MCAPI void alterAvailableCreativeItems(::ActorInfoRegistry* infoRegistry, ::LevelData& levelData) const;

    MCAPI void bindDynamicScriptTypes(::ServerScriptManager& script, ::Experiments const& experiments) const;

    MCAPI bool canUpdateTags() const;

    MCAPI ::Bedrock::NonOwnerPointer<::cereal::ReflectionCtx const> cerealContext() const;

    MCAPI void clearDeadItemRegistry() const;

    MCAPI void digestServerItemComponents(::std::vector<::std::pair<::std::string, ::CompoundTag>> const& itemTags
    ) const;

    MCAPI ::std::vector<::std::reference_wrapper<::HashedString const>> const&
    getComplexAliasSplitNames(::HashedString const& oldName) const;

    MCAPI ::Bedrock::NonOwnerPointer<::CreativeItemRegistry const> getCreativeItemRegistry() const;

    MCAPI ::Bedrock::NonOwnerPointer<::CreativeItemRegistry> getCreativeItemRegistry();

    MCAPI ::WeakPtr<::Item> getItem(::HashedString const& id) const;

    MCAPI ::WeakPtr<::Item> getItem(short itemId) const;

    MCAPI int getItemCount() const;

    MCAPI ::HashedString getNameFromLegacyID(short id) const;

    MCAPI ::std::unordered_map<::HashedString, ::WeakPtr<::Item>> const& getNameToItemMap() const;

    MCAPI ::BaseGameVersion getWorldBaseGameVersion() const;

    MCAPI void
    init(::Experiments const& experiments, ::BaseGameVersion const& baseGameVersion, ::ResourcePackManager* rpm) const;

    MCAPI void initCreativeItemsServer(
        ::ActorInfoRegistry*    actorInfoRegistry,
        ::BlockDefinitionGroup* blockDefinitionGroup,
        bool                    isClient,
        ::Experiments const&    experiment,
        ::std::function<
            void(::ItemRegistryRef, ::ActorInfoRegistry*, ::BlockDefinitionGroup*, ::CreativeItemRegistry*, bool, ::BaseGameVersion const&, ::Experiments const&)>
            registerCallback
    ) const;

    MCAPI bool isComplexAlias(::HashedString const& oldName) const;

    MCAPI bool isCreativeItem(::ItemInstance const& itemInstance) const;

    MCAPI bool isRegistryInitialized() const;

    MCAPI bool isServerInitializingCreativeItems() const;

    MCAPI bool isValid() const;

    MCAPI ::ItemRegistryRef::LockGuard lockItemWorldCompatibilityMutex() const;

    MCAPI ::WeakPtr<::Item> lookupByName(::HashedString const& inString) const;

    MCAPI ::WeakPtr<::Item> lookupByName(int& outItemAux, ::std::string_view inString) const;

    MCAPI ::WeakPtr<::Item> lookupByName(int& outItemId, int& outItemAux, ::std::string_view inString) const;

    MCAPI ::WeakPtr<::Item> lookupByNameNoAlias(::std::string_view inString) const;

    MCAPI ::WeakPtr<::Item> lookupByNameNoAlias(::HashedString const& inString) const;

    MCAPI ::WeakPtr<::Item> lookupByNameNoParsing(int& inOutItemAux, ::HashedString const& fullName) const;

    MCAPI ::std::unordered_set<::Item const*> lookupByTag(::ItemTag const& tag) const;

    MCAPI ::WeakPtr<::Item> lookupByVanillaName(::HashedString const& inString) const;

    MCAPI ::Bedrock::PubSub::Connector<void()>* onFinishedInit() const;

    MCAPI void onLevelInit(::WeakRef<::IDynamicContainerSerialization> containerSerialization) const;

    MCAPI void
    registerAlias(::HashedString const& alias, ::HashedString const& name, ::BaseGameVersion const& fromVersion) const;

    MCAPI ::WeakPtr<::Item>
    registerComplexAlias(::HashedString const& alias, ::ItemRegistryComplexAlias const& complexAlias) const;

    MCAPI void registerExtraItemInitCallback(::std::function<void(::ItemRegistryRef)> callback) const;

    MCAPI void registerLegacyID(::HashedString const& name, short id) const;

    MCAPI void
    registerLegacyMapping(::HashedString const& alias, ::HashedString const& name, ::BaseGameVersion const& fromVersion)
        const;

    MCAPI uint64 remapToFullLegacyNameByHash(uint64 newHash) const;

    MCAPI uint64 remapToLegacyNameByHash(uint64 newHash) const;

    MCAPI void setCheckForItemWorldCompatibility(bool value) const;

    MCAPI void setServerInitializingCreativeItems(bool value) const;

    MCAPI bool shouldCheckForItemWorldCompatibility() const;

    MCAPI void shutdown() const;

    MCAPI void unregisterItem(::HashedString const& itemName) const;

    MCAPI ::std::vector<::std::string>
    validateServerItemComponents(::std::vector<::std::pair<::std::string, ::CompoundTag>> const& itemTags) const;

    MCAPI ~ItemRegistryRef();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::ItemRegistryRef const&);

    MCAPI void* $ctor(::std::weak_ptr<::ItemRegistry> registry);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
