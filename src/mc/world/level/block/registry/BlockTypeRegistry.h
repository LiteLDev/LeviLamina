#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SharedPtr.h"
#include "mc/common/WeakPtr.h"
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/Owner.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/util/BaseGameVersion.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockType;
class BlockTypeRegistryModificationsLock;
class BlockTypeRegistryRWLock;
class BlockTypeRegistryReadLock;
class Experiments;
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
        MCAPI ~BlockComplexAliasBlockState();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
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

    public:
        // prevent constructor by default
        BlockComplexAliasContent& operator=(BlockComplexAliasContent const&);
        BlockComplexAliasContent();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI BlockComplexAliasContent(::BlockTypeRegistry::BlockComplexAliasContent const&);

        MCAPI BlockComplexAliasContent(
            ::std::function<::Block const*(int)> callback,
            ::BaseGameVersion const&             minRequiredVersion,
            ::SemVersion const&                  blocksJsonFormatVersion,
            int                                  startVariant
        );

        MCFOLD ::BaseGameVersion const& getRequiredBaseGameVersion() const;

        MCAPI ::BlockTypeRegistry::BlockComplexAliasContent& operator=(::BlockTypeRegistry::BlockComplexAliasContent&&);

        MCAPI ~BlockComplexAliasContent();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::BlockTypeRegistry::BlockComplexAliasContent const&);

        MCAPI void* $ctor(
            ::std::function<::Block const*(int)> callback,
            ::BaseGameVersion const&             minRequiredVersion,
            ::SemVersion const&                  blocksJsonFormatVersion,
            int                                  startVariant
        );
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
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
        ::ll::TypedStorage<8, 8, ::WeakPtr<::BlockType const>> mBlockType;
        ::ll::TypedStorage<8, 8, ::Block const*>               mBlock;
        // NOLINTEND

    public:
        // prevent constructor by default
        LookupByNameImplReturnType();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI LookupByNameImplReturnType(::Block const* block, bool resolveBlockType);

        MCAPI LookupByNameImplReturnType(::WeakPtr<::BlockType const> blockType, int data, bool resolveBlock);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::Block const* block, bool resolveBlockType);

        MCAPI void* $ctor(::WeakPtr<::BlockType const> blockType, int data, bool resolveBlock);
        // NOLINTEND
    };

    using BlockAliasLookupMap = ::std::unordered_map<::HashedString, ::HashedString>;

    using BlockComplexAliasCallback = ::std::function<::Block const*(int)>;

    using BlockComplexAliasLookupMap = ::entt::dense_map<::HashedString, ::BlockTypeRegistry::BlockComplexAliasContent>;

    using BlockComplexAliasPostSplitBlockNames = ::std::vector<::std::reference_wrapper<::HashedString const>>;

    using BlockComplexAliasPostSplitBlockNamesList =
        ::std::vector<::std::vector<::std::reference_wrapper<::HashedString const>>>;

    using BlockComplexAliasPostSplitBlockNamesLookupMap = ::entt::dense_map<uint64, uint64>;

    using BlockLookupMap = ::std::map<::HashedString, ::SharedPtr<::BlockType>>;

    using BlockNameHashToHashedStringMap = ::entt::dense_map<uint64, ::HashedString>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::map<::HashedString, ::SharedPtr<::BlockType>>> mBlockLookupMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::HashedString>> mBlockAliasLookupMap;
    ::ll::TypedStorage<8, 72, ::entt::dense_map<::HashedString, ::BlockTypeRegistry::BlockComplexAliasContent>>
        mBlockComplexAliasLookupMap;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::vector<::std::reference_wrapper<::HashedString const>>>>
                                                                 mBlockComplexAliasPostSplitBlockNamesList;
    ::ll::TypedStorage<8, 72, ::entt::dense_map<uint64, uint64>> mBlockComplexAliasPostSplitBlockNamesLookupMap;
    ::ll::TypedStorage<8, 16, ::std::map<::HashedString, ::HashedString>> mBlockComplexAliasPreSplitBlockNamesLookupMap;
    ::ll::TypedStorage<8, 16, ::std::set<::std::string>>                  mKnownNamespaces;
    ::ll::TypedStorage<8, 72, ::entt::dense_map<uint64, ::HashedString>>  mBlockNameHashToStringMap;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockTypeRegistry::DirectAccessBlocks>> mDirectAccessBlocks;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::BlockTypeRegistryRWLock>>              mRWLock;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockTypeRegistry();

    MCAPI ::BlockTypeRegistryReadLock _lockAgainstRegistryModifications() const;

    MCAPI ::BlockTypeRegistryModificationsLock _lockForRegistryModifications() const;

    MCAPI ::BlockTypeRegistry::LookupByNameImplReturnType _lookupByNameImpl(
        ::HashedString const&                        name,
        int                                          data,
        ::BlockTypeRegistry::LookupByNameImplResolve resolve,
        bool
    ) const;

