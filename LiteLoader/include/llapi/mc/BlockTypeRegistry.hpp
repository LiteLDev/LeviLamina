/**
 * @file  BlockTypeRegistry.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
    struct LookupByNameImplReturnType;
    class InhibitModificationsLock;
    struct BlockComplexAliasBlockState;
    class BlockComplexAliasContent;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKTYPEREGISTRY
public:
    class BlockTypeRegistry& operator=(class BlockTypeRegistry const &) = delete;
    BlockTypeRegistry(class BlockTypeRegistry const &) = delete;
    BlockTypeRegistry() = delete;
#endif

public:
    /**
     * @hash   2055708978
     * @symbol  ?computeBlockTypeRegistryChecksum\@BlockTypeRegistry\@\@SA_KAEBVBaseGameVersion\@\@\@Z
     */
    MCAPI static unsigned __int64 computeBlockTypeRegistryChecksum(class BaseGameVersion const &);
    /**
     * @hash   2117192854
     * @symbol  ?forEachBlock\@BlockTypeRegistry\@\@SAXV?$function\@$$A6A_NAEBVBlockLegacy\@\@\@Z\@std\@\@\@Z
     */
    MCAPI static void forEachBlock(class std::function<bool (class BlockLegacy const &)>);
    /**
     * @hash   1055613294
     * @symbol  ?getBlockNameFromNameHash\@BlockTypeRegistry\@\@SAAEBVHashedString\@\@_K\@Z
     */
    MCAPI static class HashedString const & getBlockNameFromNameHash(unsigned __int64);
    /**
     * @symbol  ?getComplexAliasPostSplitBlockNames\@BlockTypeRegistry\@\@SAAEBV?$vector\@VHashedString\@\@V?$allocator\@VHashedString\@\@\@std\@\@\@std\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI static std::vector<class HashedString> const & getComplexAliasPostSplitBlockNames(class HashedString const &);
    /**
     * @hash   355302960
     * @symbol  ?getDefaultBlockState\@BlockTypeRegistry\@\@SAAEBVBlock\@\@AEBVHashedString\@\@_N\@Z
     */
    MCAPI static class Block const & getDefaultBlockState(class HashedString const &, bool);
    /**
     * @hash   -491251809
     * @symbol  ?getEntityRegistry\@BlockTypeRegistry\@\@SA?AV?$StackRefResultT\@UEntityRegistryRefTraits\@\@\@\@XZ
     */
    MCAPI static class StackRefResultT<struct EntityRegistryRefTraits> getEntityRegistry();
    /**
     * @symbol  ?initBlockEntities\@BlockTypeRegistry\@\@SAXPEAVBlockDefinitionGroup\@\@AEBVExperiments\@\@\@Z
     */
    MCAPI static void initBlockEntities(class BlockDefinitionGroup *, class Experiments const &);
    /**
     * @hash   1652816593
     * @symbol  ?initEntityRegistry\@BlockTypeRegistry\@\@SAXXZ
     */
    MCAPI static void initEntityRegistry();
    /**
     * @hash   1928186963
     * @symbol  ?isComplexAliasBlock\@BlockTypeRegistry\@\@SA_NAEBVHashedString\@\@\@Z
     */
    MCAPI static bool isComplexAliasBlock(class HashedString const &);
    /**
     * @hash   1572067850
     * @symbol  ?lockAgainstRegistryModifications\@BlockTypeRegistry\@\@SA?AVBlockTypeRegistryReadLock\@\@XZ
     */
    MCAPI static class BlockTypeRegistryReadLock lockAgainstRegistryModifications();
    /**
     * @hash   2018691690
     * @symbol  ?lockForRegistryModifications\@BlockTypeRegistry\@\@SA?AVBlockTypeRegistryModificationsLock\@\@XZ
     */
    MCAPI static class BlockTypeRegistryModificationsLock lockForRegistryModifications();
    /**
     * @hash   -1113043603
     * @symbol  ?lookupByName\@BlockTypeRegistry\@\@SA?AV?$WeakPtr\@VBlockLegacy\@\@\@\@AEBVHashedString\@\@_N\@Z
     */
    MCAPI static class WeakPtr<class BlockLegacy> lookupByName(class HashedString const &, bool);
    /**
     * @hash   -1141383396
     * @symbol  ?lookupByName\@BlockTypeRegistry\@\@SAPEBVBlock\@\@AEBVHashedString\@\@AEBV?$vector\@UBlockComplexAliasBlockState\@BlockTypeRegistry\@\@V?$allocator\@UBlockComplexAliasBlockState\@BlockTypeRegistry\@\@\@std\@\@\@std\@\@_N\@Z
     */
    MCAPI static class Block const * lookupByName(class HashedString const &, std::vector<struct BlockTypeRegistry::BlockComplexAliasBlockState> const &, bool);
    /**
     * @hash   -161171540
     * @symbol  ?lookupByName\@BlockTypeRegistry\@\@SAPEBVBlock\@\@AEBVHashedString\@\@H_N\@Z
     */
    MCAPI static class Block const * lookupByName(class HashedString const &, int, bool);
    /**
     * @hash   1361314172
     * @symbol  ?prepareBlocks\@BlockTypeRegistry\@\@SAXI\@Z
     */
    MCAPI static void prepareBlocks(unsigned int);
    /**
     * @hash   445348667
     * @symbol  ?registerAlias\@BlockTypeRegistry\@\@SAXAEBVHashedString\@\@0\@Z
     */
    MCAPI static void registerAlias(class HashedString const &, class HashedString const &);
    /**
     * @hash   -1258410512
     * @symbol  ?unregisterBlock\@BlockTypeRegistry\@\@SAXAEBVHashedString\@\@\@Z
     */
    MCAPI static void unregisterBlock(class HashedString const &);
    /**
     * @hash   -1961034171
     * @symbol  ?unregisterBlocks\@BlockTypeRegistry\@\@SAXXZ
     */
    MCAPI static void unregisterBlocks();

