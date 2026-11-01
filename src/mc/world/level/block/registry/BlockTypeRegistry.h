#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/Owner.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/util/BaseGameVersion.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockType;
class LinkedAssetValidator;
class ServerScriptManager;
namespace VoxelShapes { class VoxelShapeRegistry; }
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
    enum class LookupByNameImplResolve : int {
        BlockType = 0,
        Block     = 1,
    };

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
        MCNAPI ~BlockComplexAliasBlockState();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    class BlockComplexAliasContent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 64, ::std::function<::Block const*(int)>> mCallback;
        ::ll::TypedStorage<8, 32, ::BaseGameVersion>                    mMinRequiredVersion;
        ::ll::TypedStorage<8, 24, ::SemVersion>                         mFlattenedInBlocksJsonVersion;
        ::ll::TypedStorage<4, 4, int>                                   mStartVariant;
        // NOLINTEND
    };

    struct DirectAccessBlocks {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::BlockType const&> mAirBlock;
        // NOLINTEND

    public:
        // prevent constructor by default
        DirectAccessBlocks& operator=(DirectAccessBlocks const&);
        DirectAccessBlocks(DirectAccessBlocks const&);
        DirectAccessBlocks();
    };

    struct LookupByNameImplReturnType {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::BlockType const*> mBlockType;
        ::ll::TypedStorage<8, 8, ::Block const*>     mBlock;
        // NOLINTEND
    };

    using BlockAliasLookupMap = ::std::unordered_map<::HashedString, ::HashedString>;

    using BlockComplexAliasCallback = ::std::function<::Block const*(int)>;

    using BlockComplexAliasLookupMap = ::entt::dense_map<::HashedString, ::BlockTypeRegistry::BlockComplexAliasContent>;

    using BlockComplexAliasPostSplitBlockNames = ::std::vector<::std::reference_wrapper<::HashedString const>>;

    using BlockComplexAliasPostSplitBlockNamesList =
        ::std::vector<::std::vector<::std::reference_wrapper<::HashedString const>>>;

    using BlockComplexAliasPostSplitBlockNamesLookupMap = ::entt::dense_map<uint64, uint64>;

    using BlockLookupMap = ::std::map<::HashedString, ::std::unique_ptr<::BlockType>>;

    using BlockNameHashToHashedStringMap = ::entt::dense_map<uint64, ::HashedString>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::map<::HashedString, ::std::unique_ptr<::BlockType>>> mBlockLookupMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::HashedString>>       mBlockAliasLookupMap;
    ::ll::TypedStorage<8, 72, ::entt::dense_map<::HashedString, ::BlockTypeRegistry::BlockComplexAliasContent>>
        mBlockComplexAliasLookupMap;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::vector<::std::reference_wrapper<::HashedString const>>>>
                                                                 mBlockComplexAliasPostSplitBlockNamesList;
    ::ll::TypedStorage<8, 72, ::entt::dense_map<uint64, uint64>> mBlockComplexAliasPostSplitBlockNamesLookupMap;
    ::ll::TypedStorage<8, 16, ::std::map<::HashedString, ::HashedString>> mBlockComplexAliasPreSplitBlockNamesLookupMap;
    ::ll::TypedStorage<8, 16, ::std::set<::std::string>>                  mKnownNamespaces;
    ::ll::TypedStorage<8, 72, ::entt::dense_map<uint64, ::HashedString>>  mBlockNameHashToStringMap;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockTypeRegistry::DirectAccessBlocks>> mDirectAccessBlocks;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::VoxelShapes::VoxelShapeRegistry>>      mShapeRegistry;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockTypeRegistry();

    MCNAPI ::BlockTypeRegistry::LookupByNameImplReturnType _lookupByNameImpl(
        ::HashedString const&                        name,
        int                                          data,
        ::BlockTypeRegistry::LookupByNameImplResolve resolve,
        bool                                         logNotFound
    ) const;

    MCNAPI ::Block const* _lookupByNameImplSetNewBlockStates(
        ::Block const&                                                         block,
        ::std::vector<::BlockTypeRegistry::BlockComplexAliasBlockState> const& states
    ) const;

#ifdef LL_PLAT_C
    MCNAPI void addBlocksToValidator(::LinkedAssetValidator& validator, ::BaseGameVersion const& baseGameVersion) const;
#endif

    MCNAPI void checkBlockPermutationCap() const;

    MCNAPI uint64 computeBlockTypeRegistryChecksum(::BaseGameVersion const& worldBaseGameVersion) const;

#ifdef LL_PLAT_C
    MCAPI void finalizeBlockComponentStorageForRendering(::brstd::function_ref<void(::BlockType&)> finalizer);
#endif

    MCNAPI void finalizeBlockCustomComponentEvents(::ServerScriptManager const& scriptManager);

#ifdef LL_PLAT_C
    MCNAPI void forEachBlockDEPRECATED(::brstd::function_ref<bool(::BlockType&)> callback);
#endif

    MCAPI ::HashedString const& getBlockNameFromNameHash(uint64 hash) const;

    MCNAPI ::std::vector<::std::reference_wrapper<::HashedString const>> const&
    getComplexAliasPostSplitBlockNames(::HashedString const& oldName) const;

#ifdef LL_PLAT_C
    MCNAPI ::HashedString const* getComplexAliasPreSplitBlockName(::HashedString const& postSplitName) const;
#endif

    MCAPI ::Block const& getDefaultBlockState(::HashedString const& name, bool logNotFound) const;

#ifdef LL_PLAT_C
    MCNAPI int getStartVariantForComplexAliasBlock(::HashedString const& blockName) const;
#endif

    MCAPI bool isComplexAliasBlock(::HashedString const& blockName) const;

#ifdef LL_PLAT_C
    MCNAPI bool
    isExpectFlattenedInBlocksJson(::HashedString const& blockName, ::SemVersion const& currentVersion) const;
#endif

    MCNAPI void prepareBlocks(uint latestUpdaterVersion);

    MCNAPI void registerAlias(::HashedString const& alias, ::HashedString const& name);

    MCNAPI void registerComplexAlias(
        ::HashedString const&                                                alias,
        ::std::function<::Block const*(int)>                                 callback,
        ::std::vector<::std::reference_wrapper<::HashedString const>> const& postSplitBlockNames,
        ::BaseGameVersion const&                                             minRequiredVersion,
        ::SemVersion const&                                                  blocksJsonFormatVersion,
        ::HashedString                                                       defaultNewBlockName,
        int                                                                  startVariant
    );

    MCNAPI void unregisterBlocks();

    MCNAPI ~BlockTypeRegistry();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Bedrock::Owner<::BlockTypeRegistry>& mBlockTypeRegistry();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
