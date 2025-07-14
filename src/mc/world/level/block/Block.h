#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
class BlockLegacy;
class BlockPos;
class BlockSource;
class BlockState;
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
namespace mce { class Color; }
// clang-format on

class Block {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 104, ::BlockComponentStorage>       mComponents;
    ::ll::TypedStorage<2, 2, ushort const>                    mData;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::BlockLegacy*>> mLegacyBlock;
    ::ll::TypedStorage<4, 8, ::CachedComponentData>           mCachedComponentData;
    ::ll::TypedStorage<8, 104, ::BlockComponentDirectData>    mDirectData;
    ::ll::TypedStorage<8, 24, ::std::vector<::HashedString>>  mTags;
    ::ll::TypedStorage<8, 24, ::CompoundTag>                  mSerializationId;
    ::ll::TypedStorage<8, 8, uint64>                          mSerializationIdHash;
    ::ll::TypedStorage<4, 4, uint>                            mSerializationIdHashForNetwork;
    ::ll::TypedStorage<4, 4, uint>                            mNetworkId;
    ::ll::TypedStorage<1, 1, bool>                            mHasRuntimeId;
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
    MCAPI Block(ushort data, ::gsl::not_null<::BlockLegacy*> oldBlock);

    MCAPI Block(ushort data, ::gsl::not_null<::BlockLegacy*> oldBlock, ::CompoundTag serId, uint const& runId);

    MCAPI bool _isSolid() const;

    MCAPI void _queueForTickBasedOnComponentConfiguration(
        ::BlockSource&    region,
        ::BlockPos const& pos,
        ::Random&         random,
        bool              placingBlock
    ) const;

    MCAPI void _removeFromTickingQueues(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI ::ItemInstance asItemInstance(::BlockSource& region, ::BlockPos const& position, bool withData) const;

    MCAPI bool breaksFallingBlocks(::BaseGameVersion version) const;

    MCAPI ::std::string buildDescriptionName() const;

    MCAPI void buildSerializationId(uint latestUpdaterVersion);

    MCAPI ::std::string buildSerializationIdString() const;

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

    MCAPI void finalizeBlockComponentStorage();

    MCAPI bool getCollisionShape(
        ::AABB&                                            outAABB,
        ::IConstBlockSource const&                         region,
        ::BlockPos const&                                  pos,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const;

    MCAPI ::std::string getDescriptionId() const;

    MCAPI ::BlockLegacy const& getLegacyBlock() const;

    MCAPI ::mce::Color getMapColor(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI ::Block const& getStateFromLegacyData(ushort data) const;

    MCAPI bool hasState(::BlockState const& stateType) const;

    MCAPI bool hasTag(::HashedString const& tagName) const;

    MCAPI bool isAir() const;

    MCAPI bool isButtonBlock() const;

    MCAPI bool isCropBlock() const;

    MCAPI bool isDoorBlock() const;

    MCFOLD bool isMotionBlockingBlock() const;

    MCAPI bool isPartialBlock(::BlockSource const& region, ::BlockPos const& pos) const;

    MCAPI bool isPreservingMediumWhenPlaced(::Block const& medium) const;

    MCAPI bool isSlabBlock() const;

    MCAPI bool isSolidBlockingBlock() const;

    MCAPI bool isSolidBlockingBlockAndNotSignalSource() const;

    MCAPI bool isTopPartialBlock(::BlockSource const& region, ::BlockPos const& pos) const;

    MCAPI bool isValidAuxValue(int value) const;

    MCAPI bool mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar face) const;

    MCAPI void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCAPI void onFallOn(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity, float fallDistance) const;

    MCAPI void onPlace(::BlockSource& region, ::BlockPos const& pos, ::Block const& previousBlock) const;

    MCAPI void onStepOff(::Actor& entity, ::BlockPos const& pos) const;

    MCAPI void onStepOn(::Actor& entity, ::BlockPos const& pos) const;

    MCAPI void playerDestroy(::Player& player, ::BlockPos const& pos) const;

    MCAPI ::ItemActor*
    popResource(::BlockSource& region, ::BlockPos const& pos, ::ItemInstance const& itemInstance) const;

    MCAPI void queuedTick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCAPI void randomTick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCAPI ::Block const& sanitizeFillBlock() const;

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
    MCAPI void* $ctor(ushort data, ::gsl::not_null<::BlockLegacy*> oldBlock);

    MCAPI void* $ctor(ushort data, ::gsl::not_null<::BlockLegacy*> oldBlock, ::CompoundTag serId, uint const& runId);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
