#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ChemistryItem.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class Container;
class HashedString;
class ItemStack;
class Player;
class Vec3;
// clang-format on

class IceBombItem : public ::ChemistryItem {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ItemStack& use(::ItemStack& item, ::Player& player) const /*override*/;

    virtual bool isThrowable() const /*override*/;

    virtual ::Actor*
    createProjectileActor(::BlockSource& region, ::ItemStack const&, ::Vec3 const& pos, ::Vec3 const& direction) const
        /*override*/;

    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const
        /*override*/;

    virtual ::HashedString const& getCooldownCategory() const /*override*/;

    virtual int getCooldownDuration() const /*override*/;

    virtual ~IceBombItem() /*override*/ = default;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::HashedString const& COOLDOWN_CATEGORY();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ItemStack& $use(::ItemStack& item, ::Player& player) const;

    MCFOLD bool $isThrowable() const;

    MCAPI ::Actor*
    $createProjectileActor(::BlockSource& region, ::ItemStack const&, ::Vec3 const& pos, ::Vec3 const& direction) const;

    MCAPI bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const;

    MCAPI ::HashedString const& $getCooldownCategory() const;

    MCFOLD int $getCooldownDuration() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
