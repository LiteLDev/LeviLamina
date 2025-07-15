#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/BlockItem.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class InteractionResult;
class ItemStack;
class Vec3;
// clang-format on

class CoralFanBlockItem : public ::BlockItem {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 60
    virtual bool isValidAuxValue(int auxValue) const /*override*/;

    // vIndex: 33
    virtual int getLevelDataForAuxValue(int auxValue) const /*override*/;

    // vIndex: 120
    virtual ::InteractionResult
    _useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const
        /*override*/;

    // vIndex: 0
    virtual ~CoralFanBlockItem() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isValidAuxValue(int auxValue) const;

    MCFOLD int $getLevelDataForAuxValue(int auxValue) const;

    MCAPI ::InteractionResult
    $_useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
