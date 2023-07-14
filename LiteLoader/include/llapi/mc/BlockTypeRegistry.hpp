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
public:
    struct LookupByNameImplReturnType;
    class InhibitModificationsLock;
    struct BlockComplexAliasBlockState;
    class BlockComplexAliasContent;
    inline static std::map<class HashedString, class SharedPtr<class BlockLegacy>, struct std::less<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class SharedPtr<class BlockLegacy>>>>& getBlockLookupMap(){return mBlockLookupMap;}
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKTYPEREGISTRY
public:
    class BlockTypeRegistry& operator=(class BlockTypeRegistry const &) = delete;
    BlockTypeRegistry(class BlockTypeRegistry const &) = delete;
    BlockTypeRegistry() = delete;
#endif

public:
    /**
     * @symbol ?computeBlockTypeRegistryChecksum\@BlockTypeRegistry\@\@SA_KAEBVBaseGameVersion\@\@\@Z
     */
    MCAPI static unsigned __int64 computeBlockTypeRegistryChecksum(class BaseGameVersion const &);
    /**
     * @symbol ?finalizeBlockComponentStorage\@BlockTypeRegistry\@\@SAXXZ
     */
    MCAPI static void finalizeBlockComponentStorage();
    /**
     * @symbol ?forEachBlock\@BlockTypeRegistry\@\@SAXV?$function\@$$A6A_NAEBVBlockLegacy\@\@\@Z\@std\@\@\@Z
     */
    MCAPI static void forEachBlock(class std::function<bool (class BlockLegacy const &)>);
    /**
     * @symbol ?getBlockNameFromNameHash\@BlockTypeRegistry\@\@SAAEBVHashedString\@\@_K\@Z
     */
    MCAPI static class HashedString const & getBlockNameFromNameHash(unsigned __int64);
    /**
     * @symbol ?getComplexAliasPostSplitBlockNames\@BlockTypeRegistry\@\@SAAEBV?$vector\@V?$reference_wrapper\@$$CBVHashedString\@\@\@std\@\@V?$allocator\@V?$reference_wrapper\@$$CBVHashedString\@\@\@std\@\@\@2\@\@std\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI static std::vector<class std::reference_wrapper<class HashedString const>> const & getComplexAliasPostSplitBlockNames(class HashedString const &);
    /**
     * @symbol ?getDefaultBlockState\@BlockTypeRegistry\@\@SAAEBVBlock\@\@AEBVHashedString\@\@_N\@Z
     */
    MCAPI static class Block const & getDefaultBlockState(class HashedString const &, bool);
    /**
     * @symbol ?getEntityRegistry\@BlockTypeRegistry\@\@SA?AV?$StackRefResultT\@UEntityRegistryRefTraits\@\@\@\@XZ
     */
    MCAPI static class StackRefResultT<struct EntityRegistryRefTraits> getEntityRegistry();
    /**
     * @symbol ?initBlockEntities\@BlockTypeRegistry\@\@SAXPEAVBlockDefinitionGroup\@\@AEBVExperiments\@\@\@Z
     */
    MCAPI static void initBlockEntities(class BlockDefinitionGroup *, class Experiments const &);
    /**
     * @symbol ?initEntityRegistry\@BlockTypeRegistry\@\@SAXXZ
     */
    MCAPI static void initEntityRegistry();
    /**
     * @symbol ?isComplexAliasBlock\@BlockTypeRegistry\@\@SA_NAEBVHashedString\@\@\@Z
     */
    MCAPI static bool isComplexAliasBlock(class HashedString const &);
    /**
     * @symbol ?lockAgainstRegistryModifications\@BlockTypeRegistry\@\@SA?AVBlockTypeRegistryReadLock\@\@XZ
     */
    MCAPI static class BlockTypeRegistryReadLock lockAgainstRegistryModifications();
    /**
     * @symbol ?lockForRegistryModifications\@BlockTypeRegistry\@\@SA?AVBlockTypeRegistryModificationsLock\@\@XZ
     */
    MCAPI static class BlockTypeRegistryModificationsLock lockForRegistryModifications();
    /**
     * @symbol ?lookupByName\@BlockTypeRegistry\@\@SA?AV?$WeakPtr\@VBlockLegacy\@\@\@\@AEBVHashedString\@\@_N\@Z
     */
    MCAPI static class WeakPtr<class BlockLegacy> lookupByName(class HashedString const &, bool);
    /**
     * @symbol ?lookupByName\@BlockTypeRegistry\@\@SAPEBVBlock\@\@AEBVHashedString\@\@AEBV?$vector\@UBlockComplexAliasBlockState\@BlockTypeRegistry\@\@V?$allocator\@UBlockComplexAliasBlockState\@BlockTypeRegistry\@\@\@std\@\@\@std\@\@_N\@Z
     */
    MCAPI static class Block const * lookupByName(class HashedString const &, std::vector<struct BlockTypeRegistry::BlockComplexAliasBlockState> const &, bool);
    /**
     * @symbol ?lookupByName\@BlockTypeRegistry\@\@SAPEBVBlock\@\@AEBVHashedString\@\@H_N\@Z
     */
    MCAPI static class Block const * lookupByName(class HashedString const &, int, bool);
    /**
     * @symbol ?prepareBlocks\@BlockTypeRegistry\@\@SAXI\@Z
     */
    MCAPI static void prepareBlocks(unsigned int);
    /**
     * @symbol ?registerAlias\@BlockTypeRegistry\@\@SAXAEBVHashedString\@\@0\@Z
     */
    MCAPI static void registerAlias(class HashedString const &, class HashedString const &);
    /**
     * @symbol ?registerComplexAlias\@BlockTypeRegistry\@\@SAXAEBVHashedString\@\@V?$function\@$$A6APEBVBlock\@\@H\@Z\@std\@\@AEBV?$vector\@V?$reference_wrapper\@$$CBVHashedString\@\@\@std\@\@V?$allocator\@V?$reference_wrapper\@$$CBVHashedString\@\@\@std\@\@\@2\@\@4\@AEBVBaseGameVersion\@\@\@Z
     */
    MCAPI static void registerComplexAlias(class HashedString const &, class std::function<class Block const * (int)>, std::vector<class std::reference_wrapper<class HashedString const>> const &, class BaseGameVersion const &);
    /**
     * @symbol ?unregisterBlock\@BlockTypeRegistry\@\@SAXAEBVHashedString\@\@\@Z
     */
    MCAPI static void unregisterBlock(class HashedString const &);
    /**
     * @symbol ?unregisterBlocks\@BlockTypeRegistry\@\@SAXXZ
     */
    MCAPI static void unregisterBlocks();

