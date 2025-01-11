#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SharedPtr.h"
#include "mc/common/WeakPtr.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class Block;
class BlockLegacy;
class BlockTypeRegistryModificationsLock;
class BlockTypeRegistryRWLock;
class BlockTypeRegistryReadLock;
class Experiments;
class HashedString;
class SemVersion;
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
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 48, ::HashedString> stateName;
        ::ll::TypedStorage<4, 4, int>             value;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~BlockComplexAliasBlockState();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    using BlockComplexAliasCallback = ::std::function<::Block const*(int)>;

    class BlockComplexAliasContent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 64, ::std::function<::Block const*(int)>> mCallback;
        ::ll::TypedStorage<8, 120, ::BaseGameVersion>                   mMinRequiredVersion;
        ::ll::TypedStorage<8, 112, ::SemVersion>                        mFlattenedInBlocksJsonVersion;
        ::ll::TypedStorage<4, 4, int>                                   mStartVariant;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCFOLD ::BaseGameVersion const& getRequiredBaseGameVersion() const;

        MCAPI ::Block const* operator()(int data) const;

        MCAPI ~BlockComplexAliasContent();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
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
        // member functions
        // NOLINTBEGIN
        MCAPI LookupByNameImplReturnType(::Block const* block, bool resolveBlockLegacy);

        MCAPI LookupByNameImplReturnType(::WeakPtr<::BlockLegacy const> blockLegacy, ::Block const* block);

        MCAPI LookupByNameImplReturnType(::WeakPtr<::BlockLegacy const> blockLegacy, int data, bool resolveBlock);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::Block const* block, bool resolveBlockLegacy);

        MCAPI void* $ctor(::WeakPtr<::BlockLegacy const> blockLegacy, ::Block const* block);

        MCAPI void* $ctor(::WeakPtr<::BlockLegacy const> blockLegacy, int data, bool resolveBlock);
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
        bool                                         logNotFound
    );

    MCAPI static ::Block const* _lookupByNameImplSetNewBlockStates(
        ::Block const&                                                         block,
        ::std::vector<::BlockTypeRegistry::BlockComplexAliasBlockState> const& states
    );

    MCAPI static void checkBlockPermutationCap();

    MCAPI static uint64 computeBlockTypeRegistryChecksum(::BaseGameVersion const& worldBaseGameVersion);

    MCAPI static void finalizeBlockComponentStorage();

    MCAPI static void finalizeBlockCustomComponentEvents(::ServerScriptManager const& scriptManager);

    MCAPI static void forEachBlock(::std::function<bool(::BlockLegacy const&)> callback);

    MCAPI static ::HashedString const& getBlockNameFromNameHash(uint64 hash);

    MCAPI static ::std::vector<::std::reference_wrapper<::HashedString const>> const&
    getComplexAliasPostSplitBlockNames(::HashedString const& oldName);

    MCAPI static ::Block const& getDefaultBlockState(::HashedString const& name, bool logNotFound);

    MCAPI static ::BlockTypeRegistry::DirectAccessBlocks const& getDirectAccessBlocks();

    MCAPI static void initHardCodedBlockComponents(::Experiments const& experiments);

    MCAPI static void initRWLock();

    MCAPI static bool isComplexAliasBlock(::HashedString const& blockName);

    MCAPI static ::Block const* lookupByName(::HashedString const& name, int data, bool logNotFound);

    MCAPI static ::Block const* lookupByName(
        ::HashedString const&                                                  name,
        ::std::vector<::BlockTypeRegistry::BlockComplexAliasBlockState> const& states,
        bool                                                                   logNotFound
    );

    MCAPI static ::WeakPtr<::BlockLegacy> lookupByName(::HashedString const& name, bool logNotFound);

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

    MCAPI static ::std::map<::HashedString, ::SharedPtr<::BlockLegacy>>& mBlockLookupMap();

    MCAPI static ::entt::dense_map<uint64, ::HashedString>& mBlockNameHashToStringMap();

    MCAPI static ::std::unique_ptr<::BlockTypeRegistry::DirectAccessBlocks>& mDirectAccessBlocks();

    MCAPI static ::std::set<::std::string>& mKnownNamespaces();

    MCAPI static ::std::shared_ptr<::BlockTypeRegistryRWLock>& mRWLock();
    // NOLINTEND
};
