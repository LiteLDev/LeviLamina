#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/block/FallingBlock.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class BaseGameVersion;
class Block;
class BlockItem;
class BlockLegacy;
class BlockPos;
class BlockSource;
class Experiments;
class GetCollisionShapeInterface;
class IConstBlockSource;
class Player;
class Random;
class Vec3;
struct ActorBlockSyncMessage;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
namespace mce { class Color; }
// clang-format on

class TopSnowBlock : public ::FallingBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mUsePartialHeight;
    ::ll::TypedStorage<1, 1, bool> mAllowFallOnPlace;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 57
    virtual bool checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const
        /*override*/;

    // vIndex: 11
    virtual ::AABB const& getVisualShape(::Block const& block, ::AABB& bufferAABB) const /*override*/;

    // vIndex: 5
    virtual ::AABB getCollisionShape(
        ::Block const& block,
        ::IConstBlockSource const&,
        ::BlockPos const&                                  pos,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const /*override*/;

    // vIndex: 6
    virtual bool getCollisionShapeForCamera(
        ::AABB&                    outAABB,
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos
    ) const /*override*/;

    // vIndex: 133
    virtual void onExploded(::BlockSource& region, ::BlockPos const& pos, ::Actor* entitySource) const /*override*/;

    // vIndex: 79
    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 82
    virtual bool tryToPlace(
        ::BlockSource&                 region,
        ::BlockPos const&              pos,
        ::Block const&                 block,
        ::ActorBlockSyncMessage const* syncMsg
    ) const /*override*/;

    // vIndex: 92
    virtual ::Block const&
    getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar face, ::Vec3 const& clickPos, int itemValue) const
        /*override*/;

    // vIndex: 70
    virtual bool isPreservingMediumWhenPlaced(::BlockLegacy const* medium) const /*override*/;

    // vIndex: 84
    virtual bool breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const /*override*/;

    // vIndex: 87
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    // vIndex: 89
    virtual ::Block const* playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const
        /*override*/;

    // vIndex: 137
    virtual void randomTick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const /*override*/;

    // vIndex: 148
    virtual ::mce::Color getDustColor(::Block const&) const /*override*/;

    // vIndex: 149
    virtual ::std::string getDustParticleName(::Block const&) const /*override*/;

    // vIndex: 102
    virtual bool shouldStopFalling(::Actor& entity) const /*override*/;

    // vIndex: 98
    virtual bool
    canBeBuiltOver(::Block const& block, ::BlockSource& region, ::BlockPos const& pos, ::BlockItem const& newItem) const
        /*override*/;

    // vIndex: 97
    virtual bool canBeBuiltOver(::Block const&, ::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 104
    virtual bool canHaveExtraData() const /*override*/;

    // vIndex: 31
    virtual bool isLavaBlocking() const /*override*/;

    // vIndex: 152
    virtual bool isFreeToFall(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 153
    virtual void
    startFalling(::BlockSource& region, ::BlockPos const& pos, ::Block const& oldBlock, bool creative) const
        /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~TopSnowBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _canBeBuiltOver(::BlockSource& region, ::BlockPos const& pos, ::BlockItem const* item) const;

    MCNAPI bool melt(::BlockSource& region, ::BlockPos const& pos, int meltHeight) const;

    MCNAPI void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;

    MCNAPI void startFallingIfLostSupport(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Block const&
    buildSnowBlock(::BlockSource& region, ::BlockPos const& pos, int height, bool additive);

    MCNAPI static ::Block const&
    getSnowBlockToBuild(::BlockSource const& region, ::BlockPos const& pos, int height, bool additive);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int const& MAX_HEIGHT();

    MCAPI static ::BaseGameVersion const& TOP_SNOW_FALL_ON_PLACE();

    MCAPI static ::BaseGameVersion const& TOP_SNOW_JAVA_PARITY_VERSION();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const;

    MCNAPI ::AABB const& $getVisualShape(::Block const& block, ::AABB& bufferAABB) const;

    MCNAPI ::AABB $getCollisionShape(
        ::Block const& block,
        ::IConstBlockSource const&,
        ::BlockPos const&                                  pos,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const;

    MCNAPI bool $getCollisionShapeForCamera(
        ::AABB&                    outAABB,
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos
    ) const;

    MCNAPI void $onExploded(::BlockSource& region, ::BlockPos const& pos, ::Actor* entitySource) const;

    MCNAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI bool $tryToPlace(
        ::BlockSource&                 region,
        ::BlockPos const&              pos,
        ::Block const&                 block,
        ::ActorBlockSyncMessage const* syncMsg
    ) const;

    MCNAPI ::Block const&
    $getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar face, ::Vec3 const& clickPos, int itemValue)
        const;

    MCNAPI bool $isPreservingMediumWhenPlaced(::BlockLegacy const* medium) const;

    MCNAPI bool $breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const;

    MCNAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCNAPI ::Block const* $playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const;

    MCNAPI void $randomTick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCNAPI ::mce::Color $getDustColor(::Block const&) const;

    MCNAPI ::std::string $getDustParticleName(::Block const&) const;

    MCNAPI bool $shouldStopFalling(::Actor& entity) const;

    MCNAPI bool
    $canBeBuiltOver(::Block const& block, ::BlockSource& region, ::BlockPos const& pos, ::BlockItem const& newItem)
        const;

    MCNAPI bool $canBeBuiltOver(::Block const&, ::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI bool $canHaveExtraData() const;

    MCNAPI bool $isLavaBlocking() const;

    MCNAPI bool $isFreeToFall(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI void
    $startFalling(::BlockSource& region, ::BlockPos const& pos, ::Block const& oldBlock, bool creative) const;

    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
