#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SharedPtr.h"
#include "mc/common/WeakPtr.h"

class BlockTypeRegistry {
public:
    // BlockTypeRegistry inner types declare
    // clang-format off
    struct BlockComplexAliasBlockState;
    class BlockComplexAliasContent;
    struct DirectAccessBlocks;
    struct LookupByNameImplReturnType;
    // clang-format on

    // BlockTypeRegistry inner types define
    enum class LookupByNameImplResolve {};

    struct BlockComplexAliasBlockState {
    public:
        // prevent constructor by default
        BlockComplexAliasBlockState& operator=(BlockComplexAliasBlockState const&);
        BlockComplexAliasBlockState(BlockComplexAliasBlockState const&);
        BlockComplexAliasBlockState();

    public:
        // NOLINTBEGIN
        MCAPI ~BlockComplexAliasBlockState();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

        // NOLINTEND
    };

    class BlockComplexAliasContent {
    public:
        // prevent constructor by default
        BlockComplexAliasContent& operator=(BlockComplexAliasContent const&);
        BlockComplexAliasContent(BlockComplexAliasContent const&);
        BlockComplexAliasContent();

    public:
        // NOLINTBEGIN
        MCAPI class BaseGameVersion const& getRequiredBaseGameVersion() const;

        MCAPI class Block const* operator()(int data) const;

        MCAPI ~BlockComplexAliasContent();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

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

    public:
        // NOLINTBEGIN
        MCAPI LookupByNameImplReturnType(class Block const* block, bool resolveBlockLegacy);

        MCAPI LookupByNameImplReturnType(class WeakPtr<class BlockLegacy const> blockLegacy, class Block const* block);

        MCAPI
        LookupByNameImplReturnType(class WeakPtr<class BlockLegacy const> blockLegacy, int data, bool resolveBlock);

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void* ctor$(class Block const* block, bool resolveBlockLegacy);

        MCAPI void* ctor$(class WeakPtr<class BlockLegacy const> blockLegacy, class Block const* block);

        MCAPI void* ctor$(class WeakPtr<class BlockLegacy const> blockLegacy, int data, bool resolveBlock);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    BlockTypeRegistry& operator=(BlockTypeRegistry const&);
    BlockTypeRegistry(BlockTypeRegistry const&);
    BlockTypeRegistry();

public:
    // NOLINTBEGIN
    MCAPI static void checkBlockPermutationCap();

    MCAPI static uint64 computeBlockTypeRegistryChecksum(class BaseGameVersion const& worldBaseGameVersion);

    MCAPI static void finalizeBlockComponentStorage();

    MCAPI static void finalizeBlockCustomComponentEvents(class ServerScriptManager const& scriptManager);

    MCAPI static void forEachBlock(std::function<bool(class BlockLegacy const&)> callback);

    MCAPI static class HashedString const& getBlockNameFromNameHash(uint64 hash);

    MCAPI static std::vector<std::reference_wrapper<class HashedString const>> const&
    getComplexAliasPostSplitBlockNames(class HashedString const& oldName);

    MCAPI static class Block const& getDefaultBlockState(class HashedString const& name, bool logNotFound);

    MCAPI static struct BlockTypeRegistry::DirectAccessBlocks const& getDirectAccessBlocks();

    MCAPI static void initHardCodedBlockComponents(class Experiments const& experiments);

    MCAPI static void initRWLock();

    MCAPI static bool isComplexAliasBlock(class HashedString const& blockName);

    MCAPI static class Block const* lookupByName(
        class HashedString const&                                                 name,
        std::vector<struct BlockTypeRegistry::BlockComplexAliasBlockState> const& states,
        bool                                                                      logNotFound
    );

    MCAPI static class Block const* lookupByName(class HashedString const& name, int data, bool logNotFound);

    MCAPI static class WeakPtr<class BlockLegacy> lookupByName(class HashedString const& name, bool logNotFound);

    MCAPI static void prepareBlocks(uint latestUpdaterVersion);

    MCAPI static void registerAlias(class HashedString const& alias, class HashedString const& name);

    MCAPI static void registerComplexAlias(
        class HashedString const&                                            alias,
        std::function<class Block const*(int)>                               callback,
        std::vector<std::reference_wrapper<class HashedString const>> const& postSplitBlockNames,
        class BaseGameVersion const&                                         minRequiredVersion
    );

    MCAPI static void setupDirectAccessBlocks();

    MCAPI static void unregisterBlock(class HashedString const& name);

    MCAPI static void unregisterBlocks();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class BlockTypeRegistryReadLock _lockAgainstRegistryModifications();

    MCAPI static class BlockTypeRegistryModificationsLock _lockForRegistryModifications();

    MCAPI static struct BlockTypeRegistry::LookupByNameImplReturnType _lookupByNameImpl(
        class HashedString const&                    name,
        int                                          data,
        ::BlockTypeRegistry::LookupByNameImplResolve resolve,
        bool                                         logNotFound
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static std::unordered_map<class HashedString, class HashedString>& mBlockAliasLookupMap();

    MCAPI static entt::dense_map<class HashedString, class BlockTypeRegistry::BlockComplexAliasContent>&
    mBlockComplexAliasLookupMap();

    MCAPI static std::vector<std::vector<std::reference_wrapper<class HashedString const>>>&
    mBlockComplexAliasPostSplitBlockNamesList();

    MCAPI static entt::dense_map<uint64, uint64>& mBlockComplexAliasPostSplitBlockNamesLookupMap();

    MCAPI static std::map<class HashedString, class SharedPtr<class BlockLegacy>>& mBlockLookupMap();

    MCAPI static entt::dense_map<uint64, class HashedString>& mBlockNameHashToStringMap();

    MCAPI static std::unique_ptr<struct BlockTypeRegistry::DirectAccessBlocks>& mDirectAccessBlocks();

    MCAPI static std::set<std::string>& mKnownNamespaces();

    MCAPI static std::shared_ptr<class BlockTypeRegistryRWLock>& mRWLock();

    // NOLINTEND
};
