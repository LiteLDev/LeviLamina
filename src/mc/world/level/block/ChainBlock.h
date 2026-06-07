#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/RotatedPillarBlock.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class Material;
// clang-format on

class ChainBlock : public ::RotatedPillarBlock {
public:
    // prevent constructor by default
    ChainBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::AABB const& getVisualShape(::Block const& block, ::AABB& bufferAABB) const /*override*/;

    virtual bool canProvideSupport(::Block const& block, uchar face, ::BlockSupportType type) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ChainBlock(::std::string const& nameId, int id, ::Material const& material);

    MCAPI void _shapeFromAlignment(::Block const& block, ::AABB& bufferAABB) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id, ::Material const& material);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::AABB const& $getVisualShape(::Block const& block, ::AABB& bufferAABB) const;

    MCAPI bool $canProvideSupport(::Block const& block, uchar face, ::BlockSupportType type) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
