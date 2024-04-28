#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/resources/BaseGameVersion.h"

// auto generated inclusion list
#include "mc/common/wrapper/SharedPtr.h"
#include "mc/common/wrapper/WeakPtr.h"

class BlockTypeRegistry {
public:
    // BlockTypeRegistry inner types declare
    // clang-format off
    struct BlockComplexAliasBlockState;
    class BlockComplexAliasContent;
    struct DirectAccessBlocks;
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
        : stateName(stateName),
          value(value) {}

    public:
        // NOLINTBEGIN
        // symbol: ??1BlockComplexAliasBlockState@BlockTypeRegistry@@QEAA@XZ
        MCAPI ~BlockComplexAliasBlockState();

        // NOLINTEND
    };

    class BlockComplexAliasContent {
    public:
        BlockComplexAliasCallback mCallback;
        class BaseGameVersion     mMinRequiredVersion;

    public:
        // NOLINTBEGIN
        // symbol: ?getRequiredBaseGameVersion@BlockComplexAliasContent@BlockTypeRegistry@@QEBAAEBVBaseGameVersion@@XZ
        MCAPI class BaseGameVersion const& getRequiredBaseGameVersion() const;

        // symbol: ??RBlockComplexAliasContent@BlockTypeRegistry@@QEBAPEBVBlock@@H@Z
        MCAPI class Block const* operator()(int data) const;

        // symbol: ??1BlockComplexAliasContent@BlockTypeRegistry@@QEAA@XZ
        MCAPI ~BlockComplexAliasContent();

        // NOLINTEND
    };

    struct DirectAccessBlocks {
    public:
        // prevent constructor by default
        DirectAccessBlocks& operator=(DirectAccessBlocks const&);
        DirectAccessBlocks(DirectAccessBlocks const&);
        DirectAccessBlocks();
    };

    struct LookupByNameImplReturnType {
    public:
        // prevent constructor by default
        LookupByNameImplReturnType& operator=(LookupByNameImplReturnType const&);
        LookupByNameImplReturnType(LookupByNameImplReturnType const&);
        LookupByNameImplReturnType();

        class WeakPtr<class BlockLegacy> mBlockLegacy;
        class Block const*               mBlock;

    public:
        // NOLINTBEGIN
        // symbol: ??0LookupByNameImplReturnType@BlockTypeRegistry@@QEAA@PEBVBlock@@_N@Z
        MCAPI LookupByNameImplReturnType(class Block const* block, bool);

        // symbol: ??0LookupByNameImplReturnType@BlockTypeRegistry@@QEAA@V?$WeakPtr@$$CBVBlockLegacy@@@@PEBVBlock@@@Z
        MCAPI LookupByNameImplReturnType(class WeakPtr<class BlockLegacy const> blockLegacy, class Block const* block);

        // symbol: ??0LookupByNameImplReturnType@BlockTypeRegistry@@QEAA@V?$WeakPtr@$$CBVBlockLegacy@@@@H_N@Z
        MCAPI
        LookupByNameImplReturnType(class WeakPtr<class BlockLegacy const> blockLegacy, int data, bool resolveBlock);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    BlockTypeRegistry& operator=(BlockTypeRegistry const&);
    BlockTypeRegistry(BlockTypeRegistry const&);
    BlockTypeRegistry();

public:
    // NOLINTBEGIN
    // symbol: ?checkBlockPermutationCap@BlockTypeRegistry@@SAXXZ
    MCAPI static void checkBlockPermutationCap();

    // symbol: ?computeBlockTypeRegistryChecksum@BlockTypeRegistry@@SA_KAEBVBaseGameVersion@@@Z
    MCAPI static uint64 computeBlockTypeRegistryChecksum(class BaseGameVersion const& worldBaseGameVersion);

    // symbol: ?finalizeBlockComponentStorage@BlockTypeRegistry@@SAXXZ
    MCAPI static void finalizeBlockComponentStorage();

    // symbol: ?finalizeBlockCustomComponentEvents@BlockTypeRegistry@@SAXAEBVServerScriptManager@@@Z
    MCAPI static void finalizeBlockCustomComponentEvents(class ServerScriptManager const&);

    // symbol: ?forEachBlock@BlockTypeRegistry@@SAXV?$function@$$A6A_NAEBVBlockLegacy@@@Z@std@@@Z
    MCAPI static void forEachBlock(std::function<bool(class BlockLegacy const&)> callback);

    // symbol: ?getBlockNameFromNameHash@BlockTypeRegistry@@SAAEBVHashedString@@_K@Z
    MCAPI static class HashedString const& getBlockNameFromNameHash(uint64 hash);

    // symbol:
    // ?getComplexAliasPostSplitBlockNames@BlockTypeRegistry@@SAAEBV?$vector@V?$reference_wrapper@$$CBVHashedString@@@std@@V?$allocator@V?$reference_wrapper@$$CBVHashedString@@@std@@@2@@std@@AEBVHashedString@@@Z
    MCAPI static std::vector<std::reference_wrapper<class HashedString const>> const&
    getComplexAliasPostSplitBlockNames(class HashedString const&);

    // symbol: ?getDefaultBlockState@BlockTypeRegistry@@SAAEBVBlock@@AEBVHashedString@@_N@Z
    MCAPI static class Block const& getDefaultBlockState(class HashedString const& name, bool logNotFound = false);

    // symbol: ?getDirectAccessBlocks@BlockTypeRegistry@@SAAEBUDirectAccessBlocks@1@XZ
    MCAPI static struct BlockTypeRegistry::DirectAccessBlocks const& getDirectAccessBlocks();

    // symbol: ?initHardCodedBlockComponents@BlockTypeRegistry@@SAXAEBVExperiments@@@Z
    MCAPI static void initHardCodedBlockComponents(class Experiments const&);

    // symbol: ?initRWLock@BlockTypeRegistry@@SAXXZ
    MCAPI static void initRWLock();

    // symbol: ?isComplexAliasBlock@BlockTypeRegistry@@SA_NAEBVHashedString@@@Z
    MCAPI static bool isComplexAliasBlock(class HashedString const& blockName);

    // symbol:
    // ?lookupByName@BlockTypeRegistry@@SAPEBVBlock@@AEBVHashedString@@AEBV?$vector@UBlockComplexAliasBlockState@BlockTypeRegistry@@V?$allocator@UBlockComplexAliasBlockState@BlockTypeRegistry@@@std@@@std@@_N@Z
    MCAPI static class Block const* lookupByName(
        class HashedString const&                                                 name,
        std::vector<struct BlockTypeRegistry::BlockComplexAliasBlockState> const& states,
        bool                                                                      logNotFound = false
    );

    // symbol: ?lookupByName@BlockTypeRegistry@@SAPEBVBlock@@AEBVHashedString@@H_N@Z
    MCAPI static class Block const* lookupByName(class HashedString const& name, int data, bool logNotFound = false);

    // symbol: ?lookupByName@BlockTypeRegistry@@SA?AV?$WeakPtr@VBlockLegacy@@@@AEBVHashedString@@_N@Z
    MCAPI static class WeakPtr<class BlockLegacy>
    lookupByName(class HashedString const& name, bool logNotFound = false);

    // symbol: ?prepareBlocks@BlockTypeRegistry@@SAXI@Z
    MCAPI static void prepareBlocks(uint latestUpdaterVersion);

    // symbol: ?registerAlias@BlockTypeRegistry@@SAXAEBVHashedString@@0@Z
    MCAPI static void registerAlias(class HashedString const& alias, class HashedString const& name);

    // symbol:
    // ?registerComplexAlias@BlockTypeRegistry@@SAXAEBVHashedString@@V?$function@$$A6APEBVBlock@@H@Z@std@@AEBV?$vector@V?$reference_wrapper@$$CBVHashedString@@@std@@V?$allocator@V?$reference_wrapper@$$CBVHashedString@@@std@@@2@@4@AEBVBaseGameVersion@@@Z
    MCAPI static void
    registerComplexAlias(class HashedString const& alias, std::function<class Block const*(int)> callback, std::vector<std::reference_wrapper<class HashedString const>> const&, class BaseGameVersion const&);

    // symbol: ?setupDirectAccessBlocks@BlockTypeRegistry@@SAXXZ
    MCAPI static void setupDirectAccessBlocks();

    // symbol: ?unregisterBlock@BlockTypeRegistry@@SAXAEBVHashedString@@@Z
    MCAPI static void unregisterBlock(class HashedString const& name);

    // symbol: ?unregisterBlocks@BlockTypeRegistry@@SAXXZ
    MCAPI static void unregisterBlocks();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_lockAgainstRegistryModifications@BlockTypeRegistry@@CA?AVBlockTypeRegistryReadLock@@XZ
    MCAPI static class BlockTypeRegistryReadLock _lockAgainstRegistryModifications();

    // symbol: ?_lockForRegistryModifications@BlockTypeRegistry@@CA?AVBlockTypeRegistryModificationsLock@@XZ
    MCAPI static class BlockTypeRegistryModificationsLock _lockForRegistryModifications();

    // symbol:
    // ?_lookupByNameImpl@BlockTypeRegistry@@CA?AULookupByNameImplReturnType@1@AEBVHashedString@@HW4LookupByNameImplResolve@1@_N@Z
    MCAPI static struct ::BlockTypeRegistry::LookupByNameImplReturnType _lookupByNameImpl(
        class HashedString const&                    name,
        int                                          data,
        ::BlockTypeRegistry::LookupByNameImplResolve resolve,
        bool                                         logNotFound = false
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?mBlockAliasLookupMap@BlockTypeRegistry@@0V?$unordered_map@VHashedString@@V1@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@3@V?$allocator@U?$pair@$$CBVHashedString@@V1@@std@@@3@@std@@A
    MCAPI static std::unordered_map<class HashedString, class HashedString> mBlockAliasLookupMap;

    // symbol:
    // ?mBlockComplexAliasLookupMap@BlockTypeRegistry@@0V?$dense_map@VHashedString@@VBlockComplexAliasContent@BlockTypeRegistry@@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@5@V?$allocator@U?$pair@$$CBVHashedString@@VBlockComplexAliasContent@BlockTypeRegistry@@@std@@@5@@entt@@A
    MCAPI static entt::dense_map<class HashedString, class BlockTypeRegistry::BlockComplexAliasContent>
        mBlockComplexAliasLookupMap;

    // symbol:
    // ?mBlockComplexAliasPostSplitBlockNamesList@BlockTypeRegistry@@0V?$vector@V?$vector@V?$reference_wrapper@$$CBVHashedString@@@std@@V?$allocator@V?$reference_wrapper@$$CBVHashedString@@@std@@@2@@std@@V?$allocator@V?$vector@V?$reference_wrapper@$$CBVHashedString@@@std@@V?$allocator@V?$reference_wrapper@$$CBVHashedString@@@std@@@2@@std@@@2@@std@@A
    MCAPI static std::vector<std::vector<std::reference_wrapper<class HashedString const>>>
        mBlockComplexAliasPostSplitBlockNamesList;

    // symbol:
    // ?mBlockComplexAliasPostSplitBlockNamesLookupMap@BlockTypeRegistry@@0V?$dense_map@_K_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@entt@@A
    MCAPI static entt::dense_map<uint64, uint64> mBlockComplexAliasPostSplitBlockNamesLookupMap;

    // symbol:
    // ?mBlockLookupMap@BlockTypeRegistry@@0V?$map@VHashedString@@V?$SharedPtr@VBlockLegacy@@@@U?$less@VHashedString@@@std@@V?$allocator@U?$pair@$$CBVHashedString@@V?$SharedPtr@VBlockLegacy@@@@@std@@@4@@std@@A
    MCAPI static std::map<class HashedString, class SharedPtr<class BlockLegacy>> mBlockLookupMap;

    // symbol:
    // ?mBlockNameHashToStringMap@BlockTypeRegistry@@0V?$dense_map@_KVHashedString@@U?$hash@_K@std@@U?$equal_to@_K@3@V?$allocator@U?$pair@$$CB_KVHashedString@@@std@@@3@@entt@@A
    MCAPI static entt::dense_map<uint64, class HashedString> mBlockNameHashToStringMap;

    // symbol:
    // ?mDirectAccessBlocks@BlockTypeRegistry@@0V?$unique_ptr@UDirectAccessBlocks@BlockTypeRegistry@@U?$default_delete@UDirectAccessBlocks@BlockTypeRegistry@@@std@@@std@@A
    MCAPI static std::unique_ptr<struct BlockTypeRegistry::DirectAccessBlocks> mDirectAccessBlocks;

    // symbol:
    // ?mKnownNamespaces@BlockTypeRegistry@@0V?$set@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@A
    MCAPI static std::set<std::string> mKnownNamespaces;

    // symbol: ?mRWLock@BlockTypeRegistry@@0V?$shared_ptr@VBlockTypeRegistryRWLock@@@std@@A
    MCAPI static std::shared_ptr<class BlockTypeRegistryRWLock> mRWLock;

    // NOLINTEND
};
