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
    // vIndex: 83
    virtual void releaseUsing(::ItemStack& item, ::Player* player, int durationLeft) const /*override*/;

    // vIndex: 81
    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const
        /*override*/;

    // vIndex: 53
    virtual void appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const /*override*/;

    // vIndex: 55
    virtual int getEnchantSlot() const /*override*/;

    // vIndex: 56
    virtual int getEnchantValue() const /*override*/;

    // vIndex: 77
    virtual ::ItemStack& use(::ItemStack& instance, ::Player& player) const /*override*/;

    // vIndex: 20
    virtual bool isThrowable() const /*override*/;

    // vIndex: 85
    virtual void hurtActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const /*override*/;

    // vIndex: 35
    virtual short getMaxDamage() const /*override*/;

    // vIndex: 36
    virtual int getAttackDamage() const /*override*/;

    // vIndex: 47
    virtual bool canDestroyInCreative() const /*override*/;

    // vIndex: 0
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

    MCFOLD int $getEnchantSlot() const;

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
    MCNAPI static void** $vftable();
    // NOLINTEND
};
