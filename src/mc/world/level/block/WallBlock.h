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
    virtual ::Block const&
    getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar face, ::Vec3 const& clickPos, int itemValue) const
        /*override*/;

    virtual void onStructureBlockPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    virtual ::AABB const&
    getVisualShapeInWorld(::Block const& block, ::IConstBlockSource const&, ::BlockPos const&, ::AABB& bufferAABB) const
        /*override*/;

    virtual ::AABB getCollisionShape(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const /*override*/;

    virtual ::AABB const& getOutline(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB&                    bufferValue
    ) const /*override*/;

    virtual bool canProvideSupport(::Block const&, uchar face, ::BlockSupportType type) const /*override*/;

    virtual bool canConnect(::Block const& otherBlock, uchar, ::Block const&) const /*override*/;

    virtual bool
    getLiquidClipVolume(::Block const& block, ::BlockSource& region, ::BlockPos const& pos, ::AABB& includeBox) const
        /*override*/;

    virtual bool isWallBlock() const /*override*/;

    virtual bool breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const /*override*/;

    virtual ::HitResult clip(
        ::Block const&                                     block,
        ::BlockSource const&                               region,
        ::BlockPos const&                                  pos,
        ::Vec3 const&                                      A,
        ::Vec3 const&                                      B,
        ::ShapeType                                        shapeType,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const /*override*/;

    virtual ::Block const* playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const
        /*override*/;

    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    virtual ~WallBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::WallConnectionType
    _desiredConnectionState(::BlockSource& region, ::BlockPos const& pos, uchar neighbor) const;

    MCAPI bool _isCovered(::BlockSource& region, ::BlockPos const& pos, ::AABB const& testAABB) const;

    MCAPI bool _shouldBePost(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const;

    MCAPI bool _tryAddToTickingQueue(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void onPlaceBase(::BlockEvents::BlockPlaceEvent& eventData) const;

    MCAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;

    MCAPI void tryFixWallStates(::BlockSource& region, ::BlockPos const& pos, int updateFlags) const;

    MCFOLD void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static float const& POST_HEIGHT();

    MCAPI_C static float const& POST_WIDTH();

    MCAPI static ::BaseGameVersion const& WALL_DOESNT_BREAK_FALLING_BLOCK_VERSION();

    MCAPI_C static float const& WALL_HEIGHT();

    MCAPI_C static float const& WALL_WIDTH();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Block const& $getPlacementBlock(
        ::Actor const&    by,
        ::BlockPos const& pos,
        uchar             face,
        ::Vec3 const&     clickPos,
        int               itemValue
    ) const;

    MCAPI void $onStructureBlockPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCAPI ::AABB const& $getVisualShapeInWorld(
        ::Block const& block,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::AABB& bufferAABB
    ) const;

    MCAPI ::AABB $getCollisionShape(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const;

    MCFOLD ::AABB const& $getOutline(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB&                    bufferValue
    ) const;

    MCFOLD bool $canProvideSupport(::Block const&, uchar face, ::BlockSupportType type) const;

    MCFOLD bool $canConnect(::Block const& otherBlock, uchar, ::Block const&) const;

    MCFOLD bool
    $getLiquidClipVolume(::Block const& block, ::BlockSource& region, ::BlockPos const& pos, ::AABB& includeBox) const;

    MCFOLD bool $isWallBlock() const;

    MCAPI bool $breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const;

    MCFOLD ::Block const* $playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
