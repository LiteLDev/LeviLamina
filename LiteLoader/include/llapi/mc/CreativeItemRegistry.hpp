/**
 * @file  CreativeItemRegistry.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CreativeItemRegistry.
 *
 */
class CreativeItemRegistry {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CREATIVEITEMREGISTRY
public:
    class CreativeItemRegistry& operator=(class CreativeItemRegistry const &) = delete;
    CreativeItemRegistry(class CreativeItemRegistry const &) = delete;
#endif

public:
    /**
     * @hash   -759270965
     * @symbol ??0CreativeItemRegistry@@QEAA@XZ
     */
    MCAPI CreativeItemRegistry();
    /**
     * @hash   1432589823
     * @symbol ?findCreativeItemEntry@CreativeItemRegistry@@QEAAPEAVCreativeItemEntry@@AEBV?$TypedServerNetId@UCreativeItemNetIdTag@@I$0A@@@@Z
     */
    MCAPI class CreativeItemEntry * findCreativeItemEntry(class TypedServerNetId<struct CreativeItemNetIdTag, unsigned int, 0> const &);
    /**
     * @hash   1772282524
     * @symbol ?findCreativeItemEntry@CreativeItemRegistry@@QEAAPEAVCreativeItemEntry@@AEBVItemInstance@@@Z
     */
    MCAPI class CreativeItemEntry * findCreativeItemEntry(class ItemInstance const &);
    /**
     * @hash   -2096951870
     * @symbol ?getCreativeCategory@CreativeItemRegistry@@QEAAPEAVCreativeItemGroupCategory@@W4CreativeItemCategory@@@Z
     */
    MCAPI class CreativeItemGroupCategory * getCreativeCategory(enum class CreativeItemCategory);
    /**
     * @hash   1016998060
     * @symbol ?getCreativeGroup@CreativeItemRegistry@@QEAAPEAVCreativeGroupInfo@@I@Z
     */
    MCAPI class CreativeGroupInfo * getCreativeGroup(unsigned int);
    /**
     * @hash   347709164
     * @symbol ?getCreativeItemEntries@CreativeItemRegistry@@QEAAAEBV?$vector@VCreativeItemEntry@@V?$allocator@VCreativeItemEntry@@@std@@@std@@XZ
     */
    MCAPI std::vector<class CreativeItemEntry> const & getCreativeItemEntries();
    /**
     * @hash   -2013654240
     * @symbol ?getItemEntry@CreativeItemRegistry@@QEAAPEAVCreativeItemEntry@@I@Z
     */
    MCAPI class CreativeItemEntry * getItemEntry(unsigned int);
    /**
     * @hash   -504394559
     * @symbol ?newCreativeCategory@CreativeItemRegistry@@QEAAPEAVCreativeItemGroupCategory@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CreativeItemCategory@@@Z
     */
    MCAPI class CreativeItemGroupCategory * newCreativeCategory(std::string const &, enum class CreativeItemCategory);
    /**
     * @hash   -1919652950
     * @symbol ?newCreativeGroup@CreativeItemRegistry@@QEAAPEAVCreativeGroupInfo@@W4CreativeItemCategory@@AEBVHashedString@@AEBVItemInstance@@@Z
     */
    MCAPI class CreativeGroupInfo * newCreativeGroup(enum class CreativeItemCategory, class HashedString const &, class ItemInstance const &);
    /**
     * @hash   647497980
     * @symbol ?newItemEntry@CreativeItemRegistry@@QEAAPEAVCreativeItemEntry@@AEBV?$TypedServerNetId@UCreativeItemNetIdTag@@I$0A@@@AEBVItemInstance@@@Z
     */
    MCAPI class CreativeItemEntry * newItemEntry(class TypedServerNetId<struct CreativeItemNetIdTag, unsigned int, 0> const &, class ItemInstance const &);
    /**
     * @hash   -1278050285
     * @symbol ?resetGroups@CreativeItemRegistry@@QEAAXXZ
     */
    MCAPI void resetGroups();
    /**
     * @hash   -1991475267
     * @symbol ?updateItemEntry@CreativeItemRegistry@@QEAAPEAVCreativeItemEntry@@IAEBVItemInstance@@@Z
     */
    MCAPI class CreativeItemEntry * updateItemEntry(unsigned int, class ItemInstance const &);
    /**
     * @hash   -150704251
     * @symbol ?updateNetIdMap@CreativeItemRegistry@@QEAAXXZ
     */
    MCAPI void updateNetIdMap();
    /**
     * @hash   1456821769
     * @symbol ?current@CreativeItemRegistry@@SAPEAV1@XZ
     */
    MCAPI static class CreativeItemRegistry * current();
    /**
     * @hash   -523271344
     * @symbol ?forEachCreativeItemInstance@CreativeItemRegistry@@SAXV?$function@$$A6A_NAEAVItemInstance@@@Z@std@@@Z
     */
    MCAPI static void forEachCreativeItemInstance(class std::function<bool (class ItemInstance &)>);
    /**
     * @hash   1899637247
     * @symbol ?mCreativeListMutex@CreativeItemRegistry@@2Vmutex@std@@A
     */
    MCAPI static class std::mutex mCreativeListMutex;
    /**
     * @hash   -743334783
     * @symbol ?reset@CreativeItemRegistry@@SAXXZ
     */
    MCAPI static void reset();
    /**
     * @hash   -1285131894
     * @symbol ?setCurrentRegistry@CreativeItemRegistry@@SAX$$QEAV?$unique_ptr@VCreativeItemRegistry@@U?$default_delete@VCreativeItemRegistry@@@std@@@std@@@Z
     */
    MCAPI static void setCurrentRegistry(std::unique_ptr<class CreativeItemRegistry> &&);

//private:
    /**
     * @hash   828134822
     * @symbol ?_forEachCreativeItemInstance@CreativeItemRegistry@@AEAAXV?$function@$$A6A_NAEAVItemInstance@@@Z@std@@@Z
     */
    MCAPI void _forEachCreativeItemInstance(class std::function<bool (class ItemInstance &)>);

private:
    /**
     * @hash   877489007
     * @symbol ?mCurrentRegistry@CreativeItemRegistry@@0V?$unique_ptr@VCreativeItemRegistry@@U?$default_delete@VCreativeItemRegistry@@@std@@@std@@A
     */
    MCAPI static std::unique_ptr<class CreativeItemRegistry> mCurrentRegistry;

};