#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/CropBlock.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class BlockPos;
class IConstBlockSource;
class ItemInstance;
// clang-format on

class CarrotBlock : public ::CropBlock {
public:
    // prevent constructor by default
    CarrotBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ItemInstance const getBaseSeed() const /*override*/;

    virtual int getVariant(::Block const& block) const /*override*/;

    virtual ::AABB const&
    getOutline(::Block const& block, ::IConstBlockSource const& pos, ::BlockPos const& bufferValue, ::AABB&) const
        /*override*/;
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
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ItemInstance const $getBaseSeed() const;

    MCAPI int $getVariant(::Block const& block) const;

    MCAPI ::AABB const&
    $getOutline(::Block const& block, ::IConstBlockSource const& pos, ::BlockPos const& bufferValue, ::AABB&) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
