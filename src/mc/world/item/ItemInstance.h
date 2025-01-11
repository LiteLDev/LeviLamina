#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemStackBase.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockLegacy;
class CompoundTag;
class Item;
// clang-format on

class ItemInstance : public ::ItemStackBase {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void reinit(::BlockLegacy const& block, int count) /*override*/;

    // vIndex: 3
    virtual void reinit(::Item const& item, int count, int auxValue) /*override*/;

    // vIndex: 1
    virtual void reinit(::std::string_view const name, int count, int auxValue) /*override*/;

    // vIndex: 0
    virtual ~ItemInstance() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ItemInstance();

    MCAPI explicit ItemInstance(::ItemStackBase const& rhs);

    MCAPI ItemInstance(::ItemInstance const& rhs);

    MCAPI ItemInstance(::BlockLegacy const& block, int count = 1);

    MCAPI ItemInstance(::Block const& block, int count = 1, ::CompoundTag const* _userData = nullptr);

    MCAPI ItemInstance(::Item const& item, int count = 1, int auxValue = 0, ::CompoundTag const* _userData = nullptr);

    MCAPI
    ItemInstance(::std::string_view name, int count = 1, int auxValue = 0, ::CompoundTag const* _userData = nullptr);

    MCAPI ::ItemInstance clone() const;

    MCAPI ::ItemInstance& operator=(::ItemInstance const& rhs);
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
    MCAPI void* $ctor();

    MCAPI void* $ctor(::ItemStackBase const& rhs);

    MCAPI void* $ctor(::ItemInstance const& rhs);

    MCAPI void* $ctor(::BlockLegacy const& block, int count);

    MCAPI void* $ctor(::Block const& block, int count, ::CompoundTag const* _userData);

    MCAPI void* $ctor(::Item const& item, int count, int auxValue, ::CompoundTag const* _userData);

    MCAPI void* $ctor(::std::string_view name, int count, int auxValue, ::CompoundTag const* _userData);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $reinit(::BlockLegacy const& block, int count);

    MCAPI void $reinit(::Item const& item, int count, int auxValue);

    MCAPI void $reinit(::std::string_view const name, int count, int auxValue);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
