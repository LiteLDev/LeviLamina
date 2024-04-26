#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakPtr.h"
#include "mc/deps/core/common/bedrock/pubsub/Connector.h"

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
        // symbol: ??0LockGuard@ItemRegistryRef@@QEAA@V?$shared_ptr@VMutex@Threading@Bedrock@@@std@@@Z
        MCAPI explicit LockGuard(std::shared_ptr<class Bedrock::Threading::Mutex>);

        // symbol: ??1LockGuard@ItemRegistryRef@@QEAA@XZ
        MCAPI ~LockGuard();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ItemRegistryRef& operator=(ItemRegistryRef const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ItemRegistryRef@@QEAA@XZ
    MCAPI ItemRegistryRef();

    // symbol: ??0ItemRegistryRef@@QEAA@AEBV0@@Z
    MCAPI ItemRegistryRef(class ItemRegistryRef const&);

    // symbol: ??0ItemRegistryRef@@QEAA@V?$weak_ptr@VItemRegistry@@@std@@@Z
    MCAPI explicit ItemRegistryRef(std::weak_ptr<class ItemRegistry>);

    // symbol: ?addItemToTagMap@ItemRegistryRef@@QEBAXAEBVItem@@@Z
    MCAPI void addItemToTagMap(class Item const& item) const;

    // symbol: ?allowTagUpdate@ItemRegistryRef@@QEBA?AVTagUpdateToken@@XZ
    MCAPI class TagUpdateToken allowTagUpdate() const;

    // symbol: ?alterAvailableCreativeItems@ItemRegistryRef@@QEBAXPEAVActorInfoRegistry@@AEAVLevelData@@@Z
    MCAPI void alterAvailableCreativeItems(class ActorInfoRegistry*, class LevelData& levelData) const;

    // symbol: ?canAddTags@ItemRegistryRef@@QEBA_NXZ
    MCAPI bool canAddTags() const;

    // symbol: ?clearDeadItemRegistry@ItemRegistryRef@@QEBAXXZ
    MCAPI void clearDeadItemRegistry() const;

    // symbol:
    // ?digestServerItemComponents@ItemRegistryRef@@QEBAXAEBV?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VCompoundTag@@@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VCompoundTag@@@std@@@2@@std@@@Z
    MCAPI void digestServerItemComponents(std::vector<std::pair<std::string, class CompoundTag>> const&) const;

    // symbol:
    // ?getComplexAliasSplitNames@ItemRegistryRef@@QEBAAEBV?$vector@V?$reference_wrapper@$$CBVHashedString@@@std@@V?$allocator@V?$reference_wrapper@$$CBVHashedString@@@std@@@2@@std@@AEBVHashedString@@@Z
    MCAPI std::vector<std::reference_wrapper<class HashedString const>> const&
          getComplexAliasSplitNames(class HashedString const&) const;

    // symbol: ?getItem@ItemRegistryRef@@QEBA?AV?$WeakPtr@VItem@@@@AEBVHashedString@@@Z
    MCAPI class WeakPtr<class Item> getItem(class HashedString const& id) const;

    // symbol: ?getItem@ItemRegistryRef@@QEBA?AV?$WeakPtr@VItem@@@@F@Z
    MCAPI class WeakPtr<class Item> getItem(short itemId) const;

    // symbol: ?getItemCount@ItemRegistryRef@@QEBAHXZ
    MCAPI int getItemCount() const;

    // symbol: ?getItemResponseFactory@ItemRegistryRef@@QEBAPEAVItemEventResponseFactory@@XZ
    MCAPI class ItemEventResponseFactory* getItemResponseFactory() const;

    // symbol: ?getNameFromLegacyID@ItemRegistryRef@@QEBA?AVHashedString@@F@Z
    MCAPI class HashedString getNameFromLegacyID(short id) const;

    // symbol:
    // ?getNameToItemMap@ItemRegistryRef@@QEBAAEBV?$unordered_map@VHashedString@@V?$WeakPtr@VItem@@@@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@4@V?$allocator@U?$pair@$$CBVHashedString@@V?$WeakPtr@VItem@@@@@std@@@4@@std@@XZ
    MCAPI std::unordered_map<class HashedString, class WeakPtr<class Item>> const& getNameToItemMap() const;

    // symbol: ?getWorldBaseGameVersion@ItemRegistryRef@@QEBA?AVBaseGameVersion@@XZ
    MCAPI class BaseGameVersion getWorldBaseGameVersion() const;

    // symbol:
    // ?init@ItemRegistryRef@@QEBAXAEAUReflectionCtx@cereal@@AEBVExperiments@@AEBVBaseGameVersion@@PEAVResourcePackManager@@@Z
    MCAPI void
    init(struct cereal::ReflectionCtx&, class Experiments const&, class BaseGameVersion const&, class ResourcePackManager*)
        const;

    // symbol:
    // ?initCreativeItemsServer@ItemRegistryRef@@QEBAXPEAVActorInfoRegistry@@PEAVBlockDefinitionGroup@@_NAEBVExperiments@@V?$function@$$A6AXVItemRegistryRef@@PEAVActorInfoRegistry@@PEAVBlockDefinitionGroup@@PEAVCreativeItemRegistry@@_NAEBVBaseGameVersion@@AEBVExperiments@@@Z@std@@@Z
    MCAPI void initCreativeItemsServer(
        class ActorInfoRegistry*    actorInfoRegistry,
        class BlockDefinitionGroup* blockDefinitionGroup,
        bool                        isClient,
        class Experiments const&    experiment,
        std::function<
            void(class ItemRegistryRef, class ActorInfoRegistry*, class BlockDefinitionGroup*, class CreativeItemRegistry*, bool, class BaseGameVersion const&, class Experiments const&)>
            registerCallback
    ) const;

    // symbol: ?isComplexAlias@ItemRegistryRef@@QEBA_NAEBVHashedString@@@Z
    MCAPI bool isComplexAlias(class HashedString const&) const;

    // symbol: ?isCreativeItem@ItemRegistryRef@@QEBA_NAEBVItemInstance@@@Z
    MCAPI bool isCreativeItem(class ItemInstance const& itemInstance) const;

    // symbol: ?isServerInitializingCreativeItems@ItemRegistryRef@@QEBA_NXZ
    MCAPI bool isServerInitializingCreativeItems() const;

    // symbol: ?isValid@ItemRegistryRef@@QEBA_NXZ
    MCAPI bool isValid() const;

    // symbol: ?lockItemWorldCompatibilityMutex@ItemRegistryRef@@QEBA?AVLockGuard@1@XZ
    MCAPI class ItemRegistryRef::LockGuard lockItemWorldCompatibilityMutex() const;

    // symbol: ?lookupByName@ItemRegistryRef@@QEBA?AV?$WeakPtr@VItem@@@@AEBVHashedString@@@Z
    MCAPI class WeakPtr<class Item> lookupByName(class HashedString const& inString) const;

    // symbol:
    // ?lookupByName@ItemRegistryRef@@QEBA?AV?$WeakPtr@VItem@@@@AEAHV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI class WeakPtr<class Item> lookupByName(int& outItemAux, std::string_view inString) const;

    // symbol:
    // ?lookupByName@ItemRegistryRef@@QEBA?AV?$WeakPtr@VItem@@@@AEAH0V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI class WeakPtr<class Item> lookupByName(int& outItemId, int& outItemAux, std::string_view inString) const;

    // symbol: ?lookupByNameNoAlias@ItemRegistryRef@@QEBA?AV?$WeakPtr@VItem@@@@AEBVHashedString@@@Z
    MCAPI class WeakPtr<class Item> lookupByNameNoAlias(class HashedString const& inString) const;

    // symbol:
    // ?lookupByNameNoAlias@ItemRegistryRef@@QEBA?AV?$WeakPtr@VItem@@@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI class WeakPtr<class Item> lookupByNameNoAlias(std::string_view inString) const;

    // symbol: ?lookupByNameNoParsing@ItemRegistryRef@@QEBA?AV?$WeakPtr@VItem@@@@AEAHAEBVHashedString@@@Z
    MCAPI class WeakPtr<class Item> lookupByNameNoParsing(int& inOutItemAux, class HashedString const& fullName) const;

    // symbol:
    // ?lookupByTag@ItemRegistryRef@@QEBA?AV?$unordered_set@PEBVItem@@U?$hash@PEBVItem@@@std@@U?$equal_to@PEBVItem@@@3@V?$allocator@PEBVItem@@@3@@std@@AEBUItemTag@@@Z
    MCAPI std::unordered_set<class Item const*> lookupByTag(struct ItemTag const& tag) const;

    // symbol: ?lookupByVanillaName@ItemRegistryRef@@QEBA?AV?$WeakPtr@VItem@@@@AEBVHashedString@@@Z
    MCAPI class WeakPtr<class Item> lookupByVanillaName(class HashedString const& inString) const;

    // symbol: ?onFinishedInit@ItemRegistryRef@@QEBAPEAV?$Connector@$$A6AXXZ@PubSub@Bedrock@@XZ
    MCAPI class Bedrock::PubSub::Connector<void()>* onFinishedInit() const;

    // symbol: ?registerAlias@ItemRegistryRef@@QEBAXAEBVHashedString@@0AEBVBaseGameVersion@@@Z
    MCAPI void registerAlias(
        class HashedString const&    alias,
        class HashedString const&    name,
        class BaseGameVersion const& fromVersion
    ) const;

    // symbol:
    // ?registerComplexAlias@ItemRegistryRef@@QEBA?AV?$WeakPtr@VItem@@@@AEBVHashedString@@AEBUItemRegistryComplexAlias@@@Z
    MCAPI class WeakPtr<class Item>
    registerComplexAlias(class HashedString const& alias, struct ItemRegistryComplexAlias const&) const;

    // symbol: ?registerExtraItemInitCallback@ItemRegistryRef@@QEBAXV?$function@$$A6AXVItemRegistryRef@@@Z@std@@@Z
    MCAPI void registerExtraItemInitCallback(std::function<void(class ItemRegistryRef)> callback) const;

    // symbol: ?registerLegacyID@ItemRegistryRef@@QEBAXAEBVHashedString@@F@Z
    MCAPI void registerLegacyID(class HashedString const& name, short id) const;

    // symbol: ?registerLegacyMapping@ItemRegistryRef@@QEBAXAEBVHashedString@@0AEBVBaseGameVersion@@@Z
    MCAPI void registerLegacyMapping(
        class HashedString const&    alias,
        class HashedString const&    name,
        class BaseGameVersion const& fromVersion
    ) const;

    // symbol: ?remapToFullLegacyNameByHash@ItemRegistryRef@@QEBA_K_K@Z
    MCAPI uint64 remapToFullLegacyNameByHash(uint64 newHash) const;

    // symbol: ?remapToLegacyNameByHash@ItemRegistryRef@@QEBA_K_K@Z
    MCAPI uint64 remapToLegacyNameByHash(uint64 newHash) const;

    // symbol: ?setCheckForItemWorldCompatibility@ItemRegistryRef@@QEBAX_N@Z
    MCAPI void setCheckForItemWorldCompatibility(bool value) const;

    // symbol: ?setServerInitializingCreativeItems@ItemRegistryRef@@QEBAX_N@Z
    MCAPI void setServerInitializingCreativeItems(bool value) const;

    // symbol: ?shouldCheckForItemWorldCompatibility@ItemRegistryRef@@QEBA_NXZ
    MCAPI bool shouldCheckForItemWorldCompatibility() const;

    // symbol: ?shutdown@ItemRegistryRef@@QEBAXXZ
    MCAPI void shutdown() const;

    // symbol: ?unregisterItem@ItemRegistryRef@@QEBAXAEBVHashedString@@@Z
    MCAPI void unregisterItem(class HashedString const& itemName) const;

    // symbol:
    // ?validateServerItemComponents@ItemRegistryRef@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBV?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VCompoundTag@@@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VCompoundTag@@@std@@@2@@3@@Z
    MCAPI std::vector<std::string>
          validateServerItemComponents(std::vector<std::pair<std::string, class CompoundTag>> const&) const;

    // symbol: ??1ItemRegistryRef@@QEAA@XZ
    MCAPI ~ItemRegistryRef();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_lockRegistry@ItemRegistryRef@@AEBA?AV?$shared_ptr@VItemRegistry@@@std@@XZ
    MCAPI std::shared_ptr<class ItemRegistry> _lockRegistry() const;

    // NOLINTEND
};
