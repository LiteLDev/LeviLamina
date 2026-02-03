#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class Container;
class ItemStack;
class ItemStackBase;
class Level;
class Mob;
class Player;
class Vec3;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class TridentItem : public ::Item {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void releaseUsing(::ItemStack& item, ::Player* player, int durationLeft) const /*override*/;

    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const
        /*override*/;

    virtual void appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const /*override*/;

    virtual int getEnchantSlot() const /*override*/;

    virtual int getEnchantValue() const /*override*/;

    virtual ::ItemStack& use(::ItemStack& instance, ::Player& player) const /*override*/;

    virtual bool isThrowable() const /*override*/;

    virtual void hurtActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const /*override*/;

    virtual short getMaxDamage() const /*override*/;

    virtual int getAttackDamage() const /*override*/;

    virtual bool canDestroyInCreative() const /*override*/;

    virtual ~TridentItem() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Actor* _setupProjectile(::Actor* trident, ::ItemStack item, bool creative) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int const& CHARGE_THRESHOLD_TIME();

    MCAPI static int const& THROW_THRESHOLD_TIME();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $releaseUsing(::ItemStack& item, ::Player* player, int durationLeft) const;

    MCAPI bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const;

    MCAPI void $appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const;

    MCAPI int $getEnchantSlot() const;

    MCFOLD int $getEnchantValue() const;

    MCAPI ::ItemStack& $use(::ItemStack& instance, ::Player& player) const;

    MCFOLD bool $isThrowable() const;

    MCFOLD void $hurtActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const;

    MCFOLD short $getMaxDamage() const;

    MCFOLD int $getAttackDamage() const;

    MCFOLD bool $canDestroyInCreative() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
