/**
 * @file  MC/ItemRegistry.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
    ItemRegistry() = delete;
#endif

public:
    /**
     * @hash   -1907278319
     * @symbol ?MINECRAFT_NAMESPACE@ItemRegistry@@2V?$basic_string_span@$$CBD$0?0@gsl@@B
     */
    MCAPI static class gsl::basic_string_span<char const, -1> const MINECRAFT_NAMESPACE;
    /**
     * @hash   -528964872
     * @symbol ?_parseItemDefinition@ItemRegistry@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@_NV?$function@$$A6AXAEAV?$WeakPtr@VItem@@@@AEAVValue@Json@@AEBVSemVersion@@@Z@3@1W4ItemVersion@@W4PackType@@@Z
     */
    MCAPI static std::string _parseItemDefinition(std::string const &, bool, class std::function<void (class WeakPtr<class Item> &, class Json::Value &, class SemVersion const &)>, bool, enum ItemVersion, enum PackType);
    /**
     * @hash   -819749094
     * @symbol ?addItemToTagMap@ItemRegistry@@SAXAEBVItem@@@Z
     */
    MCAPI static void addItemToTagMap(class Item const &);
    /**
     * @hash   -1020047292
     * @symbol ?allowTagUpdate@ItemRegistry@@SA?AVTagUpdateToken@@XZ
     */
    MCAPI static class TagUpdateToken allowTagUpdate();
    /**
     * @hash   991621904
     * @symbol ?alterAvailableCreativeItems@ItemRegistry@@SAXPEAVActorInfoRegistry@@AEAVLevelData@@@Z
     */
    MCAPI static void alterAvailableCreativeItems(class ActorInfoRegistry *, class LevelData &);
    /**
     * @hash   -1377296765
     * @symbol ?clearItemAndCreativeItemRegistry@ItemRegistry@@SAXXZ
     */
    MCAPI static void clearItemAndCreativeItemRegistry();
    /**
     * @hash   -421830345
     * @symbol ?digestServerItemComponents@ItemRegistry@@SAXAEBV?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VCompoundTag@@@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VCompoundTag@@@std@@@2@@std@@@Z
     */
    MCAPI static void digestServerItemComponents(std::vector<struct std::pair<std::string, class CompoundTag>> const &);
    /**
     * @hash   240211955
     * @symbol ?finishedRegistration@ItemRegistry@@SAXXZ
     */
    MCAPI static void finishedRegistration();
    /**
     * @hash   -819291267
     * @symbol ?getItem@ItemRegistry@@SA?AV?$WeakPtr@VItem@@@@F@Z
     */
    MCAPI static class WeakPtr<class Item> getItem(short);
    /**
     * @hash   651917448
     * @symbol ?getItemCount@ItemRegistry@@SAHXZ
     */
    MCAPI static int getItemCount();
    /**
     * @hash   -1472343347
     * @symbol ?getItemResponseFactory@ItemRegistry@@SAPEAVItemEventResponseFactory@@XZ
     */
    MCAPI static class ItemEventResponseFactory * getItemResponseFactory();
    /**
     * @hash   -1098724232
     * @symbol ?getNameFromAlias@ItemRegistry@@SA?AU?$pair@VHashedString@@H@std@@AEBVHashedString@@H@Z
     */
    MCAPI static struct std::pair<class HashedString, int> getNameFromAlias(class HashedString const &, int);
    /**
     * @hash   -2140729726
     * @symbol ?getNameFromLegacyID@ItemRegistry@@SA?AVHashedString@@F@Z
     */
    MCAPI static class HashedString getNameFromLegacyID(short);
    /**
     * @hash   -1777354179
     * @symbol ?getNameToItemMap@ItemRegistry@@SAAEBV?$unordered_map@VHashedString@@V?$WeakPtr@VItem@@@@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@4@V?$allocator@U?$pair@$$CBVHashedString@@V?$WeakPtr@VItem@@@@@std@@@4@@std@@XZ
     */
    MCAPI static class std::unordered_map<class HashedString, class WeakPtr<class Item>, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class WeakPtr<class Item>>>> const & getNameToItemMap();
    /**
     * @hash   1795091293
     * @symbol ?initCreativeItemsServer@ItemRegistry@@SAXPEAVActorInfoRegistry@@PEAVBlockDefinitionGroup@@_NAEBVExperiments@@V?$function@$$A6AXVItemRegistryRef@@PEAVActorInfoRegistry@@PEAVBlockDefinitionGroup@@PEAVCreativeItemRegistry@@_NAEBVBaseGameVersion@@AEBVExperiments@@@Z@std@@@Z
     */
    MCAPI static void initCreativeItemsServer(class ActorInfoRegistry *, class BlockDefinitionGroup *, bool, class Experiments const &, class std::function<void (class ItemRegistryRef, class ActorInfoRegistry *, class BlockDefinitionGroup *, class CreativeItemRegistry *, bool, class BaseGameVersion const &, class Experiments const &)>);
    /**
     * @hash   -1145355258
     * @symbol ?initServerData@ItemRegistry@@SAXAEAVResourcePackManager@@AEBVExperiments@@W4ItemVersion@@@Z
     */
    MCAPI static void initServerData(class ResourcePackManager &, class Experiments const &, enum ItemVersion);
    /**
     * @hash   -1930211685
     * @symbol ?isComponentBasedItemSchema@ItemRegistry@@SA_NAEBVSemVersion@@@Z
     */
    MCAPI static bool isComponentBasedItemSchema(class SemVersion const &);
    /**
     * @hash   -297359195
     * @symbol ?isCreativeItem@ItemRegistry@@SA_NAEBVItemInstance@@@Z
     */
    MCAPI static bool isCreativeItem(class ItemInstance const &);
    /**
     * @hash   1850968261
     * @symbol ?mCanAddTags@ItemRegistry@@2_NA
     */
    MCAPI static bool mCanAddTags;
    /**
     * @hash   -2119263466
     * @symbol ?mCheckForItemWorldCompatibility@ItemRegistry@@2_NA
     */
    MCAPI static bool mCheckForItemWorldCompatibility;
    /**
     * @hash   673492709
     * @symbol ?mCompatibilityCheckLock@ItemRegistry@@2Vmutex@std@@A
     */
    MCAPI static class std::mutex mCompatibilityCheckLock;
    /**
     * @hash   1699286673
     * @symbol ?mDeadItemRegistry@ItemRegistry@@2V?$vector@V?$SharedPtr@VItem@@@@V?$allocator@V?$SharedPtr@VItem@@@@@std@@@std@@A
     */
    MCAPI static std::vector<class SharedPtr<class Item>> mDeadItemRegistry;
    /**
     * @hash   672315172
     * @symbol ?mItemRegistryInstance@ItemRegistry@@2V1@A
     */
    MCAPI static class ItemRegistry mItemRegistryInstance;
    /**
     * @hash   -712551005
     * @symbol ?mResponseFactory@ItemRegistry@@2V?$unique_ptr@VItemEventResponseFactory@@U?$default_delete@VItemEventResponseFactory@@@std@@@std@@A
     */
    MCAPI static std::unique_ptr<class ItemEventResponseFactory> mResponseFactory;
    /**
     * @hash   -1181357284
     * @symbol ?mServerInitializingCreativeItems@ItemRegistry@@2_NA
     */
    MCAPI static bool mServerInitializingCreativeItems;
    /**
     * @hash   774468671
     * @symbol ?mWorldBaseGameVersion@ItemRegistry@@2VBaseGameVersion@@A
     */
    MCAPI static class BaseGameVersion mWorldBaseGameVersion;
    /**
     * @hash   530263048
     * @symbol ?registerAlias@ItemRegistry@@SAXAEBVHashedString@@0AEBVBaseGameVersion@@@Z
     */
    MCAPI static void registerAlias(class HashedString const &, class HashedString const &, class BaseGameVersion const &);
    /**
     * @hash   400697722
     * @symbol ?registerComplexAlias@ItemRegistry@@SAAEAVItem@@AEBVHashedString@@V?$function@$$A6A?AVHashedString@@F@Z@std@@@Z
     */
    MCAPI static class Item & registerComplexAlias(class HashedString const &, class std::function<class HashedString (short)>);
    /**
     * @hash   -1929896974
     * @symbol ?registerLegacyID@ItemRegistry@@SAXAEBVHashedString@@F@Z
     */
    MCAPI static void registerLegacyID(class HashedString const &, short);
    /**
     * @hash   1577475518
     * @symbol ?registerLegacyMapping@ItemRegistry@@SAXAEBVHashedString@@0AEBVBaseGameVersion@@@Z
     */
    MCAPI static void registerLegacyMapping(class HashedString const &, class HashedString const &, class BaseGameVersion const &);
    /**
     * @hash   984338897
     * @symbol ?remapToFullLegacyNameByHash@ItemRegistry@@SA_K_K@Z
     */
    MCAPI static unsigned __int64 remapToFullLegacyNameByHash(unsigned __int64);
    /**
     * @hash   -1780666623
     * @symbol ?remapToLegacyNameByHash@ItemRegistry@@SA_K_K@Z
     */
    MCAPI static unsigned __int64 remapToLegacyNameByHash(unsigned __int64);
    /**
     * @hash   -1647220438
     * @symbol ?setOwningThreadId@ItemRegistry@@SAXVid@thread@std@@@Z
     */
    MCAPI static void setOwningThreadId(class std::thread::id);
    /**
     * @hash   -1706429122
     * @symbol ?setWorldBaseGameVersion@ItemRegistry@@SAXAEBVBaseGameVersion@@@Z
     */
    MCAPI static void setWorldBaseGameVersion(class BaseGameVersion const &);
    /**
     * @hash   1753204915
     * @symbol ?shutdown@ItemRegistry@@SAXXZ
     */
    MCAPI static void shutdown();
    /**
     * @hash   2024775345
     * @symbol ?startRegistration@ItemRegistry@@SAXXZ
     */
    MCAPI static void startRegistration();
    /**
     * @hash   575987749
     * @symbol ?validateServerItemComponents@ItemRegistry@@SA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBV?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VCompoundTag@@@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VCompoundTag@@@std@@@2@@3@@Z
     */
    MCAPI static std::vector<std::string> validateServerItemComponents(std::vector<struct std::pair<std::string, class CompoundTag>> const &);

