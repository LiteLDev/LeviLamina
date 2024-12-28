#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/RotatedPillarBlock.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class BlockActor;
class ItemInstance;
class Material;
// clang-format on

class ChainBlock : public ::RotatedPillarBlock {
public:
    // prevent constructor by default
    ChainBlock& operator=(ChainBlock const&);
    ChainBlock(ChainBlock const&);
    ChainBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 25
    virtual bool canConnect(::Block const&, uchar, ::Block const&) const /*override*/;

    // vIndex: 90
    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const /*override*/;

    // vIndex: 11
    virtual ::AABB const& getVisualShape(::Block const& block, ::AABB& bufferAABB) const /*override*/;

    // vIndex: 23
    virtual bool canProvideSupport(::Block const& block, uchar face, ::BlockSupportType type) const /*override*/;

    // vIndex: 0
    virtual ~ChainBlock() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ChainBlock(::std::string const& nameId, int id, ::Material const& material);
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
    MCAPI bool $canConnect(::Block const&, uchar, ::Block const&) const;

    MCAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCAPI ::AABB const& $getVisualShape(::Block const& block, ::AABB& bufferAABB) const;

    MCAPI bool $canProvideSupport(::Block const& block, uchar face, ::BlockSupportType type) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
