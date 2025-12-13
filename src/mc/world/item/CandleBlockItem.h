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

class CandleBlockItem : public ::BlockItem {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual int getLevelDataForAuxValue(int auxValue) const /*override*/;

    virtual ::InteractionResult
    _useOn(::ItemStack& instance, ::Actor& actor, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const
        /*override*/;

    virtual bool isCandle() const /*override*/;

    virtual ~CandleBlockItem() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD int $getLevelDataForAuxValue(int auxValue) const;

    MCAPI ::InteractionResult
    $_useOn(::ItemStack& instance, ::Actor& actor, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const;

    MCFOLD bool $isCandle() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
