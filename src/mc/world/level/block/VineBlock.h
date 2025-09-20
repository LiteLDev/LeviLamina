#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockPos;
class BlockSource;
class Experiments;
class GetCollisionShapeInterface;
class IConstBlockSource;
class Vec3;
namespace BlockEvents { class BlockQueuedTickEvent; }
namespace BlockEvents { class BlockRandomTickEvent; }
// clang-format on

class VineBlock : public ::BlockType {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 10
    virtual ::AABB const& getVisualShapeInWorld(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB&                    bufferAABB
    ) const /*override*/;

    // vIndex: 5
    virtual ::AABB getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const /*override*/;

    // vIndex: 9
    virtual ::AABB const& getOutline(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB&                    bufferValue
    ) const /*override*/;

    // vIndex: 80
    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar face) const /*override*/;

    // vIndex: 87
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    // vIndex: 92
    virtual ::Block const&
    getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar face, ::Vec3 const& clickPos, int itemValue) const
        /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 138
    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 50
    virtual ::Block const& sanitizeFillBlock(::Block const& block) const /*override*/;

    // vIndex: 0
    virtual ~VineBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _canGrowDown(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI bool _canSideSpread(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI int _nextVineDirections(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI void growDown(::BlockSource& region, ::BlockPos const& pos, int spawnFacings) const;

    MCNAPI void growSideways(::BlockSource& region, ::BlockPos const& pos, int testDirection) const;

    MCNAPI void growUp(::BlockSource& region, ::BlockPos const& pos, int spawnFacings) const;

    MCNAPI void randomTick(::BlockEvents::BlockRandomTickEvent& eventData) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isAcceptableNeighbour(::Block const& block);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& VINE_ALL();

    MCNAPI static int const& VINE_EAST();

    MCNAPI static int const& VINE_NORTH();

    MCNAPI static int const& VINE_SOUTH();

    MCNAPI static int const& VINE_WEST();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::AABB const& $getVisualShapeInWorld(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB&                    bufferAABB
    ) const;

    MCNAPI ::AABB $getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const;

    MCNAPI ::AABB const& $getOutline(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB&                    bufferValue
    ) const;

    MCNAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar face) const;

    MCNAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCNAPI ::Block const& $getPlacementBlock(
        ::Actor const&    by,
        ::BlockPos const& pos,
        uchar             face,
        ::Vec3 const&     clickPos,
        int               itemValue
    ) const;

    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);

    MCNAPI bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI ::Block const& $sanitizeFillBlock(::Block const& block) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
