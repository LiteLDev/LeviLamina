#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ComplexItem.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class ItemDescriptor;
class ItemStack;
class ItemStackBase;
class Player;
// clang-format on

class EmptyMapItem : public ::ComplexItem {
public:
    // prevent constructor by default
    EmptyMapItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ItemStack& use(::ItemStack& item, ::Player& player) const /*override*/;

    virtual bool requiresInteract() const /*override*/;

    virtual ::std::string getInteractText(::Player const& player) const /*override*/;

    virtual ::std::string buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const*) const
        /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EmptyMapItem(::std::string const& itemName, short itemId);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void addPlayerMarker(::ItemStackBase& map);

    MCAPI static bool isLocatorMap(::ItemStackBase const& map);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& itemName, short itemId);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ItemStack& $use(::ItemStack& item, ::Player& player) const;

    MCFOLD bool $requiresInteract() const;

    MCAPI ::std::string $getInteractText(::Player const& player) const;

    MCAPI ::std::string $buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const*) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
