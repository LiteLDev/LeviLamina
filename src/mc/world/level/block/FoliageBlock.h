#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class BlockPos;
class BlockSource;
class Experiments;
class GetCollisionShapeInterface;
class IConstBlockSource;
class Vec3;
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class FoliageBlock : public ::BlockType {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 87
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    // vIndex: 147
    virtual void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;

    // vIndex: 138
    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 5
    virtual ::AABB getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 81
    virtual bool mayPlaceOn(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 148
    virtual void checkAlive(::BlockSource& region, ::BlockPos const& pos) const;

    // vIndex: 149
    virtual ::Block const& setGrowth(
        ::BlockSource&    region,
        ::BlockPos const& pos,
        ::Block const&    baseBlock,
        ushort            newGrowth,
        int               updateFlags
    ) const;

    // vIndex: 0
    virtual ~FoliageBlock() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool growCrops(::BlockSource& region, ::BlockPos const& pos, ::FertilizerType fType) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Vec3 const& BUSH_VISUAL_SHAPE_MAX();

    MCNAPI static ::Vec3 const& BUSH_VISUAL_SHAPE_MIN();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCNAPI void $tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;

    MCNAPI bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI ::AABB $getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const;

    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);

    MCNAPI bool $mayPlaceOn(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI void $checkAlive(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI ::Block const& $setGrowth(
        ::BlockSource&    region,
        ::BlockPos const& pos,
        ::Block const&    baseBlock,
        ushort            newGrowth,
        int               updateFlags
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
