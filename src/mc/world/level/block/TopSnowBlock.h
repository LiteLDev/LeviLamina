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
class BlockPos;
class BlockSource;
class BlockType;
class Experiments;
class GetCollisionShapeInterface;
class IConstBlockSource;
class Player;
class Random;
class Vec3;
struct ActorBlockSyncMessage;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
namespace BlockEvents { class BlockRandomTickEvent; }
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
    virtual bool isPreservingMediumWhenPlaced(::BlockType const* medium) const /*override*/;

    // vIndex: 84
    virtual bool breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const /*override*/;

    // vIndex: 87
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    // vIndex: 89
    virtual ::Block const* playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const
        /*override*/;

    // vIndex: 147
    virtual ::mce::Color getDustColor(::Block const&) const /*override*/;

    // vIndex: 148
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

    // vIndex: 30
    virtual bool isLavaBlocking() const /*override*/;

    // vIndex: 151
    virtual bool isFreeToFall(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 152
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
    MCAPI bool _canBeBuiltOver(::BlockSource& region, ::BlockPos const& pos, ::BlockItem const* item) const;

    MCAPI bool melt(::BlockSource& region, ::BlockPos const& pos, int meltHeight) const;

    MCAPI void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;

    MCAPI void randomTick(::BlockEvents::BlockRandomTickEvent& eventData) const;

    MCAPI void startFallingIfLostSupport(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Block const& buildSnowBlock(::BlockSource& region, ::BlockPos const& pos, int height, bool additive);

    MCAPI static ::Block const&
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
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const;

    MCAPI ::AABB const& $getVisualShape(::Block const& block, ::AABB& bufferAABB) const;

    MCAPI ::AABB $getCollisionShape(
        ::Block const& block,
        ::IConstBlockSource const&,
        ::BlockPos const&                                  pos,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const;

    MCAPI bool $getCollisionShapeForCamera(
        ::AABB&                    outAABB,
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos
    ) const;

    MCAPI void $onExploded(::BlockSource& region, ::BlockPos const& pos, ::Actor* entitySource) const;

    MCAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI bool $tryToPlace(
        ::BlockSource&                 region,
        ::BlockPos const&              pos,
        ::Block const&                 block,
        ::ActorBlockSyncMessage const* syncMsg
    ) const;

    MCAPI ::Block const& $getPlacementBlock(
        ::Actor const&    by,
        ::BlockPos const& pos,
        uchar             face,
        ::Vec3 const&     clickPos,
        int               itemValue
    ) const;

    MCAPI bool $isPreservingMediumWhenPlaced(::BlockType const* medium) const;

    MCAPI bool $breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const;

    MCAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCAPI ::Block const* $playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const;

    MCFOLD ::mce::Color $getDustColor(::Block const&) const;

    MCAPI ::std::string $getDustParticleName(::Block const&) const;

    MCAPI bool $shouldStopFalling(::Actor& entity) const;

    MCAPI bool $canBeBuiltOver(
        ::Block const&     block,
        ::BlockSource&     region,
        ::BlockPos const&  pos,
        ::BlockItem const& newItem
    ) const;

    MCAPI bool $canBeBuiltOver(::Block const&, ::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD bool $canHaveExtraData() const;

    MCFOLD bool $isLavaBlocking() const;

    MCAPI bool $isFreeToFall(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void
    $startFalling(::BlockSource& region, ::BlockPos const& pos, ::Block const& oldBlock, bool creative) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
