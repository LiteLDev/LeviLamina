#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class Container;
class ItemStack;
class ItemStackBase;
class Player;
class Vec3;
// clang-format on

class ExperiencePotionItem : public ::Item {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isGlint(::ItemStackBase const& stack) const /*override*/;

    virtual ::ItemStack& use(::ItemStack& instance, ::Player& player, ::HandSlot handSlot) const /*override*/;

    virtual bool isThrowable() const /*override*/;

    virtual ::Actor* createProjectileActor(
        ::BlockSource&     region,
        ::ItemStack const& stack,
        ::Vec3 const&      pos,
        ::Vec3 const&      direction
    ) const /*override*/;

    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const
        /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isGlint(::ItemStackBase const& stack) const;

    MCNAPI ::ItemStack& $use(::ItemStack& instance, ::Player& player, ::HandSlot handSlot) const;

    MCNAPI bool $isThrowable() const;

    MCNAPI ::Actor* $createProjectileActor(
        ::BlockSource&     region,
        ::ItemStack const& stack,
        ::Vec3 const&      pos,
        ::Vec3 const&      direction
    ) const;

    MCNAPI bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
