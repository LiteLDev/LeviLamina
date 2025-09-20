#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/BlockType.h"
#include "mc/world/level/block/WallConnectionType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class BaseGameVersion;
class Block;
class BlockPos;
class BlockSource;
class Experiments;
class GetCollisionShapeInterface;
class HitResult;
class IConstBlockSource;
class Player;
class Vec3;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class WallBlock : public ::BlockType {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 92
    virtual ::Block const&
    getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar face, ::Vec3 const& clickPos, int itemValue) const
        /*override*/;

    // vIndex: 65
    virtual void onStructureBlockPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 66
    virtual void onStructureNeighborBlockPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 87
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    // vIndex: 10
    virtual ::AABB const&
    getVisualShapeInWorld(::Block const& block, ::IConstBlockSource const&, ::BlockPos const&, ::AABB& bufferAABB) const
        /*override*/;

    // vIndex: 5
    virtual ::AABB getCollisionShape(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const /*override*/;

    // vIndex: 9
    virtual ::AABB const& getOutline(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB&                    bufferValue
    ) const /*override*/;

    // vIndex: 22
    virtual bool canProvideSupport(::Block const&, uchar, ::BlockSupportType) const /*override*/;

    // vIndex: 24
    virtual bool canConnect(::Block const& otherBlock, uchar, ::Block const&) const /*override*/;

    // vIndex: 13
    virtual bool
    getLiquidClipVolume(::Block const& block, ::BlockSource& region, ::BlockPos const& pos, ::AABB& includeBox) const
        /*override*/;

    // vIndex: 34
    virtual bool isWallBlock() const /*override*/;

    // vIndex: 84
    virtual bool breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const /*override*/;

    // vIndex: 4
    virtual ::HitResult clip(
        ::Block const&                                     block,
        ::BlockSource const&                               region,
        ::BlockPos const&                                  pos,
        ::Vec3 const&                                      A,
        ::Vec3 const&                                      B,
        ::ShapeType                                        shapeType,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const /*override*/;

    // vIndex: 89
    virtual ::Block const* playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const
        /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~WallBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::WallConnectionType
    _desiredConnectionState(::BlockSource& region, ::BlockPos const& pos, uchar neighbor) const;

    MCNAPI bool _isCovered(::BlockSource& region, ::BlockPos const& pos, ::AABB const& testAABB) const;

    MCNAPI bool _shouldBePost(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const;

    MCNAPI bool _shouldUpdateConnectionStates(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI bool _tryAddToTickingQueue(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI void onPlaceBase(::BlockEvents::BlockPlaceEvent& eventData) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;

    MCNAPI void tryFixWallStates(::BlockSource& region, ::BlockPos const& pos, int updateFlags) const;

    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& POST_HEIGHT();

    MCNAPI static ::BaseGameVersion const& WALL_DOESNT_BREAK_FALLING_BLOCK_VERSION();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Block const& $getPlacementBlock(
        ::Actor const&    by,
        ::BlockPos const& pos,
        uchar             face,
        ::Vec3 const&     clickPos,
        int               itemValue
    ) const;

    MCNAPI void $onStructureBlockPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI void $onStructureNeighborBlockPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCNAPI ::AABB const& $getVisualShapeInWorld(
        ::Block const& block,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::AABB& bufferAABB
    ) const;

    MCNAPI ::AABB $getCollisionShape(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const;

    MCNAPI ::AABB const& $getOutline(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB&                    bufferValue
    ) const;

    MCNAPI bool $canConnect(::Block const& otherBlock, uchar, ::Block const&) const;

    MCNAPI bool
    $getLiquidClipVolume(::Block const& block, ::BlockSource& region, ::BlockPos const& pos, ::AABB& includeBox) const;

    MCNAPI bool $isWallBlock() const;

    MCNAPI bool $breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const;

    MCNAPI ::HitResult $clip(
        ::Block const&                                     block,
        ::BlockSource const&                               region,
        ::BlockPos const&                                  pos,
        ::Vec3 const&                                      A,
        ::Vec3 const&                                      B,
        ::ShapeType                                        shapeType,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const;

    MCNAPI ::Block const* $playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const;

    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
