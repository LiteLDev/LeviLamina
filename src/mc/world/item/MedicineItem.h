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
    // vIndex: 87
    virtual ::std::string
    buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const /*override*/;

    // vIndex: 76
    virtual ::ItemStack& use(::ItemStack& item, ::Player& player) const /*override*/;

    // vIndex: 79
    virtual ::ItemUseMethod useTimeDepleted(::ItemStack& inoutInstance, ::Level* level, ::Player* player) const
        /*override*/;

    // vIndex: 60
    virtual bool isValidAuxValue(int auxValue) const /*override*/;

    // vIndex: 107
    virtual ::Item& setIconInfo(::std::string const& name, int index) /*override*/;

    // vIndex: 108
    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const& item, int, bool) const /*override*/;

    // vIndex: 0
    virtual ~MedicineItem() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MedicineItem(::std::string const& name, int id);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, int id);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string
    $buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const;

    MCAPI ::ItemStack& $use(::ItemStack& item, ::Player& player) const;

    MCAPI ::ItemUseMethod $useTimeDepleted(::ItemStack& inoutInstance, ::Level* level, ::Player* player) const;

    MCAPI bool $isValidAuxValue(int auxValue) const;

    MCAPI ::Item& $setIconInfo(::std::string const& name, int index);

    MCAPI ::ResolvedItemIconInfo $getIconInfo(::ItemStackBase const& item, int, bool) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
