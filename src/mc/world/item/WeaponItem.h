#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseGameVersion;
class Block;
class ItemStack;
class ItemStackBase;
class Level;
class Mob;
class Player;
struct ItemTier;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class WeaponItem : public ::Item {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>               mDamage;
    ::ll::TypedStorage<8, 8, ::ItemTier const&> mTier;
    // NOLINTEND

public:
    // prevent constructor by default
    WeaponItem& operator=(WeaponItem const&);
    WeaponItem(WeaponItem const&);
    WeaponItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual float getDestroySpeed(::ItemStackBase const& item, ::Block const& block) const /*override*/;

    virtual void hurtActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const /*override*/;

    virtual int getAttackDamage() const /*override*/;

    virtual bool isHandEquipped() const /*override*/;

    virtual ::ItemStack& use(::ItemStack& item, ::Player& player) const /*override*/;

    virtual bool canDestroySpecial(::Block const& block) const /*override*/;

    virtual bool isValidRepairItem(
        ::ItemStackBase const&,
        ::ItemStackBase const&   repairItem,
        ::BaseGameVersion const& baseGameVersion
    ) const /*override*/;

    virtual int getEnchantSlot() const /*override*/;

    virtual int getEnchantValue() const /*override*/;

    virtual void appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const /*override*/;

    virtual bool canDestroyInCreative() const /*override*/;

    virtual ~WeaponItem() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI float $getDestroySpeed(::ItemStackBase const& item, ::Block const& block) const;

    MCFOLD void $hurtActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const;

    MCFOLD int $getAttackDamage() const;

    MCFOLD bool $isHandEquipped() const;

    MCFOLD ::ItemStack& $use(::ItemStack& item, ::Player& player) const;

    MCAPI bool $canDestroySpecial(::Block const& block) const;

    MCAPI bool $isValidRepairItem(
        ::ItemStackBase const&,
        ::ItemStackBase const&   repairItem,
        ::BaseGameVersion const& baseGameVersion
    ) const;

    MCFOLD int $getEnchantSlot() const;

    MCAPI int $getEnchantValue() const;

    MCAPI void $appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const;

    MCFOLD bool $canDestroyInCreative() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
