#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/nbt/CompoundTag.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/CachedComponentData.h"
#include "mc/world/level/block/actor/BlockActorType.h"
#include "mc/world/level/block/components/BlockComponentDirectData.h"
#include "mc/world/level/block/components/BlockComponentStorage.h"
#include "mc/world/level/block/components/ConnectionID.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class BaseGameVersion;
class BlockPos;
class BlockSource;
class BlockState;
class BlockType;
class GetCollisionShapeInterface;
class HashedString;
class HitResult;
class IRandom;
class ItemInstance;
class ItemStackBase;
class Player;
class Random;
class Vec3;
struct BlockAnimateTickData;
struct ResourceDropsContext;
class IClientBlockData;
// clang-format on

class Block {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::BlockComponentStorage>              mComponents;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::BlockType*>>         mBlockType;
    ::ll::TypedStorage<4, 8, ::CachedComponentData>                 mCachedComponentData;
    ::ll::TypedStorage<8, 96, ::BlockComponentDirectData>           mDirectData;
    ::ll::TypedStorage<8, 24, ::std::vector<::HashedString>>        mTags;
    ::ll::TypedStorage<8, 24, ::CompoundTag>                        mSerializationId;
    ::ll::TypedStorage<8, 8, uint64>                                mSerializationIdHash;
    ::ll::TypedStorage<4, 4, uint>                                  mSerializationIdHashForNetwork;
    ::ll::TypedStorage<4, 4, uint>                                  mNetworkId;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IClientBlockData>> mClientData;
    ::ll::TypedStorage<2, 2, ushort const>                          mData;
    ::ll::TypedStorage<1, 1, bool>                                  mHasRuntimeId;
    // NOLINTEND

public:
    // prevent constructor by default
    Block();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Block() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Block(ushort data, ::gsl::not_null<::BlockType*> oldBlock);

    MCAPI Block(ushort data, ::gsl::not_null<::BlockType*> oldBlock, ::CompoundTag serId, uint const& runId);

    MCAPI bool _isSolid() const;

#ifdef LL_PLAT_C
    MCAPI void _playAmbientSounds(::BlockAnimateTickData const& tickData) const;
#endif

    MCAPI void _queueForTickBasedOnComponentConfiguration(
        ::BlockSource&    region,
        ::BlockPos const& pos,
        ::Random&         random,
        bool              placingBlock
    ) const;

    MCAPI void _removeFromTickingQueues(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI ::Block& addTag(::HashedString const& tag);

    MCAPI ::ItemInstance asItemInstance(::BlockSource& region, ::BlockPos const& position, bool withData) const;

    MCAPI bool breaksFallingBlocks(::BaseGameVersion version) const;

    MCAPI ::std::string buildDescriptionId() const;

    MCAPI ::std::string buildDescriptionName() const;

    MCAPI void buildSerializationId(uint latestUpdaterVersion);

    MCAPI bool canConnect(::Block const& connectionBlock, uchar toOther) const;

    MCAPI bool canProvideFullSupport(uchar face) const;

    MCAPI bool canProvideSupport(uchar face, ::BlockSupportType type) const;

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

    MCAPI ::Block const& copyState(::Block const& fromBlock, ::BlockState const& state) const;

    MCAPI void executeItemEvent(
        ::ItemStackBase&     item,
        ::std::string const& eventName,
        ::BlockSource&       region,
        ::BlockPos const&    pos,
        ::Actor*             actor
    ) const;

    MCAPI void finalizeBlockComponentStorage();

#ifdef LL_PLAT_C
    MCAPI ::BlockActorType getBlockEntityType() const;
#endif

    MCAPI ::std::optional<::ConnectionID> getConnectionID() const;

#ifdef LL_PLAT_C
    MCAPI ::std::string getCraftingLabelText() const;
#endif

    MCAPI ::std::string getDescriptionId() const;

    MCAPI float getDestroySpeed(::ItemStackBase const& item) const;

    MCAPI ::std::string getDisplayName() const;

    MCAPI bool hasTag(::HashedString const& tagName) const;

    MCAPI bool isCropBlock() const;

    MCAPI bool isPartialBlock(::BlockSource const& region, ::BlockPos const& pos) const;

    MCAPI bool isPreservingMediumWhenPlaced(::Block const& medium) const;

    MCAPI bool isTopPartialBlock(::BlockSource const& region, ::BlockPos const& pos) const;

    MCAPI ::Block const& keepStates(::std::vector<::BlockState const*> const& statesToKeep) const;

    MCAPI bool mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar face) const;

    MCAPI void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCAPI void onActorEvent(::BlockPos const& pos, ::std::string const& eventName, ::Actor& sourceEntity) const;

    MCAPI void onActorInternalEvent(::BlockPos const& pos, ::std::string const& eventName, ::Actor& sourceEntity) const;

    MCAPI void playerDestroy(::Player& player, ::BlockPos const& pos) const;

    MCAPI void queuedTick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCAPI void randomTick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCAPI void spawnResources(
        ::BlockSource&                region,
        ::BlockPos const&             pos,
        ::IRandom&                    random,
        ::ResourceDropsContext const& resourceDropsContext,
        ::Actor const*                actorContext
    ) const;

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
