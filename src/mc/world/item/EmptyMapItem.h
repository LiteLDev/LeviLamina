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
    // virtual functions
    // NOLINTBEGIN
    virtual ::ItemStack& use(::ItemStack& item, ::Player& player) const /*override*/;

    virtual bool requiresInteract() const /*override*/;

    virtual ::std::string getInteractText(::Player const& player) const /*override*/;

    virtual ::std::string buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const*) const
        /*override*/;

    virtual ~EmptyMapItem() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void addPlayerMarker(::ItemStackBase& map);

    MCAPI static bool isLocatorMap(::ItemStackBase const& map);
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
    MCNAPI static void** $vftable();
    // NOLINTEND
};
