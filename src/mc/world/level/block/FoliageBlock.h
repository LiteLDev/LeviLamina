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
class GetCollisionShapeInterface;
class IConstBlockSource;
class Material;
class Vec3;
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class FoliageBlock : public ::BlockType {
public:
    // prevent constructor by default
    FoliageBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    virtual void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;

    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual ::AABB getCollisionShape(
        ::Block const&                                     block,
        ::IConstBlockSource const&                         region,
        ::BlockPos const&                                  pos,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const /*override*/;

    virtual bool mayPlaceOn(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual void checkAlive(::BlockSource& region, ::BlockPos const& pos) const;

    virtual ::Block const& setGrowth(
        ::BlockSource&    region,
        ::BlockPos const& pos,
        ::Block const&    baseBlock,
        ushort            newGrowth,
        int               updateFlags
    ) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FoliageBlock(::std::string const& nameId, int id, ::Material const& material);

    MCAPI bool growCrops(::BlockSource& region, ::BlockPos const& pos, ::FertilizerType fType) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Vec3 const& BUSH_VISUAL_SHAPE_MAX();

    MCAPI static ::Vec3 const& BUSH_VISUAL_SHAPE_MIN();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id, ::Material const& material);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCAPI void $tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;

    MCFOLD bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD ::AABB $getCollisionShape(
        ::Block const&                                     block,
        ::IConstBlockSource const&                         region,
        ::BlockPos const&                                  pos,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const;

    MCAPI bool $mayPlaceOn(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD void $checkAlive(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI ::Block const& $setGrowth(
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
    MCAPI static void** $vftable();
    // NOLINTEND
};
