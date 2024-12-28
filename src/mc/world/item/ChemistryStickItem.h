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
    ::ll::UntypedStorage<4, 4> mUnk1ceb63;
    // NOLINTEND

public:
    // prevent constructor by default
    ChemistryStickItem& operator=(ChemistryStickItem const&);
    ChemistryStickItem(ChemistryStickItem const&);
    ChemistryStickItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 76
    virtual ::ItemStack& use(::ItemStack& item, ::Player& player) const /*override*/;

    // vIndex: 79
    virtual ::ItemUseMethod useTimeDepleted(::ItemStack& inoutInstance, ::Level* level, ::Player* player) const
        /*override*/;

    // vIndex: 63
    virtual bool uniqueAuxValues() const /*override*/;

    // vIndex: 92
    virtual bool inventoryTick(::ItemStack& item, ::Level& level, ::Actor& owner, int slot, bool selected) const
        /*override*/;

    // vIndex: 25
    virtual ::Item& setMaxDamage(int maxDamage) /*override*/;

    // vIndex: 82
    virtual void hurtActor(::ItemStack& instance, ::Actor& actor, ::Mob& attacker) const /*override*/;

    // vIndex: 53
    virtual bool isValidRepairItem(
        ::ItemStackBase const&   source,
        ::ItemStackBase const&   repairItem,
        ::BaseGameVersion const& baseGameVersion
    ) const /*override*/;

    // vIndex: 44
    virtual bool showsDurabilityInCreative() const /*override*/;

    // vIndex: 97
    virtual void fixupCommon(::ItemStackBase& stack) const /*override*/;

    // vIndex: 0
    virtual ~ChemistryStickItem() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ChemistryStickItem(::std::string const& name, short id);

    MCAPI ::std::string _getColorName(int data) const;

    MCAPI void _storeActivationTimestamp(::ItemStack& item, uint64 curTime, int desiredPercent) const;
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

    MCAPI static int const& ACTIVE_BIT();

    MCAPI static int const& COLOR_BITS();

    MCAPI static int const& COLOR_MASK();

    MCAPI static int const& DAMAGE_BITS();

    MCAPI static int const& DAMAGE_MASK();

    MCAPI static int const& DAMAGE_START_BIT();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, short id);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ItemStack& $use(::ItemStack& item, ::Player& player) const;

    MCAPI ::ItemUseMethod $useTimeDepleted(::ItemStack& inoutInstance, ::Level* level, ::Player* player) const;

    MCAPI bool $uniqueAuxValues() const;

    MCAPI bool $inventoryTick(::ItemStack& item, ::Level& level, ::Actor& owner, int slot, bool selected) const;

    MCAPI ::Item& $setMaxDamage(int maxDamage);

    MCAPI void $hurtActor(::ItemStack& instance, ::Actor& actor, ::Mob& attacker) const;

    MCAPI bool $isValidRepairItem(
        ::ItemStackBase const&   source,
        ::ItemStackBase const&   repairItem,
        ::BaseGameVersion const& baseGameVersion
    ) const;

    MCAPI bool $showsDurabilityInCreative() const;

    MCAPI void $fixupCommon(::ItemStackBase& stack) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
