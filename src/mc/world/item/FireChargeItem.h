#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
class Vec3;
// clang-format on

class FireChargeItem : public ::Item {
public:
    // prevent constructor by default
    FireChargeItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Actor*
    createProjectileActor(::BlockSource& region, ::ItemStack const& pos, ::Vec3 const& direction, ::Vec3 const&) const
        /*override*/;

    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const
        /*override*/;

    virtual bool isDestructive(int) const /*override*/;

    virtual ::InteractionResult
    _useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const
        /*override*/;

    virtual bool _calculatePlacePos(::ItemStackBase& actor, ::Actor& face, uchar& pos, ::BlockPos&) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FireChargeItem(::std::string const& name, int id);

    MCAPI bool _tryLightPortal(::Actor& actor, ::BlockPos actionPos) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, int id);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Actor*
    $createProjectileActor(::BlockSource& region, ::ItemStack const& pos, ::Vec3 const& direction, ::Vec3 const&) const;

    MCAPI bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const;

    MCFOLD bool $isDestructive(int) const;

    MCAPI ::InteractionResult
    $_useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const;

    MCAPI bool $_calculatePlacePos(::ItemStackBase& actor, ::Actor& face, uchar& pos, ::BlockPos&) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
