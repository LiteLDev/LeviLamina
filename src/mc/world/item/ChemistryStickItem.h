#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ChemistryItem.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseGameVersion;
class Item;
class ItemStack;
class ItemStackBase;
class Level;
class Mob;
class Player;
// clang-format on

class ChemistryStickItem : public ::ChemistryItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mMaxActiveTime;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ItemStack& use(::ItemStack& item, ::Player& player, ::HandSlot handSlot) const /*override*/;

    virtual ::ItemUseMethod useTimeDepleted(::ItemStack& inoutInstance, ::Level* level, ::Player* player) const
        /*override*/;

    virtual bool uniqueAuxValues() const /*override*/;

    virtual bool inventoryTick(::ItemStack& item, ::Level& level, ::Actor& owner, int slot, bool selected) const
        /*override*/;

    virtual ::Item& setMaxDamage(int maxDamage) /*override*/;

    virtual void hurtActor(::ItemStack& instance, ::Actor& actor, ::Mob& attacker) const /*override*/;

    virtual bool isValidRepairItem(
        ::ItemStackBase const&   source,
        ::ItemStackBase const&   repairItem,
        ::BaseGameVersion const& baseGameVersion
    ) const /*override*/;

    virtual bool showsDurabilityInCreative() const /*override*/;

    virtual void fixupCommon(::ItemStackBase& stack) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _storeActivationTimestamp(::ItemStack& item, uint64 curTime, int desiredPercent) const;

    MCNAPI bool _tick(::ItemStack& item, uint64 curTime) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isChemistryStick(::ItemStackBase const& item);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& ACTIVATION_TIMESTAMP_TAG();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ItemStack& $use(::ItemStack& item, ::Player& player, ::HandSlot handSlot) const;

    MCNAPI ::ItemUseMethod $useTimeDepleted(::ItemStack& inoutInstance, ::Level* level, ::Player* player) const;

    MCNAPI bool $uniqueAuxValues() const;

    MCNAPI bool $inventoryTick(::ItemStack& item, ::Level& level, ::Actor& owner, int slot, bool selected) const;

    MCNAPI ::Item& $setMaxDamage(int maxDamage);

    MCNAPI void $hurtActor(::ItemStack& instance, ::Actor& actor, ::Mob& attacker) const;

    MCNAPI bool $isValidRepairItem(
        ::ItemStackBase const&   source,
        ::ItemStackBase const&   repairItem,
        ::BaseGameVersion const& baseGameVersion
    ) const;

    MCNAPI bool $showsDurabilityInCreative() const;

    MCNAPI void $fixupCommon(::ItemStackBase& stack) const;


    // NOLINTEND
};
