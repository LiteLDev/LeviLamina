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
    ::ll::TypedStorage<4, 4, int> mDamage;
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
    // vIndex: 84
    virtual float getDestroySpeed(::ItemStackBase const& item, ::Block const& block) const /*override*/;

    // vIndex: 85
    virtual void hurtActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const /*override*/;

    // vIndex: 36
    virtual int getAttackDamage() const /*override*/;

    // vIndex: 38
    virtual bool isHandEquipped() const /*override*/;

    // vIndex: 77
    virtual ::ItemStack& use(::ItemStack& item, ::Player& player) const /*override*/;

    // vIndex: 32
    virtual bool canDestroySpecial(::Block const& block) const /*override*/;

    // vIndex: 54
    virtual bool isValidRepairItem(::ItemStackBase const&, ::ItemStackBase const& repairItem, ::BaseGameVersion const& baseGameVersion) const /*override*/;

    // vIndex: 55
    virtual int getEnchantSlot() const /*override*/;

    // vIndex: 56
    virtual int getEnchantValue() const /*override*/;

    // vIndex: 53
    virtual void appendFormattedHovertext(::ItemStackBase const& stack, ::Level& level, ::Bedrock::Safety::RedactableString& hovertext, bool const showCategory) const /*override*/;

    // vIndex: 47
    virtual bool canDestroyInCreative() const /*override*/;

    // vIndex: 0
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

    MCAPI bool $isValidRepairItem(::ItemStackBase const&, ::ItemStackBase const& repairItem, ::BaseGameVersion const& baseGameVersion) const;

    MCFOLD int $getEnchantSlot() const;

    MCAPI int $getEnchantValue() const;

    MCAPI void $appendFormattedHovertext(::ItemStackBase const& stack, ::Level& level, ::Bedrock::Safety::RedactableString& hovertext, bool const showCategory) const;

    MCFOLD bool $canDestroyInCreative() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
