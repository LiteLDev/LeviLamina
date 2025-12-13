#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ChemistryItem.h"
#include "mc/world/item/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class Item;
class ItemDescriptor;
class ItemStack;
class ItemStackBase;
class Level;
class Player;
struct ResolvedItemIconInfo;
// clang-format on

class MedicineItem : public ::ChemistryItem {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string
    buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const /*override*/;

    virtual ::ItemStack& use(::ItemStack& item, ::Player& player) const /*override*/;

    virtual ::ItemUseMethod useTimeDepleted(::ItemStack& inoutInstance, ::Level* level, ::Player* player) const
        /*override*/;

    virtual bool isValidAuxValue(int auxValue) const /*override*/;

    virtual ::Item& setIconInfo(::std::string const& name, int index) /*override*/;

    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const& item, int, bool) const /*override*/;

    virtual ~MedicineItem() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI_C static bool canPlayerDrink(::ItemStack const& item, ::Player const& player);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string
    $buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const;

    MCAPI ::ItemStack& $use(::ItemStack& item, ::Player& player) const;

#ifdef LL_PLAT_S
    MCAPI ::ItemUseMethod $useTimeDepleted(::ItemStack& inoutInstance, ::Level* level, ::Player* player) const;
#endif

    MCAPI bool $isValidAuxValue(int auxValue) const;

    MCFOLD ::Item& $setIconInfo(::std::string const& name, int index);

    MCFOLD ::ResolvedItemIconInfo $getIconInfo(::ItemStackBase const& item, int, bool) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
