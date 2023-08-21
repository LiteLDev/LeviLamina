#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/resources/BaseGameVersion.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtrT.h"
#include "mc/common/wrapper/SharedPtr.h"
#include "mc/common/wrapper/StackRefResultT.h"
#include "mc/common/wrapper/WeakPtr.h"

class BlockTypeRegistry {
public:
    // BlockTypeRegistry inner types declare
    // clang-format off
    struct BlockComplexAliasBlockState;
    class BlockComplexAliasContent;
    struct LookupByNameImplReturnType;
    // clang-format on

    using BlockComplexAliasCallback = std::function<class Block const*(int)>;

    // BlockTypeRegistry inner types define
    enum class LookupByNameImplResolve : int {
        BlockLegacy = 0x0,
        Block       = 0x1,
    };

    struct BlockComplexAliasBlockState {

    public:
        class HashedString stateName;
        int                value;
        BlockComplexAliasBlockState(HashedString const& stateName, int value) noexcept
        : stateName(stateName), value(value) {}

    public:
        // NOLINTBEGIN
        /**
         * @symbol ??1BlockComplexAliasBlockState\@BlockTypeRegistry\@\@QEAA\@XZ
         */
        MCAPI ~BlockComplexAliasBlockState();
        // NOLINTEND
    };

    class BlockComplexAliasContent {

    public:
        BlockComplexAliasCallback mCallback;
        class BaseGameVersion     mMinRequiredVersion;

    public:
        // NOLINTBEGIN
        /**
         * @symbol
         * ?getRequiredBaseGameVersion\@BlockComplexAliasContent\@BlockTypeRegistry\@\@QEBAAEBVBaseGameVersion\@\@XZ
         */
        MCAPI class BaseGameVersion const& getRequiredBaseGameVersion() const;
        /**
         * @symbol ??RBlockComplexAliasContent\@BlockTypeRegistry\@\@QEBAPEBVBlock\@\@H\@Z
         */
        MCAPI class Block const* operator()(int) const;
        /**
         * @symbol ??1BlockComplexAliasContent\@BlockTypeRegistry\@\@QEAA\@XZ
         */
        MCAPI ~BlockComplexAliasContent();
        // NOLINTEND
    };

    struct LookupByNameImplReturnType {

    public:
        // prevent constructor by default
        LookupByNameImplReturnType& operator=(LookupByNameImplReturnType const&) = delete;
        LookupByNameImplReturnType(LookupByNameImplReturnType const&)            = delete;
        LookupByNameImplReturnType()                                             = delete;

        class WeakPtr<class BlockLegacy> mBlockLegacy;
        class Block const*               mBlock;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ??0LookupByNameImplReturnType\@BlockTypeRegistry\@\@QEAA\@PEBVBlock\@\@_N\@Z
         */
        MCAPI LookupByNameImplReturnType(class Block const*, bool);
        /**
         * @symbol
         * ??0LookupByNameImplReturnType\@BlockTypeRegistry\@\@QEAA\@V?$WeakPtr\@VBlockLegacy\@\@\@\@PEBVBlock\@\@\@Z
         */
        MCAPI LookupByNameImplReturnType(class WeakPtr<class BlockLegacy>, class Block const*);
        /**
         * @symbol ??0LookupByNameImplReturnType\@BlockTypeRegistry\@\@QEAA\@V?$WeakPtr\@VBlockLegacy\@\@\@\@H_N\@Z
         */
        MCAPI LookupByNameImplReturnType(class WeakPtr<class BlockLegacy>, int, bool);
        // NOLINTEND
    };

public:
    // prevent constructor by default
    BlockTypeRegistry& operator=(BlockTypeRegistry const&) = delete;
    BlockTypeRegistry(BlockTypeRegistry const&)            = delete;
    BlockTypeRegistry()                                    = delete;

