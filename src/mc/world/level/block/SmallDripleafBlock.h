#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/block/FoliageBlock.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockPos;
class BlockSource;
class BlockType;
class Experiments;
class GetCollisionShapeInterface;
class IConstBlockSource;
class Vec3;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class SmallDripleafBlock : public ::FoliageBlock {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 125
    virtual ::BlockType& init() /*override*/;

    // vIndex: 79
    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 81
    virtual bool mayPlaceOn(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 138
    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 5
    virtual ::AABB getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const /*override*/;

    // vIndex: 9
    virtual ::AABB const&
    getOutline(::Block const&, ::IConstBlockSource const&, ::BlockPos const& pos, ::AABB& bufferValue) const
        /*override*/;

    // vIndex: 74
    virtual bool
    onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, ::FertilizerType fType) const
        /*override*/;

    // vIndex: 76
    virtual bool canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const
        /*override*/;

    // vIndex: 87
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    // vIndex: 92
    virtual ::Block const&
    getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar face, ::Vec3 const& clickPos, int itemValue) const
        /*override*/;

    // vIndex: 147
    virtual void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const /*override*/;

    // vIndex: 30
    virtual bool isLavaBlocking() const /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~SmallDripleafBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _isViablePlacePos(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void placeUpperBlock(::BlockSource& region, ::BlockPos const& pos, int updateFlags);

    MCNAPI static bool
    tryPlaceSmallDripleaf(::BlockSource& region, ::BlockPos const& pos, int directionState, int updateFlags);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::BlockType& $init();

    MCNAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI bool $mayPlaceOn(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI ::AABB $getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const;

    MCNAPI ::AABB const&
    $getOutline(::Block const&, ::IConstBlockSource const&, ::BlockPos const& pos, ::AABB& bufferValue) const;

    MCNAPI bool
    $onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, ::FertilizerType fType) const;

    MCNAPI bool $canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const;

    MCNAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCNAPI ::Block const& $getPlacementBlock(
        ::Actor const&    by,
        ::BlockPos const& pos,
        uchar             face,
        ::Vec3 const&     clickPos,
        int               itemValue
    ) const;

    MCNAPI void $tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;

    MCNAPI bool $isLavaBlocking() const;

    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