#ifdef LL_PLAT_C
    MCAPI void addBlocksToValidator(::LinkedAssetValidator& validator, ::BaseGameVersion const& baseGameVersion) const;
#endif

    MCAPI void checkBlockPermutationCap() const;

    MCAPI uint64 computeBlockTypeRegistryChecksum(::BaseGameVersion const& worldBaseGameVersion) const;

    MCAPI void finalizeBlockComponentStorage();

#ifdef LL_PLAT_C
    MCAPI void finalizeBlockComponentStorageForRendering(::brstd::function_ref<void(::BlockType&)> finalizer);
#endif

    MCAPI void finalizeBlockCustomComponentEvents(::ServerScriptManager const& scriptManager);

#ifdef LL_PLAT_C
    MCFOLD void forEachBlockDEPRECATED(::brstd::function_ref<bool(::BlockType&)> callback);
#endif

    MCAPI void forEachBlockMutable(::brstd::function_ref<bool(::Block&)> callback);

    MCFOLD void forEachBlockType(::brstd::function_ref<bool(::BlockType const&)> callback) const;

    MCAPI ::HashedString const& getBlockNameFromNameHash(uint64 hash) const;

    MCAPI ::std::vector<::std::reference_wrapper<::HashedString const>> const&
    getComplexAliasPostSplitBlockNames(::HashedString const& oldName) const;

#ifdef LL_PLAT_C
    MCAPI ::HashedString const* getComplexAliasPreSplitBlockName(::HashedString const& postSplitName) const;
#endif

    MCAPI ::Block const& getDefaultBlockState(::HashedString const& name, bool logNotFound) const;

    MCAPI ::BlockTypeRegistry::DirectAccessBlocks const& getDirectAccessBlocks() const;

#ifdef LL_PLAT_C
    MCAPI int getStartVariantForComplexAliasBlock(::HashedString const& blockName) const;
#endif

    MCAPI void initHardCodedBlockComponents(::Experiments const& experiments);

    MCAPI void initRWLock();

    MCAPI bool isComplexAliasBlock(::HashedString const& blockName) const;

#ifdef LL_PLAT_C
    MCAPI bool isExpectFlattenedInBlocksJson(::HashedString const& blockName, ::SemVersion const& currentVersion) const;
#endif

    MCAPI ::Block const* lookupByName(::HashedString const& name, int data, bool logNotFound) const;

    MCAPI ::Block const* lookupByName(
        ::HashedString const&                                                  name,
        ::std::vector<::BlockTypeRegistry::BlockComplexAliasBlockState> const& states,
        bool                                                                   logNotFound
    ) const;

    MCAPI ::WeakPtr<::BlockType> lookupByName(::HashedString const& name, bool logNotFound) const;

    MCAPI void prepareBlocks(uint latestUpdaterVersion);

    MCAPI void registerAlias(::HashedString const& alias, ::HashedString const& name);

    MCAPI void registerComplexAlias(
        ::HashedString const&                                                alias,
        ::std::function<::Block const*(int)>                                 callback,
        ::std::vector<::std::reference_wrapper<::HashedString const>> const& postSplitBlockNames,
        ::BaseGameVersion const&                                             minRequiredVersion,
        ::SemVersion const&                                                  blocksJsonFormatVersion,
        ::HashedString                                                       defaultNewBlockName,
        int                                                                  startVariant
    );

    MCAPI void setupDirectAccessBlocks();

    MCAPI void setupVoxelShapeRegistryAccessOnAllBlocks(
        ::std::shared_ptr<::VoxelShapes::VoxelShapeRegistry> const& voxelShapeRegistry
    ) const;

    MCAPI void unregisterBlock(::HashedString const& name);

    MCAPI void unregisterBlocks();

    MCAPI ~BlockTypeRegistry();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::BlockTypeRegistry& get();

    MCAPI static ::Bedrock::NotNullNonOwnerPtr<::BlockTypeRegistry> getNonOwner();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Bedrock::Owner<::BlockTypeRegistry>& mBlockTypeRegistry();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