    constexpr static std::map<class HashedString, class SharedPtr<class BlockLegacy>>& getBlockLookupMap() {
        return mBlockLookupMap;
    } public :
        // NOLINTBEGIN
        /**
         * @symbol ?computeBlockTypeRegistryChecksum\@BlockTypeRegistry\@\@SA_KAEBVBaseGameVersion\@\@\@Z
         */
        MCAPI static uint64_t
        computeBlockTypeRegistryChecksum(class BaseGameVersion const&);
    /**
     * @symbol ?finalizeBlockComponentStorage\@BlockTypeRegistry\@\@SAXXZ
     */
    MCAPI static void finalizeBlockComponentStorage();
    /**
     * @symbol ?forEachBlock\@BlockTypeRegistry\@\@SAXV?$function\@$$A6A_NAEBVBlockLegacy\@\@\@Z\@std\@\@\@Z
     */
    MCAPI static void forEachBlock(std::function<bool(class BlockLegacy const&)>);
    /**
     * @symbol ?getBlockNameFromNameHash\@BlockTypeRegistry\@\@SAAEBVHashedString\@\@_K\@Z
     */
    MCAPI static class HashedString const& getBlockNameFromNameHash(uint64_t);
    /**
     * @symbol
     * ?getComplexAliasPostSplitBlockNames\@BlockTypeRegistry\@\@SAAEBV?$vector\@V?$reference_wrapper\@$$CBVHashedString\@\@\@std\@\@V?$allocator\@V?$reference_wrapper\@$$CBVHashedString\@\@\@std\@\@\@2\@\@std\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI static std::vector<std::reference_wrapper<class HashedString const>> const&
    getComplexAliasPostSplitBlockNames(class HashedString const&);
    /**
     * @symbol ?getDefaultBlockState\@BlockTypeRegistry\@\@SAAEBVBlock\@\@AEBVHashedString\@\@_N\@Z
     */
    MCAPI static class Block const& getDefaultBlockState(class HashedString const&, bool unknown = true);
    /**
     * @symbol ?getEntityRegistry\@BlockTypeRegistry\@\@SA?AV?$StackRefResultT\@UEntityRegistryRefTraits\@\@\@\@XZ
     */
    MCAPI static class StackRefResultT<struct EntityRegistryRefTraits> getEntityRegistry();
    /**
     * @symbol ?initBlockEntities\@BlockTypeRegistry\@\@SAXPEAVBlockDefinitionGroup\@\@AEBVExperiments\@\@\@Z
     */
    MCAPI static void initBlockEntities(class BlockDefinitionGroup*, class Experiments const&);
    /**
     * @symbol ?initEntityRegistry\@BlockTypeRegistry\@\@SAXXZ
     */
    MCAPI static void initEntityRegistry();
    /**
     * @symbol ?isComplexAliasBlock\@BlockTypeRegistry\@\@SA_NAEBVHashedString\@\@\@Z
     */
    MCAPI static bool isComplexAliasBlock(class HashedString const&);
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
    MCAPI static class WeakPtr<class BlockLegacy> lookupByName(class HashedString const&, bool unknown = true);
    /**
     * @symbol ?lookupByName\@BlockTypeRegistry\@\@SAPEBVBlock\@\@AEBVHashedString\@\@H_N\@Z
     */
    MCAPI static class Block const* lookupByName(class HashedString const&, int, bool unknown = true);
    /**
     * @symbol
     * ?lookupByName\@BlockTypeRegistry\@\@SAPEBVBlock\@\@AEBVHashedString\@\@AEBV?$vector\@UBlockComplexAliasBlockState\@BlockTypeRegistry\@\@V?$allocator\@UBlockComplexAliasBlockState\@BlockTypeRegistry\@\@\@std\@\@\@std\@\@_N\@Z
     */
    MCAPI static class Block const* lookupByName(
        class HashedString const&,
        std::vector<struct BlockTypeRegistry::BlockComplexAliasBlockState> const&,
        bool unknown = true
    );
    /**
     * @symbol ?prepareBlocks\@BlockTypeRegistry\@\@SAXI\@Z
     */
    MCAPI static void prepareBlocks(unsigned int);
    /**
     * @symbol ?registerAlias\@BlockTypeRegistry\@\@SAXAEBVHashedString\@\@0\@Z
     */
    MCAPI static void registerAlias(class HashedString const&, class HashedString const&);
    /**
     * @symbol
     * ?registerComplexAlias\@BlockTypeRegistry\@\@SAXAEBVHashedString\@\@V?$function\@$$A6APEBVBlock\@\@H\@Z\@std\@\@AEBV?$vector\@V?$reference_wrapper\@$$CBVHashedString\@\@\@std\@\@V?$allocator\@V?$reference_wrapper\@$$CBVHashedString\@\@\@std\@\@\@2\@\@4\@AEBVBaseGameVersion\@\@\@Z
     */
    MCAPI static void
    registerComplexAlias(class HashedString const&, std::function<class Block const*(int)>, std::vector<std::reference_wrapper<class HashedString const>> const&, class BaseGameVersion const&);
    /**
     * @symbol ?unregisterBlock\@BlockTypeRegistry\@\@SAXAEBVHashedString\@\@\@Z
     */
    MCAPI static void unregisterBlock(class HashedString const&);
    /**
     * @symbol ?unregisterBlocks\@BlockTypeRegistry\@\@SAXXZ
     */
    MCAPI static void unregisterBlocks();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_lookupByNameImpl\@BlockTypeRegistry\@\@CA?AULookupByNameImplReturnType\@1\@AEBVHashedString\@\@HW4LookupByNameImplResolve\@1\@_N\@Z
     */
    MCAPI static struct LookupByNameImplReturnType _lookupByNameImpl(
        class HashedString const&,
        int,
        enum class BlockTypeRegistry::LookupByNameImplResolve,
        bool unknown = true
    );
    // NOLINTEND

private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?mBlockAliasLookupMap\@BlockTypeRegistry\@\@0V?$unordered_map\@VHashedString\@\@V1\@U?$hash\@VHashedString\@\@\@std\@\@U?$equal_to\@VHashedString\@\@\@3\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@V1\@\@std\@\@\@3\@\@std\@\@A
     */
    MCAPI static std::unordered_map<class HashedString, class HashedString> mBlockAliasLookupMap;
    /**
     * @symbol
     * ?mBlockComplexAliasLookupMap\@BlockTypeRegistry\@\@0V?$unordered_map\@VHashedString\@\@VBlockComplexAliasContent\@BlockTypeRegistry\@\@U?$hash\@VHashedString\@\@\@std\@\@U?$equal_to\@VHashedString\@\@\@5\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@VBlockComplexAliasContent\@BlockTypeRegistry\@\@\@std\@\@\@5\@\@std\@\@A
     */
    MCAPI static std::unordered_map<class HashedString, class BlockTypeRegistry::BlockComplexAliasContent>
        mBlockComplexAliasLookupMap;
    /**
     * @symbol
     * ?mBlockComplexAliasPostSplitBlockNamesLookupMap\@BlockTypeRegistry\@\@0V?$map\@VHashedString\@\@V?$vector\@V?$reference_wrapper\@$$CBVHashedString\@\@\@std\@\@V?$allocator\@V?$reference_wrapper\@$$CBVHashedString\@\@\@std\@\@\@2\@\@std\@\@U?$less\@VHashedString\@\@\@3\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@V?$vector\@V?$reference_wrapper\@$$CBVHashedString\@\@\@std\@\@V?$allocator\@V?$reference_wrapper\@$$CBVHashedString\@\@\@std\@\@\@2\@\@std\@\@\@std\@\@\@3\@\@std\@\@A
     */
    MCAPI static std::map<class HashedString, std::vector<std::reference_wrapper<class HashedString const>>>
        mBlockComplexAliasPostSplitBlockNamesLookupMap;
    /**
     * @symbol
     * ?mBlockLookupMap\@BlockTypeRegistry\@\@0V?$map\@VHashedString\@\@V?$SharedPtr\@VBlockLegacy\@\@\@\@U?$less\@VHashedString\@\@\@std\@\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@V?$SharedPtr\@VBlockLegacy\@\@\@\@\@std\@\@\@4\@\@std\@\@A
     */
    MCAPI static std::map<class HashedString, class SharedPtr<class BlockLegacy>> mBlockLookupMap;
    /**
     * @symbol
     * ?mBlockNameHashToStringMap\@BlockTypeRegistry\@\@0V?$unordered_map\@_KVHashedString\@\@U?$hash\@_K\@std\@\@U?$equal_to\@_K\@3\@V?$allocator\@U?$pair\@$$CB_KVHashedString\@\@\@std\@\@\@3\@\@std\@\@A
     */
    MCAPI static std::unordered_map<uint64_t, class HashedString> mBlockNameHashToStringMap;
    /**
     * @symbol ?mEntities\@BlockTypeRegistry\@\@0V?$OwnerPtrT\@UEntityRegistryRefTraits\@\@\@\@A
     */
    MCAPI static class OwnerPtrT<struct EntityRegistryRefTraits> mEntities;
    /**
     * @symbol
     * ?mKnownNamespaces\@BlockTypeRegistry\@\@0V?$set\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$less\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static std::set<std::string> mKnownNamespaces;
    /**
     * @symbol ?mRWLock\@BlockTypeRegistry\@\@0V?$shared_ptr\@VBlockTypeRegistryRWLock\@\@\@std\@\@A
     */
    MCAPI static std::shared_ptr<class BlockTypeRegistryRWLock> mRWLock;
    // NOLINTEND
};
