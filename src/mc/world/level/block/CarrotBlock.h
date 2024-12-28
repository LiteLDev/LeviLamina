#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/CropBlock.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class BlockPos;
class BlockSource;
class IConstBlockSource;
class ItemInstance;
// clang-format on

class CarrotBlock : public ::CropBlock {
public:
    // prevent constructor by default
    CarrotBlock& operator=(CarrotBlock const&);
    CarrotBlock(CarrotBlock const&);
    CarrotBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 153
    virtual ::ItemInstance const getBaseSeed() const /*override*/;

    // vIndex: 118
    virtual int getVariant(::Block const& block) const /*override*/;

    // vIndex: 9
    virtual ::AABB const&
    getOutline(::Block const& block, ::IConstBlockSource const&, ::BlockPos const& pos, ::AABB& bufferValue) const
        /*override*/;

    // vIndex: 144
    virtual ::BlockRenderLayer getRenderLayer() const /*override*/;

    // vIndex: 143
    virtual ::BlockRenderLayer getRenderLayer(::Block const&, ::BlockSource&, ::BlockPos const&) const /*override*/;

    // vIndex: 0
    virtual ~CarrotBlock() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CarrotBlock(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ItemInstance const $getBaseSeed() const;

    MCAPI int $getVariant(::Block const& block) const;

    MCAPI ::AABB const&
    $getOutline(::Block const& block, ::IConstBlockSource const&, ::BlockPos const& pos, ::AABB& bufferValue) const;

    MCAPI ::BlockRenderLayer $getRenderLayer() const;

    MCAPI ::BlockRenderLayer $getRenderLayer(::Block const&, ::BlockSource&, ::BlockPos const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