//private:
    /**
     * @symbol ?lookupByName@ItemRegistry@@AEBA?AV?$WeakPtr@VItem@@@@AEAH0V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
     */
    MCAPI class WeakPtr<class Item> lookupByName(int &, int &, class std::basic_string_view<char, struct std::char_traits<char>>) const;
    /**
     * @symbol ?lookupByName@ItemRegistry@@AEBA?AV?$WeakPtr@VItem@@@@AEAHV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
     */
    MCAPI class WeakPtr<class Item> lookupByName(int &, class std::basic_string_view<char, struct std::char_traits<char>>) const;
    /**
     * @hash   -1830462266
     * @symbol ?lookupByName@ItemRegistry@@AEBA?AV?$WeakPtr@VItem@@@@AEBVHashedString@@@Z
     */
    MCAPI class WeakPtr<class Item> lookupByName(class HashedString const &) const;
    /**
     * @hash   1251615807
     * @symbol ?lookupByNameNoAlias@ItemRegistry@@AEBA?AV?$WeakPtr@VItem@@@@AEBVHashedString@@@Z
     */
    MCAPI class WeakPtr<class Item> lookupByNameNoAlias(class HashedString const &) const;
    /**
     * @symbol ?lookupByNameNoAlias@ItemRegistry@@AEBA?AV?$WeakPtr@VItem@@@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
     */
    MCAPI class WeakPtr<class Item> lookupByNameNoAlias(class std::basic_string_view<char, struct std::char_traits<char>>) const;
    /**
     * @hash   -860253440
     * @symbol ?lookupByNameNoParsing@ItemRegistry@@AEBA?AV?$WeakPtr@VItem@@@@AEAHAEBVHashedString@@@Z
     */
    MCAPI class WeakPtr<class Item> lookupByNameNoParsing(int &, class HashedString const &) const;
    /**
     * @hash   -754652352
     * @symbol ?lookupByTag@ItemRegistry@@AEBAAEBV?$unordered_set@PEBVItem@@U?$hash@PEBVItem@@@std@@U?$equal_to@PEBVItem@@@3@V?$allocator@PEBVItem@@@3@@std@@AEBUItemTag@@@Z
     */
    MCAPI class std::unordered_set<class Item const *, struct std::hash<class Item const *>, struct std::equal_to<class Item const *>, class std::allocator<class Item const *>> const & lookupByTag(struct ItemTag const &) const;
    /**
     * @symbol ?lookupByVanillaName@ItemRegistry@@AEBA?AV?$WeakPtr@VItem@@@@AEBVHashedString@@@Z
     */
    MCAPI class WeakPtr<class Item> lookupByVanillaName(class HashedString const &) const;
    /**
     * @hash   -1779913791
     * @symbol ?registerItem@ItemRegistry@@AEAAXV?$SharedPtr@VItem@@@@@Z
     */
    MCAPI void registerItem(class SharedPtr<class Item>);
    /**
     * @hash   1824329392
     * @symbol ?unregisterItem@ItemRegistry@@AEAAXAEBVHashedString@@@Z
     */
    MCAPI void unregisterItem(class HashedString const &);
    /**
     * @hash   1013870045
     * @symbol ?_loadItemDefinition@ItemRegistry@@CAXAEAVValue@Json@@_NV?$function@$$A6AXAEAV?$WeakPtr@VItem@@@@AEAVValue@Json@@AEBVSemVersion@@@Z@std@@1W4ItemVersion@@W4PackType@@@Z
     */
    MCAPI static void _loadItemDefinition(class Json::Value &, bool, class std::function<void (class WeakPtr<class Item> &, class Json::Value &, class SemVersion const &)>, bool, enum ItemVersion, enum PackType);

