/**
 * @file  BlockTypeRegistry.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include <shared_mutex>

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockTypeRegistry.
 *
 */
class BlockTypeRegistry {

#define AFTER_EXTRA
// Add Member There
    class InhibitModificationsLock;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKTYPEREGISTRY
public:
    class BlockTypeRegistry& operator=(class BlockTypeRegistry const &) = delete;
    BlockTypeRegistry(class BlockTypeRegistry const &) = delete;
    BlockTypeRegistry() = delete;
#endif

public:
    /**
     * @hash   1239520146
     * @symbol ?computeBlockTypeRegistryChecksum@BlockTypeRegistry@@SA_KAEBVBaseGameVersion@@@Z
     */
    MCAPI static unsigned __int64 computeBlockTypeRegistryChecksum(class BaseGameVersion const &);
    /**
     * @hash   1301557558
     * @symbol ?forEachBlock@BlockTypeRegistry@@SAXV?$function@$$A6A_NAEBVBlockLegacy@@@Z@std@@@Z
     */
    MCAPI static void forEachBlock(class std::function<bool (class BlockLegacy const &)>);
    /**
     * @hash   -460747488
     * @symbol ?getDefaultBlockState@BlockTypeRegistry@@SAAEBVBlock@@AEBVHashedString@@_N@Z
     */
    MCAPI static class Block const & getDefaultBlockState(class HashedString const &, bool);
    /**
     * @hash   -1307409889
     * @symbol ?getEntityRegistry@BlockTypeRegistry@@SA?AV?$StackRefResultT@UEntityRegistryRefTraits@@@@XZ
     */
    MCAPI static class StackRefResultT<struct EntityRegistryRefTraits> getEntityRegistry();
    /**
     * @hash   714173630
     * @symbol ?initBlockEntities@BlockTypeRegistry@@SAXAEBVExperiments@@@Z
     */
    MCAPI static void initBlockEntities(class Experiments const &);
    /**
     * @hash   836658513
     * @symbol ?initEntityRegistry@BlockTypeRegistry@@SAXXZ
     */
    MCAPI static void initEntityRegistry();
    /**
     * @hash   521534469
     * @symbol ?isBlockDataDriven@BlockTypeRegistry@@SA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static bool isBlockDataDriven(std::string const &);
    /**
     * @hash   756063530
     * @symbol ?lockAgainstRegistryModifications@BlockTypeRegistry@@SA?AVBlockTypeRegistryReadLock@@XZ
     */
    MCAPI static class BlockTypeRegistryReadLock lockAgainstRegistryModifications();
    /**
     * @hash   1202687370
     * @symbol ?lockForRegistryModifications@BlockTypeRegistry@@SA?AVBlockTypeRegistryModificationsLock@@XZ
     */
    MCAPI static class BlockTypeRegistryModificationsLock lockForRegistryModifications();
    /**
     * @hash   -1929047923
     * @symbol ?lookupByName@BlockTypeRegistry@@SA?AV?$WeakPtr@VBlockLegacy@@@@AEBVHashedString@@_N@Z
     */
    MCAPI static class WeakPtr<class BlockLegacy> lookupByName(class HashedString const &, bool);
    /**
     * @hash   548215916
     * @symbol ?prepareBlocks@BlockTypeRegistry@@SAXI@Z
     */
    MCAPI static void prepareBlocks(unsigned int);
    /**
     * @hash   -368041733
     * @symbol ?registerAlias@BlockTypeRegistry@@SAXAEBVHashedString@@0@Z
     */
    MCAPI static void registerAlias(class HashedString const &, class HashedString const &);
    /**
     * @hash   -2071816288
     * @symbol ?unregisterBlock@BlockTypeRegistry@@SAXAEBVHashedString@@@Z
     */
    MCAPI static void unregisterBlock(class HashedString const &);
    /**
     * @hash   1520189077
     * @symbol ?unregisterBlocks@BlockTypeRegistry@@SAXXZ
     */
    MCAPI static void unregisterBlocks();

//private:

private:
    /**
     * @hash   1254082634
     * @symbol ?mBlockAliasLookupMap@BlockTypeRegistry@@0V?$unordered_map@VHashedString@@V1@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@3@V?$allocator@U?$pair@$$CBVHashedString@@V1@@std@@@3@@std@@A
     */
    MCAPI static class std::unordered_map<class HashedString, class HashedString, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class HashedString>>> mBlockAliasLookupMap;
    /**
     * @hash   -347057242
     * @symbol ?mBlockLookupMap@BlockTypeRegistry@@0V?$map@VHashedString@@V?$SharedPtr@VBlockLegacy@@@@U?$less@VHashedString@@@std@@V?$allocator@U?$pair@$$CBVHashedString@@V?$SharedPtr@VBlockLegacy@@@@@std@@@4@@std@@A
     */
    MCAPI static class std::map<class HashedString, class SharedPtr<class BlockLegacy>, struct std::less<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class SharedPtr<class BlockLegacy>>>> mBlockLookupMap;
    /**
     * @hash   1216090067
     * @symbol ?mEntities@BlockTypeRegistry@@0V?$OwnerPtrT@UEntityRegistryRefTraits@@@@A
     */
    MCAPI static class OwnerPtrT<struct EntityRegistryRefTraits> mEntities;
    /**
     * @hash   1591410004
     * @symbol ?mKnownNamespaces@BlockTypeRegistry@@0V?$set@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@A
     */
    MCAPI static class std::set<std::string, struct std::less<std::string>, class std::allocator<std::string>> mKnownNamespaces;
    /**
     * @hash   -1816769675
     * @symbol ?mRWLock@BlockTypeRegistry@@0V?$shared_ptr@VBlockTypeRegistryRWLock@@@std@@A
     */
    MCAPI static class std::shared_ptr<class BlockTypeRegistryRWLock> mRWLock;

};