//private:
    /**
     * @symbol  ?_lookupByNameImpl\@BlockTypeRegistry\@\@CA?AULookupByNameImplReturnType\@1\@AEBVHashedString\@\@HW4LookupByNameImplResolve\@1\@_N\@Z
     */
    MCAPI static struct BlockTypeRegistry::LookupByNameImplReturnType _lookupByNameImpl(class HashedString const &, int, enum class BlockTypeRegistry::LookupByNameImplResolve, bool);
    /**
     * @symbol  ?_lookupByNameImplSetNewBlockStates\@BlockTypeRegistry\@\@CAPEBVBlock\@\@AEBV2\@AEBV?$vector\@UBlockComplexAliasBlockState\@BlockTypeRegistry\@\@V?$allocator\@UBlockComplexAliasBlockState\@BlockTypeRegistry\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI static class Block const * _lookupByNameImplSetNewBlockStates(class Block const &, std::vector<struct BlockTypeRegistry::BlockComplexAliasBlockState> const &);

private:
    /**
     * @hash   -2137467782
     * @symbol  ?mBlockAliasLookupMap\@BlockTypeRegistry\@\@0V?$unordered_map\@VHashedString\@\@V1\@U?$hash\@VHashedString\@\@\@std\@\@U?$equal_to\@VHashedString\@\@\@3\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@V1\@\@std\@\@\@3\@\@std\@\@A
     */
    MCAPI static class std::unordered_map<class HashedString, class HashedString, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class HashedString>>> mBlockAliasLookupMap;
    /**
     * @hash   -732253640
     * @symbol  ?mBlockComplexAliasLookupMap\@BlockTypeRegistry\@\@0V?$unordered_map\@VHashedString\@\@VBlockComplexAliasContent\@BlockTypeRegistry\@\@U?$hash\@VHashedString\@\@\@std\@\@U?$equal_to\@VHashedString\@\@\@5\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@VBlockComplexAliasContent\@BlockTypeRegistry\@\@\@std\@\@\@5\@\@std\@\@A
     */
    MCAPI static class std::unordered_map<class HashedString, class BlockTypeRegistry::BlockComplexAliasContent, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class BlockTypeRegistry::BlockComplexAliasContent>>> mBlockComplexAliasLookupMap;
    /**
     * @hash   -1831189617
     * @symbol  ?mBlockComplexAliasPostSplitBlockNamesLookupMap\@BlockTypeRegistry\@\@0V?$map\@VHashedString\@\@V?$vector\@VHashedString\@\@V?$allocator\@VHashedString\@\@\@std\@\@\@std\@\@U?$less\@VHashedString\@\@\@3\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@V?$vector\@VHashedString\@\@V?$allocator\@VHashedString\@\@\@std\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@A
     */
    MCAPI static class std::map<class HashedString, std::vector<class HashedString>, struct std::less<class HashedString>, class std::allocator<struct std::pair<class HashedString const, std::vector<class HashedString>>>> mBlockComplexAliasPostSplitBlockNamesLookupMap;
    /**
     * @hash   556344262
     * @symbol  ?mBlockLookupMap\@BlockTypeRegistry\@\@0V?$map\@VHashedString\@\@V?$SharedPtr\@VBlockLegacy\@\@\@\@U?$less\@VHashedString\@\@\@std\@\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@V?$SharedPtr\@VBlockLegacy\@\@\@\@\@std\@\@\@4\@\@std\@\@A
     */
    MCAPI static class std::map<class HashedString, class SharedPtr<class BlockLegacy>, struct std::less<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class SharedPtr<class BlockLegacy>>>> mBlockLookupMap;
    /**
     * @hash   995000927
     * @symbol  ?mBlockNameHashToStringMap\@BlockTypeRegistry\@\@0V?$unordered_map\@_KVHashedString\@\@U?$hash\@_K\@std\@\@U?$equal_to\@_K\@3\@V?$allocator\@U?$pair\@$$CB_KVHashedString\@\@\@std\@\@\@3\@\@std\@\@A
     */
    MCAPI static class std::unordered_map<unsigned __int64, class HashedString, struct std::hash<unsigned __int64>, struct std::equal_to<unsigned __int64>, class std::allocator<struct std::pair<unsigned __int64 const, class HashedString>>> mBlockNameHashToStringMap;
    /**
     * @hash   2119506947
     * @symbol  ?mEntities\@BlockTypeRegistry\@\@0V?$OwnerPtrT\@UEntityRegistryRefTraits\@\@\@\@A
     */
    MCAPI static class OwnerPtrT<struct EntityRegistryRefTraits> mEntities;
    /**
     * @hash   -1800140412
     * @symbol  ?mKnownNamespaces\@BlockTypeRegistry\@\@0V?$set\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$less\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static class std::set<std::string, struct std::less<std::string>, class std::allocator<std::string>> mKnownNamespaces;
    /**
     * @hash   -913229787
     * @symbol  ?mRWLock\@BlockTypeRegistry\@\@0V?$shared_ptr\@VBlockTypeRegistryRWLock\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class BlockTypeRegistryRWLock> mRWLock;

};