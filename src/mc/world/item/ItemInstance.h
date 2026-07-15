#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemStackBase.h"

// auto generated forward declare list
// clang-format off
class Block;
class CompoundTag;
class Item;
// clang-format on

class ItemInstance : public ::ItemStackBase {
public:
    // prevent constructor by default
    ItemInstance& operator=(ItemInstance const&);
    ItemInstance();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void reinit(::Block const& block, int count) /*override*/;

    virtual void reinit(::Item const& item, int count, int auxValue) /*override*/;

    virtual void reinit(::std::string_view const name, int count, int auxValue) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ItemInstance(::ItemInstance const& rhs);

    MCAPI explicit ItemInstance(::ItemStackBase const& rhs);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ItemInstance fromTag(::CompoundTag const& tag);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::ItemInstance const& EMPTY_ITEM();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::ItemInstance const& rhs);

    MCFOLD void* $ctor(::ItemStackBase const& rhs);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $reinit(::Block const& block, int count);

    MCAPI void $reinit(::Item const& item, int count, int auxValue);

    MCAPI void $reinit(::std::string_view const name, int count, int auxValue);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
