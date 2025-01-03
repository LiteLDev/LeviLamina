#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemStack;
class Mob;
// clang-format on

class CarrotOnAStickItem : public ::Item {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 38
    virtual bool isHandEquipped() const /*override*/;

    // vIndex: 50
    virtual bool requiresInteract() const /*override*/;

    // vIndex: 54
    virtual int getEnchantSlot() const /*override*/;

    // vIndex: 55
    virtual int getEnchantValue() const /*override*/;

    // vIndex: 82
    virtual void hurtActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const /*override*/;

    // vIndex: 0
    virtual ~CarrotOnAStickItem() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CarrotOnAStickItem(::std::string const& name, short id);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, short id);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isHandEquipped() const;

    MCAPI bool $requiresInteract() const;

    MCAPI int $getEnchantSlot() const;

    MCAPI int $getEnchantValue() const;

    MCAPI void $hurtActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
