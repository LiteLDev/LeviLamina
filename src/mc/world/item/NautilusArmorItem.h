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
class Vec3;
// clang-format on

class NautilusArmorItem : public ::Item {
public:
    // NautilusArmorItem inner types define
    enum class Tier : int {
        None      = 0,
        Copper    = 1,
        Iron      = 2,
        Gold      = 3,
        Diamond   = 4,
        Netherite = 5,
        Count     = 6,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::NautilusArmorItem::Tier> mTier;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isBodyArmor() const /*override*/;

    virtual int getArmorValue() const /*override*/;

    virtual float getKnockbackResistanceValue() const /*override*/;

    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar) const
        /*override*/;

    virtual ~NautilusArmorItem() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCFOLD static bool _tryEquipNautilusArmor(::Actor* actor, ::ItemStack const& nautilusArmor);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $isBodyArmor() const;

    MCAPI int $getArmorValue() const;

    MCAPI float $getKnockbackResistanceValue() const;

    MCFOLD bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
