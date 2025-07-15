#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/string/HashedString.h"

// auto generated inclusion list
#include "mc/common/SharedPtr.h"
#include "mc/common/WeakPtr.h"
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/resources/BaseGameVersion.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockLegacy;
class BlockTypeRegistryModificationsLock;
class BlockTypeRegistryRWLock;
class BlockTypeRegistryReadLock;
class Experiments;
class ServerScriptManager;
// clang-format on

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
    using BlockLookupMap = ::std::map<::HashedString, ::SharedPtr<::BlockLegacy>>;

    using BlockAliasLookupMap = ::std::unordered_map<::HashedString, ::HashedString>;

    struct BlockComplexAliasBlockState {
    public:
        BlockComplexAliasBlockState(HashedString const& stateName, int value) noexcept
        : stateName(stateName),
          value(value) {}

    public:
        // member variables
        // NOLINTBEGIN
        ::HashedString stateName;
        int            value;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using BlockComplexAliasCallback = ::std::function<::Block const*(int)>;

    class BlockComplexAliasContent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 64, ::std::function<::Block const*(int)>> mCallback;
        ::ll::TypedStorage<8, 32, ::BaseGameVersion>                    mMinRequiredVersion;
        ::ll::TypedStorage<8, 24, ::SemVersion>                         mFlattenedInBlocksJsonVersion;
        ::ll::TypedStorage<4, 4, int>                                   mStartVariant;
        // NOLINTEND

    public:
        // prevent constructor by default
        BlockComplexAliasContent& operator=(BlockComplexAliasContent const&);
        BlockComplexAliasContent(BlockComplexAliasContent const&);
        BlockComplexAliasContent();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::Block const* operator()(int data) const;

        MCNAPI ::BlockTypeRegistry::BlockComplexAliasContent&
        operator=(::BlockTypeRegistry::BlockComplexAliasContent&&);

        MCNAPI ~BlockComplexAliasContent();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using BlockComplexAliasLookupMap = ::entt::dense_map<::HashedString, ::BlockTypeRegistry::BlockComplexAliasContent>;

    struct LookupByNameImplReturnType {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::WeakPtr<::BlockLegacy const>> mBlockLegacy;
        ::ll::TypedStorage<8, 8, ::Block const*>                 mBlock;
        // NOLINTEND

    public:
        // prevent constructor by default
        LookupByNameImplReturnType();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI LookupByNameImplReturnType(::Block const* block, bool resolveBlockLegacy);

        MCNAPI LookupByNameImplReturnType(::WeakPtr<::BlockLegacy const> blockLegacy, ::Block const* block);

        MCNAPI LookupByNameImplReturnType(::WeakPtr<::BlockLegacy const> blockLegacy, int data, bool resolveBlock);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::Block const* block, bool resolveBlockLegacy);

        MCNAPI void* $ctor(::WeakPtr<::BlockLegacy const> blockLegacy, ::Block const* block);

        MCNAPI void* $ctor(::WeakPtr<::BlockLegacy const> blockLegacy, int data, bool resolveBlock);
        // NOLINTEND
    };

    using BlockComplexAliasPostSplitBlockNames = ::std::vector<::std::reference_wrapper<::HashedString const>>;

    using BlockComplexAliasPostSplitBlockNamesList =
        ::std::vector<::std::vector<::std::reference_wrapper<::HashedString const>>>;

    using BlockComplexAliasPostSplitBlockNamesLookupMap = ::entt::dense_map<uint64, uint64>;

    using BlockNameHashToHashedStringMap = ::entt::dense_map<uint64, ::HashedString>;

    struct DirectAccessBlocks {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::BlockLegacy const&> mAirBlock;
        // NOLINTEND

    public:
        // prevent constructor by default
        DirectAccessBlocks& operator=(DirectAccessBlocks const&);
        DirectAccessBlocks(DirectAccessBlocks const&);
        DirectAccessBlocks();
    };

    enum class LookupByNameImplResolve : int {
        BlockLegacy = 0,
        Block       = 1,
    };

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::BlockTypeRegistryReadLock _lockAgainstRegistryModifications();

    MCAPI static ::BlockTypeRegistryModificationsLock _lockForRegistryModifications();

    MCAPI static ::BlockTypeRegistry::LookupByNameImplReturnType _lookupByNameImpl(
        ::HashedString const&                        name,
        int                                          data,
        ::BlockTypeRegistry::LookupByNameImplResolve resolve,
        bool                                         logNotFound = false
    );

    MCAPI static void checkBlockPermutationCap();

    MCAPI static uint64 computeBlockTypeRegistryChecksum(::BaseGameVersion const& worldBaseGameVersion);

    MCAPI static void finalizeBlockComponentStorage();

    MCAPI static void finalizeBlockCustomComponentEvents(::ServerScriptManager const& scriptManager);

    MCAPI static void forEachBlock(::brstd::function_ref<bool(::BlockLegacy const&)> callback);

    MCAPI static ::HashedString const& getBlockNameFromNameHash(uint64 hash);

    MCAPI static ::std::vector<::std::reference_wrapper<::HashedString const>> const&
    getComplexAliasPostSplitBlockNames(::HashedString const& oldName);

    MCAPI static ::Block const& getDefaultBlockState(::HashedString const& name, bool logNotFound = false);

    MCAPI static ::BlockTypeRegistry::DirectAccessBlocks const& getDirectAccessBlocks();

    MCAPI static void initHardCodedBlockComponents(::Experiments const& experiments);

    MCAPI static bool isComplexAliasBlock(::HashedString const& blockName);

    MCAPI static ::WeakPtr<::BlockLegacy> lookupByName(::HashedString const& name, bool logNotFound = false);

    MCAPI static void prepareBlocks(uint latestUpdaterVersion);

    MCAPI static void registerAlias(::HashedString const& alias, ::HashedString const& name);

    MCAPI static void registerComplexAlias(
        ::HashedString const&                                                alias,
        ::std::function<::Block const*(int)>                                 callback,
        ::std::vector<::std::reference_wrapper<::HashedString const>> const& postSplitBlockNames,
        ::BaseGameVersion const&                                             minRequiredVersion,
        ::SemVersion const&                                                  blocksJsonFormatVersion,
        ::HashedString                                                       defaultNewBlockName,
        int                                                                  startVariant
    );

    MCAPI static void setupDirectAccessBlocks();

    MCAPI static void unregisterBlock(::HashedString const& name);

    MCAPI static void unregisterBlocks();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::unordered_map<::HashedString, ::HashedString>& mBlockAliasLookupMap();

    MCAPI static ::entt::dense_map<::HashedString, ::BlockTypeRegistry::BlockComplexAliasContent>&
    mBlockComplexAliasLookupMap();

    MCAPI static ::std::vector<::std::vector<::std::reference_wrapper<::HashedString const>>>&
    mBlockComplexAliasPostSplitBlockNamesList();

    MCAPI static ::entt::dense_map<uint64, uint64>& mBlockComplexAliasPostSplitBlockNamesLookupMap();

    MCAPI static ::std::map<::HashedString, ::HashedString>& mBlockComplexAliasPreSplitBlockNamesLookupMap();

    MCAPI static ::std::map<::HashedString, ::SharedPtr<::BlockLegacy>>& mBlockLookupMap();

    MCAPI static ::entt::dense_map<uint64, ::HashedString>& mBlockNameHashToStringMap();

    MCAPI static ::std::unique_ptr<::BlockTypeRegistry::DirectAccessBlocks>& mDirectAccessBlocks();

    MCAPI static ::std::set<::std::string>& mKnownNamespaces();

    MCAPI static ::std::shared_ptr<::BlockTypeRegistryRWLock>& mRWLock();
    // NOLINTEND
};
