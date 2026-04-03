#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class GetCollisionShapeInterface;
class HitResult;
class Vec3;
// clang-format on

class InvisibleBlock : public ::BlockType {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::HitResult clip(
        ::Block const&,
        ::BlockSource const&,
        ::BlockPos const&,
        ::Vec3 const& A,
        ::Vec3 const& B,
        ::ShapeType,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const /*override*/;

    virtual ~InvisibleBlock() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::HitResult $clip(
        ::Block const&,
        ::BlockSource const&,
        ::BlockPos const&,
        ::Vec3 const& A,
        ::Vec3 const& B,
        ::ShapeType,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