private:
    /**
     * @hash   -1911043071
     * @symbol ?mAttachableDefinitions@ItemRegistry@@0V?$vector@VHashedString@@V?$allocator@VHashedString@@@std@@@std@@A
     */
    MCAPI static std::vector<class HashedString> mAttachableDefinitions;
    /**
     * @hash   1257262867
     * @symbol ?mComplexAliasLookupMap@ItemRegistry@@0V?$unordered_map@VHashedString@@V?$function@$$A6A?AVHashedString@@F@Z@std@@U?$hash@VHashedString@@@3@U?$equal_to@VHashedString@@@3@V?$allocator@U?$pair@$$CBVHashedString@@V?$function@$$A6A?AVHashedString@@F@Z@std@@@std@@@3@@std@@A
     */
    MCAPI static class std::unordered_map<class HashedString, class std::function<class HashedString (short)>, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class std::function<class HashedString (short)>>>> mComplexAliasLookupMap;
    /**
     * @hash   -1935728289
     * @symbol ?mEmptyItemSet@ItemRegistry@@0V?$unordered_set@PEBVItem@@U?$hash@PEBVItem@@@std@@U?$equal_to@PEBVItem@@@3@V?$allocator@PEBVItem@@@3@@std@@B
     */
    MCAPI static class std::unordered_set<class Item const *, struct std::hash<class Item const *>, struct std::equal_to<class Item const *>, class std::allocator<class Item const *>> const mEmptyItemSet;
    /**
     * @hash   -1562144940
     * @symbol ?mIdToItemMap@ItemRegistry@@0V?$unordered_map@HV?$WeakPtr@VItem@@@@U?$hash@H@std@@U?$equal_to@H@3@V?$allocator@U?$pair@$$CBHV?$WeakPtr@VItem@@@@@std@@@3@@std@@A
     */
    MCAPI static class std::unordered_map<int, class WeakPtr<class Item>, struct std::hash<int>, struct std::equal_to<int>, class std::allocator<struct std::pair<int const, class WeakPtr<class Item>>>> mIdToItemMap;
    /**
     * @hash   1164800342
     * @symbol ?mItemAliasLookupMap@ItemRegistry@@0V?$unordered_map@VHashedString@@UItemAlias@ItemRegistry@@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@5@V?$allocator@U?$pair@$$CBVHashedString@@UItemAlias@ItemRegistry@@@std@@@5@@std@@A
     */
    MCAPI static class std::unordered_map<class HashedString, struct ItemRegistry::ItemAlias, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, struct ItemRegistry::ItemAlias>>> mItemAliasLookupMap;
    /**
     * @hash   -663010038
     * @symbol ?mItemRegistry@ItemRegistry@@0V?$vector@V?$SharedPtr@VItem@@@@V?$allocator@V?$SharedPtr@VItem@@@@@std@@@std@@A
     */
    MCAPI static std::vector<class SharedPtr<class Item>> mItemRegistry;
    /**
     * @hash   1596434433
     * @symbol ?mLegacyIDToNameMap@ItemRegistry@@0V?$unordered_map@FVHashedString@@U?$hash@F@std@@U?$equal_to@F@3@V?$allocator@U?$pair@$$CBFVHashedString@@@std@@@3@@std@@A
     */
    MCAPI static class std::unordered_map<short, class HashedString, struct std::hash<short>, struct std::equal_to<short>, class std::allocator<struct std::pair<short const, class HashedString>>> mLegacyIDToNameMap;
    /**
     * @hash   1101942107
     * @symbol ?mMaxItemID@ItemRegistry@@0FA
     */
    MCAPI static short mMaxItemID;
    /**
     * @hash   -1691455824
     * @symbol ?mNameToItemMap@ItemRegistry@@0V?$unordered_map@VHashedString@@V?$WeakPtr@VItem@@@@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@4@V?$allocator@U?$pair@$$CBVHashedString@@V?$WeakPtr@VItem@@@@@std@@@4@@std@@A
     */
    MCAPI static class std::unordered_map<class HashedString, class WeakPtr<class Item>, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class WeakPtr<class Item>>>> mNameToItemMap;
    /**
     * @hash   336207215
     * @symbol ?mOwnerThread@ItemRegistry@@0Vid@thread@std@@A
     */
    MCAPI static class std::thread::id mOwnerThread;
    /**
     * @hash   -10696785
     * @symbol ?mReverseAliasLookupMap@ItemRegistry@@0V?$unordered_map@_KUItemHashAlias@ItemRegistry@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUItemHashAlias@ItemRegistry@@@std@@@4@@std@@A
     */
    MCAPI static class std::unordered_map<unsigned __int64, struct ItemRegistry::ItemHashAlias, struct std::hash<unsigned __int64>, struct std::equal_to<unsigned __int64>, class std::allocator<struct std::pair<unsigned __int64 const, struct ItemRegistry::ItemHashAlias>>> mReverseAliasLookupMap;
    /**
     * @hash   50471689
     * @symbol ?mReverseFullNameAliasLookupMap@ItemRegistry@@0V?$unordered_map@_KUItemHashAlias@ItemRegistry@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUItemHashAlias@ItemRegistry@@@std@@@4@@std@@A
     */
    MCAPI static class std::unordered_map<unsigned __int64, struct ItemRegistry::ItemHashAlias, struct std::hash<unsigned __int64>, struct std::equal_to<unsigned __int64>, class std::allocator<struct std::pair<unsigned __int64 const, struct ItemRegistry::ItemHashAlias>>> mReverseFullNameAliasLookupMap;
    /**
     * @hash   -1181890728
     * @symbol ?mTagToItemsMap@ItemRegistry@@0V?$unordered_map@UItemTag@@V?$unordered_set@PEBVItem@@U?$hash@PEBVItem@@@std@@U?$equal_to@PEBVItem@@@3@V?$allocator@PEBVItem@@@3@@std@@U?$hash@UItemTag@@@3@U?$equal_to@UItemTag@@@3@V?$allocator@U?$pair@$$CBUItemTag@@V?$unordered_set@PEBVItem@@U?$hash@PEBVItem@@@std@@U?$equal_to@PEBVItem@@@3@V?$allocator@PEBVItem@@@3@@std@@@std@@@3@@std@@A
     */
    MCAPI static class std::unordered_map<struct ItemTag, class std::unordered_set<class Item const *, struct std::hash<class Item const *>, struct std::equal_to<class Item const *>, class std::allocator<class Item const *>>, struct std::hash<struct ItemTag>, struct std::equal_to<struct ItemTag>, class std::allocator<struct std::pair<struct ItemTag const, class std::unordered_set<class Item const *, struct std::hash<class Item const *>, struct std::equal_to<class Item const *>, class std::allocator<class Item const *>>>>> mTagToItemsMap;
    /**
     * @hash   907890543
     * @symbol ?mTileItemNameToItemMap@ItemRegistry@@0V?$unordered_map@VHashedString@@V?$WeakPtr@VItem@@@@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@4@V?$allocator@U?$pair@$$CBVHashedString@@V?$WeakPtr@VItem@@@@@std@@@4@@std@@A
     */
    MCAPI static class std::unordered_map<class HashedString, class WeakPtr<class Item>, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class WeakPtr<class Item>>>> mTileItemNameToItemMap;
    /**
     * @hash   1868315240
     * @symbol ?mTileNamespaceToItemMap@ItemRegistry@@0V?$unordered_map@VHashedString@@V?$WeakPtr@VItem@@@@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@4@V?$allocator@U?$pair@$$CBVHashedString@@V?$WeakPtr@VItem@@@@@std@@@4@@std@@A
     */
    MCAPI static class std::unordered_map<class HashedString, class WeakPtr<class Item>, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class WeakPtr<class Item>>>> mTileNamespaceToItemMap;

};