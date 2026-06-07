#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ChemistryItem.h"
#include "mc/world/item/ItemColor.h"
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
    // prevent constructor by default
    ChemistryStickItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ItemStack& use(::ItemStack& item, ::Player& player) const /*override*/;

    virtual ::ItemUseMethod useTimeDepleted(::ItemStack& inoutInstance, ::Level* level, ::Player* player) const
        /*override*/;

    virtual bool uniqueAuxValues() const /*override*/;

    virtual bool inventoryTick(::ItemStack& item, ::Level& level, ::Actor& owner, int slot, bool selected) const
        /*override*/;

    virtual ::Item& setMaxDamage(int maxDamage) /*override*/;

    virtual void hurtActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const /*override*/;

    virtual bool isValidRepairItem(::ItemStackBase const&, ::ItemStackBase const&, ::BaseGameVersion const&) const
        /*override*/;

    virtual bool showsDurabilityInCreative() const /*override*/;

    virtual void fixupCommon(::ItemStackBase& stack) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ChemistryStickItem(::std::string const& name, short id);

    MCAPI ::std::string _getColorName(int data) const;

    MCAPI void _storeActivationTimestamp(::ItemStack& item, uint64 curTime, int desiredPercent) const;

    MCAPI bool _tick(::ItemStack& item, uint64 curTime) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ItemColor getColorType(int data);

    MCAPI static bool isActive(int data);

    MCAPI static bool isChemistryStick(::ItemStackBase const& item);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& ACTIVATION_TIMESTAMP_TAG();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, short id);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ItemStack& $use(::ItemStack& item, ::Player& player) const;

    MCAPI ::ItemUseMethod $useTimeDepleted(::ItemStack& inoutInstance, ::Level* level, ::Player* player) const;

    MCFOLD bool $uniqueAuxValues() const;

    MCAPI bool $inventoryTick(::ItemStack& item, ::Level& level, ::Actor& owner, int slot, bool selected) const;

    MCAPI ::Item& $setMaxDamage(int maxDamage);

    MCFOLD void $hurtActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const;

    MCFOLD bool $isValidRepairItem(::ItemStackBase const&, ::ItemStackBase const&, ::BaseGameVersion const&) const;

    MCFOLD bool $showsDurabilityInCreative() const;

    MCAPI void $fixupCommon(::ItemStackBase& stack) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
