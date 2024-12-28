#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemDescriptorCount.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class Item;
// clang-format on

class ItemStackDescriptor : public ::ItemDescriptorCount {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompoundTag>> mUserData;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemStackDescriptor& operator=(ItemStackDescriptor const&);
    ItemStackDescriptor(ItemStackDescriptor const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemStackDescriptor() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ItemStackDescriptor();

    MCAPI ItemStackDescriptor(::Item const& item, int auxValue, ushort stackSize, ::CompoundTag const* userData);

    MCAPI ::ItemStackDescriptor& operator=(::ItemStackDescriptor&& other);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::Item const& item, int auxValue, ushort stackSize, ::CompoundTag const* userData);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