//private:
    /**
     * @symbol ?_lookupByNameImpl\@BlockTypeRegistry\@\@CA?AULookupByNameImplReturnType\@1\@AEBVHashedString\@\@HW4LookupByNameImplResolve\@1\@_N\@Z
     */
    MCAPI static struct BlockTypeRegistry::LookupByNameImplReturnType _lookupByNameImpl(class HashedString const &, int, enum class BlockTypeRegistry::LookupByNameImplResolve, bool);

private:
    /**
     * @symbol ?mBlockAliasLookupMap\@BlockTypeRegistry\@\@0V?$unordered_map\@VHashedString\@\@V1\@U?$hash\@VHashedString\@\@\@std\@\@U?$equal_to\@VHashedString\@\@\@3\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@V1\@\@std\@\@\@3\@\@std\@\@A
     */
    MCAPI static class std::unordered_map<class HashedString, class HashedString, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class HashedString>>> mBlockAliasLookupMap;
    /**
     * @symbol ?mBlockComplexAliasLookupMap\@BlockTypeRegistry\@\@0V?$unordered_map\@VHashedString\@\@VBlockComplexAliasContent\@BlockTypeRegistry\@\@U?$hash\@VHashedString\@\@\@std\@\@U?$equal_to\@VHashedString\@\@\@5\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@VBlockComplexAliasContent\@BlockTypeRegistry\@\@\@std\@\@\@5\@\@std\@\@A
     */
    MCAPI static class std::unordered_map<class HashedString, class BlockTypeRegistry::BlockComplexAliasContent, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class BlockTypeRegistry::BlockComplexAliasContent>>> mBlockComplexAliasLookupMap;
    /**
     * @symbol ?mBlockComplexAliasPostSplitBlockNamesLookupMap\@BlockTypeRegistry\@\@0V?$map\@VHashedString\@\@V?$vector\@V?$reference_wrapper\@$$CBVHashedString\@\@\@std\@\@V?$allocator\@V?$reference_wrapper\@$$CBVHashedString\@\@\@std\@\@\@2\@\@std\@\@U?$less\@VHashedString\@\@\@3\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@V?$vector\@V?$reference_wrapper\@$$CBVHashedString\@\@\@std\@\@V?$allocator\@V?$reference_wrapper\@$$CBVHashedString\@\@\@std\@\@\@2\@\@std\@\@\@std\@\@\@3\@\@std\@\@A
     */
    MCAPI static class std::map<class HashedString, std::vector<class std::reference_wrapper<class HashedString const>>, struct std::less<class HashedString>, class std::allocator<struct std::pair<class HashedString const, std::vector<class std::reference_wrapper<class HashedString const>>>>> mBlockComplexAliasPostSplitBlockNamesLookupMap;
    /**
     * @symbol ?mBlockLookupMap\@BlockTypeRegistry\@\@0V?$map\@VHashedString\@\@V?$SharedPtr\@VBlockLegacy\@\@\@\@U?$less\@VHashedString\@\@\@std\@\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@V?$SharedPtr\@VBlockLegacy\@\@\@\@\@std\@\@\@4\@\@std\@\@A
     */
    MCAPI static class std::map<class HashedString, class SharedPtr<class BlockLegacy>, struct std::less<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class SharedPtr<class BlockLegacy>>>> mBlockLookupMap;
    /**
     * @symbol ?mBlockNameHashToStringMap\@BlockTypeRegistry\@\@0V?$unordered_map\@_KVHashedString\@\@U?$hash\@_K\@std\@\@U?$equal_to\@_K\@3\@V?$allocator\@U?$pair\@$$CB_KVHashedString\@\@\@std\@\@\@3\@\@std\@\@A
     */
    MCAPI static class std::unordered_map<unsigned __int64, class HashedString, struct std::hash<unsigned __int64>, struct std::equal_to<unsigned __int64>, class std::allocator<struct std::pair<unsigned __int64 const, class HashedString>>> mBlockNameHashToStringMap;
    /**
     * @symbol ?mEntities\@BlockTypeRegistry\@\@0V?$OwnerPtrT\@UEntityRegistryRefTraits\@\@\@\@A
     */
    MCAPI static class OwnerPtrT<struct EntityRegistryRefTraits> mEntities;
    /**
     * @symbol ?mKnownNamespaces\@BlockTypeRegistry\@\@0V?$set\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$less\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static class std::set<std::string, struct std::less<std::string>, class std::allocator<std::string>> mKnownNamespaces;
    /**
     * @symbol ?mRWLock\@BlockTypeRegistry\@\@0V?$shared_ptr\@VBlockTypeRegistryRWLock\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class BlockTypeRegistryRWLock> mRWLock;

};
