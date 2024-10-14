#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"

// auto generated forward declare list
// clang-format off
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
        // prevent constructor by default
        LockGuard& operator=(LockGuard const&);
        LockGuard(LockGuard const&);
        LockGuard();

    public:
        // NOLINTBEGIN
        MCAPI explicit LockGuard(std::shared_ptr<class Bedrock::Threading::Mutex>);

        MCAPI ~LockGuard();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        template <class... Args>
        auto* ctor$(Args... args) {
            return std::construct_at(this, std::forward<Args>(args)...);
        }

        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ItemRegistryRef& operator=(ItemRegistryRef const&);

public:
    // NOLINTBEGIN
    MCAPI ItemRegistryRef();

    MCAPI ItemRegistryRef(class ItemRegistryRef const&);

    MCAPI explicit ItemRegistryRef(std::weak_ptr<class ItemRegistry> registry);

    MCAPI void addItemToTagMap(class Item const& item) const;

    MCAPI class TagUpdateToken allowTagUpdate() const;

    MCAPI void alterAvailableCreativeItems(class ActorInfoRegistry* infoRegistry, class LevelData& levelData) const;

    MCAPI bool canAddTags() const;

    MCAPI void clearDeadItemRegistry() const;

    MCAPI void digestServerItemComponents(std::vector<std::pair<std::string, class CompoundTag>> const& itemTags) const;

    MCAPI std::vector<std::reference_wrapper<class HashedString const>> const&
          getComplexAliasSplitNames(class HashedString const& oldName) const;

    MCAPI class WeakPtr<class Item> getItem(class HashedString const& id) const;

    MCAPI class WeakPtr<class Item> getItem(short itemId) const;

    MCAPI int getItemCount() const;

    MCAPI class ItemEventResponseFactory* getItemResponseFactory() const;

    MCAPI class HashedString getNameFromLegacyID(short id) const;

    MCAPI std::unordered_map<class HashedString, class WeakPtr<class Item>> const& getNameToItemMap() const;

    MCAPI class BaseGameVersion getWorldBaseGameVersion() const;

    MCAPI void init(
        struct cereal::ReflectionCtx& ctx,
        class Experiments const&      experiments,
        class BaseGameVersion const&  baseGameVersion,
        class ResourcePackManager*    rpm
    ) const;

    MCAPI void initCreativeItemsServer(
        class ActorInfoRegistry*    actorInfoRegistry,
        class BlockDefinitionGroup* blockDefinitionGroup,
        bool                        isClient,
        class Experiments const&    experiment,
        std::function<
            void(class ItemRegistryRef, class ActorInfoRegistry*, class BlockDefinitionGroup*, class CreativeItemRegistry*, bool, class BaseGameVersion const&, class Experiments const&)>
            registerCallback
    ) const;

    MCAPI bool isComplexAlias(class HashedString const& oldName) const;

    MCAPI bool isCreativeItem(class ItemInstance const& itemInstance) const;

    MCAPI bool isServerInitializingCreativeItems() const;

    MCAPI bool isValid() const;

    MCAPI class ItemRegistryRef::LockGuard lockItemWorldCompatibilityMutex() const;

    MCAPI class WeakPtr<class Item> lookupByName(class HashedString const& inString) const;

    MCAPI class WeakPtr<class Item> lookupByName(int& outItemAux, std::string_view inString) const;

    MCAPI class WeakPtr<class Item> lookupByName(int& outItemId, int& outItemAux, std::string_view inString) const;

    MCAPI class WeakPtr<class Item> lookupByNameNoAlias(class HashedString const& inString) const;

    MCAPI class WeakPtr<class Item> lookupByNameNoAlias(std::string_view inString) const;

    MCAPI class WeakPtr<class Item> lookupByNameNoParsing(int& inOutItemAux, class HashedString const& fullName) const;

    MCAPI std::unordered_set<class Item const*> lookupByTag(struct ItemTag const& tag) const;

    MCAPI class WeakPtr<class Item> lookupByVanillaName(class HashedString const& inString) const;

    MCAPI class Bedrock::PubSub::Connector<void()>* onFinishedInit() const;

    MCAPI void registerAlias(
        class HashedString const&    alias,
        class HashedString const&    name,
        class BaseGameVersion const& fromVersion
    ) const;

    MCAPI class WeakPtr<class Item>
    registerComplexAlias(class HashedString const& alias, struct ItemRegistryComplexAlias const& complexAlias) const;

    MCAPI void registerExtraItemInitCallback(std::function<void(class ItemRegistryRef)> callback) const;

    MCAPI void registerLegacyID(class HashedString const& name, short id) const;

    MCAPI void registerLegacyMapping(
        class HashedString const&    alias,
        class HashedString const&    name,
        class BaseGameVersion const& fromVersion
    ) const;

    MCAPI uint64 remapToFullLegacyNameByHash(uint64 newHash) const;

    MCAPI uint64 remapToLegacyNameByHash(uint64 newHash) const;

    MCAPI void setCheckForItemWorldCompatibility(bool value) const;

    MCAPI void setServerInitializingCreativeItems(bool value) const;

    MCAPI bool shouldCheckForItemWorldCompatibility() const;

    MCAPI void shutdown() const;

    MCAPI void unregisterItem(class HashedString const& itemName) const;

    MCAPI std::vector<std::string>
          validateServerItemComponents(std::vector<std::pair<std::string, class CompoundTag>> const& itemTags) const;

    MCAPI ~ItemRegistryRef();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::shared_ptr<class ItemRegistry> _lockRegistry() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
