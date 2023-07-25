#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakPtr.h"
#include "mc/world/item/registry/ItemRegistry.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ItemRegistryRef {
public:
    // ItemRegistryRef inner types declare
    // clang-format off
    class LockGuard;
    // clang-format on

    // ItemRegistryRef inner types define
    class LockGuard {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMREGISTRYREF_LOCKGUARD
    public:
        LockGuard& operator=(LockGuard const&) = delete;
        LockGuard(LockGuard const&)            = delete;
        LockGuard()                            = delete;
#endif

    public:
        /**
         * @symbol ??0LockGuard\@ItemRegistryRef\@\@QEAA\@V?$shared_ptr\@Vmutex\@std\@\@\@std\@\@\@Z
         */
        MCAPI LockGuard(class std::shared_ptr<class std::mutex>);
        /**
         * @symbol ??1LockGuard\@ItemRegistryRef\@\@QEAA\@XZ
         */
        MCAPI ~LockGuard();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMREGISTRYREF
public:
    ItemRegistryRef& operator=(ItemRegistryRef const&) = delete;
    ItemRegistryRef()                                  = delete;
#endif

public:
    /**
     * @symbol ??0ItemRegistryRef\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI ItemRegistryRef(class ItemRegistryRef const&);
    /**
     * @symbol ?addItemToTagMap\@ItemRegistryRef\@\@QEBAXAEBVItem\@\@\@Z
     */
    MCAPI void addItemToTagMap(class Item const&) const;
    /**
     * @symbol ?allowTagUpdate\@ItemRegistryRef\@\@QEBA?AVTagUpdateToken\@\@XZ
     */
    MCAPI class TagUpdateToken allowTagUpdate() const;
    /**
     * @symbol ?alterAvailableCreativeItems\@ItemRegistryRef\@\@QEBAXPEAVActorInfoRegistry\@\@AEAVLevelData\@\@\@Z
     */
    MCAPI void alterAvailableCreativeItems(class ActorInfoRegistry*, class LevelData&) const;
    /**
     * @symbol ?canAddTags\@ItemRegistryRef\@\@QEBA_NXZ
     */
    MCAPI bool canAddTags() const;
    /**
     * @symbol ?clearDeadItemRegistry\@ItemRegistryRef\@\@QEBAXXZ
     */
    MCAPI void clearDeadItemRegistry() const;
    /**
     * @symbol
     * ?digestServerItemComponents\@ItemRegistryRef\@\@QEBAXAEBV?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VCompoundTag\@\@\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VCompoundTag\@\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void digestServerItemComponents(std::vector<struct std::pair<std::string, class CompoundTag>> const&) const;
    /**
     * @symbol
     * ?getComplexAliasSplitNames\@ItemRegistryRef\@\@QEBAAEBV?$vector\@V?$reference_wrapper\@$$CBVHashedString\@\@\@std\@\@V?$allocator\@V?$reference_wrapper\@$$CBVHashedString\@\@\@std\@\@\@2\@\@std\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI std::vector<class std::reference_wrapper<class HashedString const>> const&
          getComplexAliasSplitNames(class HashedString const&) const;
    /**
     * @symbol ?getItem\@ItemRegistryRef\@\@QEBA?AV?$WeakPtr\@VItem\@\@\@\@F\@Z
     */
    MCAPI class WeakPtr<class Item> getItem(short) const;
    /**
     * @symbol ?getItem\@ItemRegistryRef\@\@QEBA?AV?$WeakPtr\@VItem\@\@\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI class WeakPtr<class Item> getItem(class HashedString const&) const;
    /**
     * @symbol ?getItemCount\@ItemRegistryRef\@\@QEBAHXZ
     */
    MCAPI int getItemCount() const;
    /**
     * @symbol ?getItemResponseFactory\@ItemRegistryRef\@\@QEBAPEAVItemEventResponseFactory\@\@XZ
     */
    MCAPI class ItemEventResponseFactory* getItemResponseFactory() const;
    /**
     * @symbol ?getNameFromLegacyID\@ItemRegistryRef\@\@QEBA?AVHashedString\@\@F\@Z
     */
    MCAPI class HashedString getNameFromLegacyID(short) const;
    /**
     * @symbol
     * ?getNameToItemMap\@ItemRegistryRef\@\@QEBAAEBV?$unordered_map\@VHashedString\@\@V?$WeakPtr\@VItem\@\@\@\@U?$hash\@VHashedString\@\@\@std\@\@U?$equal_to\@VHashedString\@\@\@4\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@V?$WeakPtr\@VItem\@\@\@\@\@std\@\@\@4\@\@std\@\@XZ
     */
    MCAPI class std::unordered_map<
        class HashedString,
        class WeakPtr<class Item>,
        struct std::hash<class HashedString>,
        struct std::equal_to<class HashedString>,
        class std::allocator<struct std::pair<class HashedString const, class WeakPtr<class Item>>>> const&
    getNameToItemMap() const;
    /**
     * @symbol ?getWorldBaseGameVersion\@ItemRegistryRef\@\@QEBA?AVBaseGameVersion\@\@XZ
     */
    MCAPI class BaseGameVersion getWorldBaseGameVersion() const;
    /**
     * @symbol ?init\@ItemRegistryRef\@\@QEBAXAEBVExperiments\@\@AEBVBaseGameVersion\@\@PEAVResourcePackManager\@\@\@Z
     */
    MCAPI void init(class Experiments const&, class BaseGameVersion const&, class ResourcePackManager*) const;
    /**
     * @symbol
     * ?initCreativeItemsServer\@ItemRegistryRef\@\@QEBAXPEAVActorInfoRegistry\@\@PEAVBlockDefinitionGroup\@\@_NAEBVExperiments\@\@V?$function\@$$A6AXVItemRegistryRef\@\@PEAVActorInfoRegistry\@\@PEAVBlockDefinitionGroup\@\@PEAVCreativeItemRegistry\@\@_NAEBVBaseGameVersion\@\@AEBVExperiments\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void
    initCreativeItemsServer(class ActorInfoRegistry*, class BlockDefinitionGroup*, bool, class Experiments const&, class std::function<void(class ItemRegistryRef, class ActorInfoRegistry*, class BlockDefinitionGroup*, class CreativeItemRegistry*, bool, class BaseGameVersion const&, class Experiments const&)>)
        const;
    /**
     * @symbol ?isComplexAlias\@ItemRegistryRef\@\@QEBA_NAEBVHashedString\@\@\@Z
     */
    MCAPI bool isComplexAlias(class HashedString const&) const;
    /**
     * @symbol ?isComponentBasedItemSchema\@ItemRegistryRef\@\@QEBA_NAEBVSemVersion\@\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI bool isComponentBasedItemSchema(class SemVersion const&, class Json::Value const&) const;
    /**
     * @symbol ?isCreativeItem\@ItemRegistryRef\@\@QEBA_NAEBVItemInstance\@\@\@Z
     */
    MCAPI bool isCreativeItem(class ItemInstance const&) const;
    /**
     * @symbol ?isServerInitializingCreativeItems\@ItemRegistryRef\@\@QEBA_NXZ
     */
    MCAPI bool isServerInitializingCreativeItems() const;
    /**
     * @symbol ?lockItemWorldCompatibilityMutex\@ItemRegistryRef\@\@QEBA?AVLockGuard\@1\@XZ
     */
    MCAPI class ItemRegistryRef::LockGuard lockItemWorldCompatibilityMutex() const;
    /**
     * @symbol ?lookupByName\@ItemRegistryRef\@\@QEBA?AV?$WeakPtr\@VItem\@\@\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI class WeakPtr<class Item> lookupByName(class HashedString const&) const;
    /**
     * @symbol
     * ?lookupByName\@ItemRegistryRef\@\@QEBA?AV?$WeakPtr\@VItem\@\@\@\@AEAHV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI class WeakPtr<class Item>
    lookupByName(int&, class std::basic_string_view<char, struct std::char_traits<char>>) const;
    /**
     * @symbol
     * ?lookupByName\@ItemRegistryRef\@\@QEBA?AV?$WeakPtr\@VItem\@\@\@\@AEAH0V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI class WeakPtr<class Item>
    lookupByName(int&, int&, class std::basic_string_view<char, struct std::char_traits<char>>) const;
    /**
     * @symbol
     * ?lookupByNameNoAlias\@ItemRegistryRef\@\@QEBA?AV?$WeakPtr\@VItem\@\@\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI class WeakPtr<class Item>
        lookupByNameNoAlias(class std::basic_string_view<char, struct std::char_traits<char>>) const;
    /**
     * @symbol ?lookupByNameNoAlias\@ItemRegistryRef\@\@QEBA?AV?$WeakPtr\@VItem\@\@\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI class WeakPtr<class Item> lookupByNameNoAlias(class HashedString const&) const;
    /**
     * @symbol ?lookupByNameNoParsing\@ItemRegistryRef\@\@QEBA?AV?$WeakPtr\@VItem\@\@\@\@AEAHAEBVHashedString\@\@\@Z
     */
    MCAPI class WeakPtr<class Item> lookupByNameNoParsing(int&, class HashedString const&) const;
    /**
     * @symbol
     * ?lookupByTag\@ItemRegistryRef\@\@QEBA?AV?$unordered_set\@PEBVItem\@\@U?$hash\@PEBVItem\@\@\@std\@\@U?$equal_to\@PEBVItem\@\@\@3\@V?$allocator\@PEBVItem\@\@\@3\@\@std\@\@AEBUItemTag\@\@\@Z
     */
    MCAPI class std::unordered_set<
        class Item const*,
        struct std::hash<class Item const*>,
        struct std::equal_to<class Item const*>,
        class std::allocator<class Item const*>>
    lookupByTag(struct ItemTag const&) const;
    /**
     * @symbol ?lookupByVanillaName\@ItemRegistryRef\@\@QEBA?AV?$WeakPtr\@VItem\@\@\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI class WeakPtr<class Item> lookupByVanillaName(class HashedString const&) const;
    /**
     * @symbol ?registerAlias\@ItemRegistryRef\@\@QEBAXAEBVHashedString\@\@0AEBVBaseGameVersion\@\@\@Z
     */
    MCAPI void registerAlias(class HashedString const&, class HashedString const&, class BaseGameVersion const&) const;
    /**
     * @symbol
     * ?registerComplexAlias\@ItemRegistryRef\@\@QEBA?AV?$WeakPtr\@VItem\@\@\@\@AEBVHashedString\@\@AEBUComplexAlias\@ItemRegistry\@\@\@Z
     */
    MCAPI class WeakPtr<class Item>
    registerComplexAlias(class HashedString const&, struct ItemRegistry::ComplexAlias const&) const;
    /**
     * @symbol
     * ?registerExtraItemInitCallback\@ItemRegistryRef\@\@QEBAXV?$function\@$$A6AXVItemRegistryRef\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void registerExtraItemInitCallback(class std::function<void(class ItemRegistryRef)>) const;
    /**
     * @symbol ?registerLegacyID\@ItemRegistryRef\@\@QEBAXAEBVHashedString\@\@F\@Z
     */
    MCAPI void registerLegacyID(class HashedString const&, short) const;
    /**
     * @symbol ?registerLegacyMapping\@ItemRegistryRef\@\@QEBAXAEBVHashedString\@\@0AEBVBaseGameVersion\@\@\@Z
     */
    MCAPI void
    registerLegacyMapping(class HashedString const&, class HashedString const&, class BaseGameVersion const&) const;
    /**
     * @symbol ?remapToFullLegacyNameByHash\@ItemRegistryRef\@\@QEBA_K_K\@Z
     */
    MCAPI unsigned __int64 remapToFullLegacyNameByHash(unsigned __int64) const;
    /**
     * @symbol ?remapToLegacyNameByHash\@ItemRegistryRef\@\@QEBA_K_K\@Z
     */
    MCAPI unsigned __int64 remapToLegacyNameByHash(unsigned __int64) const;
    /**
     * @symbol ?setCheckForItemWorldCompatibility\@ItemRegistryRef\@\@QEBAX_N\@Z
     */
    MCAPI void setCheckForItemWorldCompatibility(bool) const;
    /**
     * @symbol ?setOwningThreadId\@ItemRegistryRef\@\@QEBAXVid\@thread\@std\@\@\@Z
     */
    MCAPI void setOwningThreadId(class std::thread::id) const;
    /**
     * @symbol ?setServerInitializingCreativeItems\@ItemRegistryRef\@\@QEBAX_N\@Z
     */
    MCAPI void setServerInitializingCreativeItems(bool) const;
    /**
     * @symbol ?shouldCheckForItemWorldCompatibility\@ItemRegistryRef\@\@QEBA_NXZ
     */
    MCAPI bool shouldCheckForItemWorldCompatibility() const;
    /**
     * @symbol ?shutdown\@ItemRegistryRef\@\@QEBAXXZ
     */
    MCAPI void shutdown() const;
    /**
     * @symbol ?unregisterItem\@ItemRegistryRef\@\@QEBAXAEBVHashedString\@\@\@Z
     */
    MCAPI void unregisterItem(class HashedString const&) const;
    /**
     * @symbol
     * ?validateServerItemComponents\@ItemRegistryRef\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBV?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VCompoundTag\@\@\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VCompoundTag\@\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI std::vector<std::string>
          validateServerItemComponents(std::vector<struct std::pair<std::string, class CompoundTag>> const&) const;
    /**
     * @symbol ??1ItemRegistryRef\@\@QEAA\@XZ
     */
    MCAPI ~ItemRegistryRef();
    /**
     * @symbol ?isUsingCombinedItemRegistry\@ItemRegistryRef\@\@SA_NXZ
     */
    MCAPI static bool isUsingCombinedItemRegistry();
    /**
     * @symbol ?setUseCombinedItemRegistryToggle\@ItemRegistryRef\@\@SAX_N\@Z
     */
    MCAPI static void setUseCombinedItemRegistryToggle(bool);

    // private:
    /**
     * @symbol ?_lockRegistry\@ItemRegistryRef\@\@AEBA?AV?$shared_ptr\@VItemRegistry\@\@\@std\@\@XZ
     */
    MCAPI class std::shared_ptr<class ItemRegistry> _lockRegistry() const;

private:
    /**
     * @symbol ?mCombinedItemRegistryInstance\@ItemRegistryRef\@\@0V?$shared_ptr\@VItemRegistry\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class ItemRegistry> mCombinedItemRegistryInstance;
};
