#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/FertilizerType.h"
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class Container;
class InteractionResult;
class ItemStack;
class ItemStackBase;
class RenderParams;
class Vec3;
// clang-format on

class FertilizerItem : public ::Item {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::FertilizerType> mType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar) const
        /*override*/;

    virtual bool isFertilizer() const /*override*/;

    virtual void executeEvent(::ItemStackBase& item, ::std::string const& name, ::RenderParams& params) const
        /*override*/;

    virtual ::InteractionResult
    _useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const
        /*override*/;

    virtual ~FertilizerItem() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar) const;

    MCFOLD bool $isFertilizer() const;

    MCAPI void $executeEvent(::ItemStackBase& item, ::std::string const& name, ::RenderParams& params) const;

    MCAPI ::InteractionResult
    $_useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const;


    // NOLINTEND
};
