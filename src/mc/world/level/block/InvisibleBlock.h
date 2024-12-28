#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockLegacy.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class GetCollisionShapeInterface;
class HitResult;
class Material;
class Vec3;
// clang-format on

class InvisibleBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    InvisibleBlock& operator=(InvisibleBlock const&);
    InvisibleBlock(InvisibleBlock const&);
    InvisibleBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual ::HitResult
    clip(::Block const&, ::BlockSource const&, ::BlockPos const&, ::Vec3 const& A, ::Vec3 const& B, ::ShapeType, ::optional_ref<::GetCollisionShapeInterface const>)
        const /*override*/;

    // vIndex: 0
    virtual ~InvisibleBlock() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI InvisibleBlock(::std::string const& nameId, int id, ::Material const& material);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id, ::Material const& material);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::HitResult
    $clip(::Block const&, ::BlockSource const&, ::BlockPos const&, ::Vec3 const& A, ::Vec3 const& B, ::ShapeType, ::optional_ref<::GetCollisionShapeInterface const>)
        const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
