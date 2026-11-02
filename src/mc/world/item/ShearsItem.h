#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class Container;
class InteractionResult;
class ItemStack;
class ItemStackBase;
class Level;
class Mob;
class Vec3;
// clang-format on

class ShearsItem : public ::Item {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void hurtActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const /*override*/;

    virtual bool canDestroySpecial(::Block const& block) const /*override*/;

    virtual float getDestroySpeed(::ItemStackBase const& item, ::Block const& block) const /*override*/;

    virtual int getEnchantSlot() const /*override*/;

    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar) const
        /*override*/;

    virtual ::InteractionResult _useOn(
        ::ItemStack&  instance,
        ::Actor&      entity,
        ::BlockPos    pos,
        uchar         face,
        ::HandSlot    handSlot,
        ::Vec3 const& clickPos
    ) const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void onShearsUsed(
        ::BlockSource&                         region,
        ::Level&                               level,
        ::Actor*                               owner,
        ::ItemStack&                           shears,
        ::BlockPos const&                      pos,
        ::SharedTypes::Legacy::LevelSoundEvent levelSoundEvent
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $hurtActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const;

    MCNAPI bool $canDestroySpecial(::Block const& block) const;

    MCNAPI float $getDestroySpeed(::ItemStackBase const& item, ::Block const& block) const;

    MCNAPI int $getEnchantSlot() const;

    MCAPI bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar) const;

    MCNAPI ::InteractionResult $_useOn(
        ::ItemStack&  instance,
        ::Actor&      entity,
        ::BlockPos    pos,
        uchar         face,
        ::HandSlot    handSlot,
        ::Vec3 const& clickPos
    ) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
