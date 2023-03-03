/**
 * @file  ItemRegistry.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemRegistry.
 *
 */
class ItemRegistry {

#define AFTER_EXTRA
// Add Member There
public:
struct ItemHashAlias {
    ItemHashAlias() = delete;
    ItemHashAlias(ItemHashAlias const&) = delete;
    ItemHashAlias(ItemHashAlias const&&) = delete;
};
struct ItemAlias {
    ItemAlias() = delete;
    ItemAlias(ItemAlias const&) = delete;
    ItemAlias(ItemAlias const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMREGISTRY
public:
    class ItemRegistry& operator=(class ItemRegistry const &) = delete;
    ItemRegistry(class ItemRegistry const &) = delete;
#endif

public:
    /**
     * @symbol  ??0ItemRegistry\@\@QEAA\@XZ
     */
    MCAPI ItemRegistry();
    /**
     * @symbol  ?allowTagUpdate\@ItemRegistry\@\@QEAA?AVTagUpdateToken\@\@XZ
     */
    MCAPI class TagUpdateToken allowTagUpdate();
    /**
     * @symbol  ??1ItemRegistry\@\@QEAA\@XZ
     */
    MCAPI ~ItemRegistry();
    /**
     * @symbol  ?MINECRAFT_NAMESPACE\@ItemRegistry\@\@2V?$basic_string_span\@$$CBD$0?0\@gsl\@\@B
     */
    MCAPI static class gsl::basic_string_span<char const, -1> const MINECRAFT_NAMESPACE;

//private:
    /**
     * @symbol  ?_loadItemData\@ItemRegistry\@\@AEAAXAEAVResourcePackManager\@\@V?$function\@$$A6AXAEAV?$WeakPtr\@VItem\@\@\@\@AEAVValue\@Json\@\@AEBVSemVersion\@\@\@Z\@std\@\@_NW4ItemVersion\@\@\@Z
     */
    MCAPI void _loadItemData(class ResourcePackManager &, class std::function<void (class WeakPtr<class Item> &, class Json::Value &, class SemVersion const &)>, bool, enum class ItemVersion);
    /**
     * @symbol  ?_loadItemDefinition\@ItemRegistry\@\@AEAAXAEAVValue\@Json\@\@_NV?$function\@$$A6AXAEAV?$WeakPtr\@VItem\@\@\@\@AEAVValue\@Json\@\@AEBVSemVersion\@\@\@Z\@std\@\@1W4ItemVersion\@\@W4PackType\@\@\@Z
     */
    MCAPI void _loadItemDefinition(class Json::Value &, bool, class std::function<void (class WeakPtr<class Item> &, class Json::Value &, class SemVersion const &)>, bool, enum class ItemVersion, enum class PackType);
    /**
     * @symbol  ?_parseItemDefinition\@ItemRegistry\@\@AEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@_NV?$function\@$$A6AXAEAV?$WeakPtr\@VItem\@\@\@\@AEAVValue\@Json\@\@AEBVSemVersion\@\@\@Z\@3\@1W4ItemVersion\@\@W4PackType\@\@\@Z
     */
    MCAPI std::string _parseItemDefinition(std::string const &, bool, class std::function<void (class WeakPtr<class Item> &, class Json::Value &, class SemVersion const &)>, bool, enum class ItemVersion, enum class PackType);
    /**
     * @symbol  ?addItemToTagMap\@ItemRegistry\@\@AEAAXAEBVItem\@\@\@Z
     */
    MCAPI void addItemToTagMap(class Item const &);
    /**
     * @symbol  ?alterAvailableCreativeItems\@ItemRegistry\@\@AEAAXPEAVActorInfoRegistry\@\@AEAVLevelData\@\@\@Z
     */
    MCAPI void alterAvailableCreativeItems(class ActorInfoRegistry *, class LevelData &);
    /**
     * @symbol  ?canAddTags\@ItemRegistry\@\@AEBA_NXZ
     */
    MCAPI bool canAddTags() const;
    /**
     * @symbol  ?clearDeadItemRegistry\@ItemRegistry\@\@AEAAXXZ
     */
    MCAPI void clearDeadItemRegistry();
    /**
     * @symbol  ?digestServerItemComponents\@ItemRegistry\@\@AEAAXAEBV?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VCompoundTag\@\@\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VCompoundTag\@\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void digestServerItemComponents(std::vector<struct std::pair<std::string, class CompoundTag>> const &);
    /**
     * @symbol  ?finishedRegistration\@ItemRegistry\@\@AEAAXXZ
     */
    MCAPI void finishedRegistration();
    /**
     * @symbol  ?getItem\@ItemRegistry\@\@AEAA?AV?$WeakPtr\@VItem\@\@\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI class WeakPtr<class Item> getItem(class HashedString const &);
    /**
     * @symbol  ?getItem\@ItemRegistry\@\@AEAA?AV?$WeakPtr\@VItem\@\@\@\@F\@Z
     */
    MCAPI class WeakPtr<class Item> getItem(short);
    /**
     * @symbol  ?getItemCount\@ItemRegistry\@\@AEAAHXZ
     */
    MCAPI int getItemCount();
    /**
     * @symbol  ?getItemResponseFactory\@ItemRegistry\@\@AEAAPEAVItemEventResponseFactory\@\@XZ
     */
    MCAPI class ItemEventResponseFactory * getItemResponseFactory();
    /**
     * @symbol  ?getNameFromAlias\@ItemRegistry\@\@AEBA?AU?$pair\@VHashedString\@\@H\@std\@\@AEBVHashedString\@\@H\@Z
     */
    MCAPI struct std::pair<class HashedString, int> getNameFromAlias(class HashedString const &, int) const;
    /**
     * @symbol  ?getNameFromLegacyID\@ItemRegistry\@\@AEAA?AVHashedString\@\@F\@Z
     */
    MCAPI class HashedString getNameFromLegacyID(short);
    /**
     * @symbol  ?getNameToItemMap\@ItemRegistry\@\@AEAAAEBV?$unordered_map\@VHashedString\@\@V?$WeakPtr\@VItem\@\@\@\@U?$hash\@VHashedString\@\@\@std\@\@U?$equal_to\@VHashedString\@\@\@4\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@V?$WeakPtr\@VItem\@\@\@\@\@std\@\@\@4\@\@std\@\@XZ
     */
    MCAPI class std::unordered_map<class HashedString, class WeakPtr<class Item>, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class WeakPtr<class Item>>>> const & getNameToItemMap();
    /**
     * @symbol  ?getRef\@ItemRegistry\@\@AEAA?AVItemRegistryRef\@\@XZ
     */
    MCAPI class ItemRegistryRef getRef();
    /**
     * @symbol  ?getWorldBaseGameVersion\@ItemRegistry\@\@AEBA?AVBaseGameVersion\@\@XZ
     */
    MCAPI class BaseGameVersion getWorldBaseGameVersion() const;
    /**
     * @symbol  ?init\@ItemRegistry\@\@AEAAXAEBVExperiments\@\@AEBVBaseGameVersion\@\@PEAVResourcePackManager\@\@\@Z
     */
    MCAPI void init(class Experiments const &, class BaseGameVersion const &, class ResourcePackManager *);
    /**
     * @symbol  ?initCreativeItemsServer\@ItemRegistry\@\@AEAAXPEAVActorInfoRegistry\@\@PEAVBlockDefinitionGroup\@\@_NAEBVExperiments\@\@V?$function\@$$A6AXVItemRegistryRef\@\@PEAVActorInfoRegistry\@\@PEAVBlockDefinitionGroup\@\@PEAVCreativeItemRegistry\@\@_NAEBVBaseGameVersion\@\@AEBVExperiments\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void initCreativeItemsServer(class ActorInfoRegistry *, class BlockDefinitionGroup *, bool, class Experiments const &, class std::function<void (class ItemRegistryRef, class ActorInfoRegistry *, class BlockDefinitionGroup *, class CreativeItemRegistry *, bool, class BaseGameVersion const &, class Experiments const &)>);
    /**
     * @symbol  ?initServerData\@ItemRegistry\@\@AEAAXAEAVResourcePackManager\@\@AEBVExperiments\@\@W4ItemVersion\@\@\@Z
     */
    MCAPI void initServerData(class ResourcePackManager &, class Experiments const &, enum class ItemVersion);
    /**
     * @symbol  ?isComponentBasedItemSchema\@ItemRegistry\@\@AEAA_NAEBVSemVersion\@\@\@Z
     */
    MCAPI bool isComponentBasedItemSchema(class SemVersion const &);
    /**
     * @symbol  ?isCreativeItem\@ItemRegistry\@\@AEAA_NAEBVItemInstance\@\@\@Z
     */
    MCAPI bool isCreativeItem(class ItemInstance const &);
    /**
     * @symbol  ?isServerInitializingCreativeItems\@ItemRegistry\@\@AEBA_NXZ
     */
    MCAPI bool isServerInitializingCreativeItems() const;
    /**
     * @symbol  ?lookupByName\@ItemRegistry\@\@AEBA?AV?$WeakPtr\@VItem\@\@\@\@AEAH0V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI class WeakPtr<class Item> lookupByName(int &, int &, class std::basic_string_view<char, struct std::char_traits<char>>) const;
    /**
     * @symbol  ?lookupByName\@ItemRegistry\@\@AEBA?AV?$WeakPtr\@VItem\@\@\@\@AEAHV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI class WeakPtr<class Item> lookupByName(int &, class std::basic_string_view<char, struct std::char_traits<char>>) const;
    /**
     * @symbol  ?lookupByName\@ItemRegistry\@\@AEBA?AV?$WeakPtr\@VItem\@\@\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI class WeakPtr<class Item> lookupByName(class HashedString const &) const;
    /**
     * @symbol  ?lookupByNameNoAlias\@ItemRegistry\@\@AEBA?AV?$WeakPtr\@VItem\@\@\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI class WeakPtr<class Item> lookupByNameNoAlias(class HashedString const &) const;
    /**
     * @symbol  ?lookupByNameNoAlias\@ItemRegistry\@\@AEBA?AV?$WeakPtr\@VItem\@\@\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI class WeakPtr<class Item> lookupByNameNoAlias(class std::basic_string_view<char, struct std::char_traits<char>>) const;
    /**
     * @symbol  ?lookupByNameNoParsing\@ItemRegistry\@\@AEBA?AV?$WeakPtr\@VItem\@\@\@\@AEAHAEBVHashedString\@\@\@Z
     */
    MCAPI class WeakPtr<class Item> lookupByNameNoParsing(int &, class HashedString const &) const;
    /**
     * @symbol  ?lookupByTag\@ItemRegistry\@\@AEBAAEBV?$unordered_set\@PEBVItem\@\@U?$hash\@PEBVItem\@\@\@std\@\@U?$equal_to\@PEBVItem\@\@\@3\@V?$allocator\@PEBVItem\@\@\@3\@\@std\@\@AEBUItemTag\@\@\@Z
     */
    MCAPI class std::unordered_set<class Item const *, struct std::hash<class Item const *>, struct std::equal_to<class Item const *>, class std::allocator<class Item const *>> const & lookupByTag(struct ItemTag const &) const;
    /**
     * @symbol  ?lookupByVanillaName\@ItemRegistry\@\@AEBA?AV?$WeakPtr\@VItem\@\@\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI class WeakPtr<class Item> lookupByVanillaName(class HashedString const &) const;
    /**
     * @symbol  ?registerAlias\@ItemRegistry\@\@AEAAXAEBVHashedString\@\@0AEBVBaseGameVersion\@\@\@Z
     */
    MCAPI void registerAlias(class HashedString const &, class HashedString const &, class BaseGameVersion const &);
    /**
     * @symbol  ?registerComplexAlias\@ItemRegistry\@\@AEAA?AV?$WeakPtr\@VItem\@\@\@\@AEBVHashedString\@\@V?$function\@$$A6A?AVHashedString\@\@F\@Z\@std\@\@\@Z
     */
    MCAPI class WeakPtr<class Item> registerComplexAlias(class HashedString const &, class std::function<class HashedString (short)>);
    /**
     * @symbol  ?registerExtraItemInitCallback\@ItemRegistry\@\@AEAAXV?$function\@$$A6AXVItemRegistryRef\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void registerExtraItemInitCallback(class std::function<void (class ItemRegistryRef)>);
    /**
     * @symbol  ?registerItem\@ItemRegistry\@\@AEAAXV?$SharedPtr\@VItem\@\@\@\@\@Z
     */
    MCAPI void registerItem(class SharedPtr<class Item>);
    /**
     * @symbol  ?registerLegacyID\@ItemRegistry\@\@AEAAXAEBVHashedString\@\@F\@Z
     */
    MCAPI void registerLegacyID(class HashedString const &, short);
    /**
     * @symbol  ?registerLegacyMapping\@ItemRegistry\@\@AEAAXAEBVHashedString\@\@0AEBVBaseGameVersion\@\@\@Z
     */
    MCAPI void registerLegacyMapping(class HashedString const &, class HashedString const &, class BaseGameVersion const &);
    /**
     * @symbol  ?remapToFullLegacyNameByHash\@ItemRegistry\@\@AEAA_K_K\@Z
     */
    MCAPI unsigned __int64 remapToFullLegacyNameByHash(unsigned __int64);
    /**
     * @symbol  ?remapToLegacyNameByHash\@ItemRegistry\@\@AEAA_K_K\@Z
     */
    MCAPI unsigned __int64 remapToLegacyNameByHash(unsigned __int64);
    /**
     * @symbol  ?setCheckForItemWorldCompatibility\@ItemRegistry\@\@AEAAX_N\@Z
     */
    MCAPI void setCheckForItemWorldCompatibility(bool);
    /**
     * @symbol  ?setOwningThreadId\@ItemRegistry\@\@AEAAXVid\@thread\@std\@\@\@Z
     */
    MCAPI void setOwningThreadId(class std::thread::id);
    /**
     * @symbol  ?setServerInitializingCreativeItems\@ItemRegistry\@\@AEAAX_N\@Z
     */
    MCAPI void setServerInitializingCreativeItems(bool);
    /**
     * @symbol  ?setWorldBaseGameVersion\@ItemRegistry\@\@AEAAXAEBVBaseGameVersion\@\@\@Z
     */
    MCAPI void setWorldBaseGameVersion(class BaseGameVersion const &);
    /**
     * @symbol  ?shouldCheckForItemWorldCompatibility\@ItemRegistry\@\@AEAA_NXZ
     */
    MCAPI bool shouldCheckForItemWorldCompatibility();
    /**
     * @symbol  ?shutdown\@ItemRegistry\@\@AEAAXXZ
     */
    MCAPI void shutdown();
    /**
     * @symbol  ?unregisterItem\@ItemRegistry\@\@AEAAXAEBVHashedString\@\@\@Z
     */
    MCAPI void unregisterItem(class HashedString const &);
    /**
     * @symbol  ?validateServerItemComponents\@ItemRegistry\@\@AEAA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBV?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VCompoundTag\@\@\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VCompoundTag\@\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI std::vector<std::string> validateServerItemComponents(std::vector<struct std::pair<std::string, class CompoundTag>> const &);

private:

};