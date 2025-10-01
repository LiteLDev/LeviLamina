#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/block/BlockType.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/CachedComponentData.h"
#include "mc/world/level/block/components/BlockComponentDirectData.h"
#include "mc/world/level/block/components/BlockComponentStorage.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class BaseGameVersion;
class BlockPos;
class BlockSource;
class BlockState;
class BlockType;
class DefinitionTrigger;
class GetCollisionShapeInterface;
class HashedString;
class HitResult;
class IConstBlockSource;
class ItemActor;
class ItemInstance;
class ItemStackBase;
class Player;
class Random;
class RenderParams;
class Vec3;
// clang-format on

class Block {
public:
    using BlockStateValueType = std::variant<int, float, bool, std::string>;
    using BlockStatesType     = std::vector<std::pair<std::string, BlockStateValueType>>;

    LLNDAPI static optional_ref<Block const> tryGetFromRegistry(uint runtimeID);
    LLNDAPI static optional_ref<Block const> tryGetFromRegistry(uint legacyBlockID, ushort legacyData);
    LLNDAPI static optional_ref<Block const> tryGetFromRegistry(HashedString const& name);
    LLNDAPI static optional_ref<Block const> tryGetFromRegistry(HashedString const& name, ushort legacyData);
    LLNDAPI static optional_ref<Block const>
    tryGetFromRegistry(HashedString const& name, BlockStatesType const& states);
    LLNDAPI static optional_ref<Block const> tryGetFromRegistry(CompoundTag const& nbt);

    LLNDAPI static optional_ref<Block const> tryGetFromRegistry(std::string_view name);
    LLNDAPI static optional_ref<Block const> tryGetFromRegistry(std::string_view name, ushort legacyData);
    LLNDAPI static optional_ref<Block const> tryGetFromRegistry(std::string_view name, BlockStatesType const& states);

    [[nodiscard]] inline std::string const& getTypeName() const { return getBlockType().getTypeName(); }

    [[nodiscard]] inline short getBlockItemId() const { return getBlockType().getBlockItemId(); }

    [[nodiscard]] inline ushort getData() const { return mData; }

    template <typename T>
    std::optional<T> getState(uint64 id) const {
        return mBlockType->getState<T>(id, mData);
    }

    template <typename T>
    std::optional<T> getState(BlockState const& state) const {
        return mBlockType->getState<T>(state, mData);
    }

    template <typename T>
    optional_ref<Block const> setState(uint64 id, T value) const {
        return mBlockType->trySetState(id, value, mData);
    }

    template <typename T>
    optional_ref<Block const> setState(BlockState const& state, T value) const {
        return mBlockType->trySetState(state, value, mData);
    }

    bool operator==(Block const& other) const { return mSerializationIdHash == other.mSerializationIdHash; }

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 104, ::BlockComponentStorage>      mComponents;
    ::ll::TypedStorage<2, 2, ushort const>                   mData;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::BlockType*>>  mBlockType;
    ::ll::TypedStorage<4, 8, ::CachedComponentData>          mCachedComponentData;
    ::ll::TypedStorage<8, 96, ::BlockComponentDirectData>    mDirectData;
    ::ll::TypedStorage<8, 24, ::std::vector<::HashedString>> mTags;
    ::ll::TypedStorage<8, 24, ::CompoundTag>                 mSerializationId;
    ::ll::TypedStorage<8, 8, uint64>                         mSerializationIdHash;
    ::ll::TypedStorage<4, 4, uint>                           mSerializationIdHashForNetwork;
    ::ll::TypedStorage<4, 4, uint>                           mNetworkId;
    ::ll::TypedStorage<1, 1, bool>                           mHasRuntimeId;
    // NOLINTEND

public:
    // prevent constructor by default
    Block();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Block() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Block(ushort data, ::gsl::not_null<::BlockType*> oldBlock);

    MCAPI Block(ushort data, ::gsl::not_null<::BlockType*> oldBlock, ::CompoundTag serId, uint const& runId);

    MCAPI bool _isSolid() const;

    MCAPI void _queueForTickBasedOnComponentConfiguration(
        ::BlockSource&    region,
        ::BlockPos const& pos,
        ::Random&         random,
        bool              placingBlock
    ) const;

    MCAPI void _removeFromTickingQueues(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI ::ItemInstance asItemInstance(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI ::ItemInstance asItemInstance(::BlockSource& region, ::BlockPos const& position, bool withData) const;

    MCAPI bool breaksFallingBlocks(::BaseGameVersion version) const;

    MCAPI ::std::string buildDescriptionName() const;

    MCAPI void buildSerializationId(uint latestUpdaterVersion);

    MCAPI bool canProvideFullSupport(uchar face) const;

    MCAPI bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI ::HitResult clip(::BlockPos const& pos, ::Vec3 const& A, ::Vec3 const& B, ::AABB const& aabb) const;

    MCAPI ::HitResult clip(
        ::BlockSource const&                               region,
        ::BlockPos const&                                  pos,
        ::Vec3 const&                                      A,
        ::Vec3 const&                                      B,
        ::ShapeType                                        shapeType,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const;

    MCAPI uint computeRawSerializationIdHashForNetwork() const;

    MCAPI ::Block const& copyState(::Block const& fromBlock, ::BlockState const& state) const;

    MCAPI ::Block const& copyStates(::Block const& fromBlock) const;

    MCAPI void executeItemEvent(
        ::ItemStackBase&     item,
        ::std::string const& eventName,
        ::BlockSource&       region,
        ::BlockPos const&    pos,
        ::Actor*             actor
    ) const;

    MCAPI bool executeTrigger(::DefinitionTrigger const& trigger, ::RenderParams& params) const;

    MCAPI bool getCollisionShape(
        ::AABB&                                            outAABB,
        ::IConstBlockSource const&                         region,
        ::BlockPos const&                                  pos,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const;

    MCAPI ::std::string getDescriptionId() const;

    MCAPI ::Block const& getStateFromLegacyData(ushort data) const;

    MCAPI bool hasState(::HashedString const& name) const;

    MCAPI bool hasState(::BlockState const& stateType) const;

    MCAPI bool hasTag(::HashedString const& tagName) const;

    MCAPI bool isPartialBlock(::BlockSource const& region, ::BlockPos const& pos) const;

    MCAPI bool isPreservingMediumWhenPlaced(::Block const& medium) const;

    MCAPI bool isSolidBlockingBlockAndNotSignalSource() const;

    MCAPI bool isTopPartialBlock(::BlockSource const& region, ::BlockPos const& pos) const;

    MCAPI bool mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar face) const;

    MCAPI void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCAPI void onFallOn(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity, float fallDistance) const;

    MCAPI void onStepOff(::Actor& entity, ::BlockPos const& pos) const;

    MCAPI void onStepOn(::Actor& entity, ::BlockPos const& pos) const;

    MCAPI void playerDestroy(::Player& player, ::BlockPos const& pos) const;

    MCAPI ::ItemActor*
    popResource(::BlockSource& region, ::BlockPos const& pos, ::ItemInstance const& itemInstance) const;

    MCAPI void queuedTick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCAPI void randomTick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCAPI bool shouldRandomTick() const;

    MCAPI ::std::string toDebugString() const;

    MCAPI bool use(::Player& player, ::BlockPos const& pos, uchar face, ::std::optional<::Vec3> hit) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& BLOCK_DESCRIPTION_PREFIX();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(ushort data, ::gsl::not_null<::BlockType*> oldBlock);

    MCAPI void* $ctor(ushort data, ::gsl::not_null<::BlockType*> oldBlock, ::CompoundTag serId, uint const& runId);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
