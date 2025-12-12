#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/block/FoliageBlock.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class BlockPos;
class BlockSource;
class GetCollisionShapeInterface;
class IConstBlockSource;
// clang-format on

class WaterlilyBlock : public ::FoliageBlock {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool mayPlaceOn(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual ::AABB getCollisionShape(
        ::Block const&                                     block,
        ::IConstBlockSource const&                         region,
        ::BlockPos const&                                  pos,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const /*override*/;

    virtual bool isLavaBlocking() const /*override*/;

    virtual ~WaterlilyBlock() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $mayPlaceOn(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD ::AABB $getCollisionShape(
        ::Block const&                                     block,
        ::IConstBlockSource const&                         region,
        ::BlockPos const&                                  pos,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const;

    MCFOLD bool $isLavaBlocking() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
