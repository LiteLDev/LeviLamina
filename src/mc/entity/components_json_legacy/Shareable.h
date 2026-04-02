#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemDescriptor.h"

struct Shareable {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ItemDescriptor> itemDescriptor;
    ::ll::TypedStorage<4, 4, int>               wantAmount;
    ::ll::TypedStorage<4, 4, int>               surplusAmount;
    ::ll::TypedStorage<4, 4, int>               maxAmount;
    ::ll::TypedStorage<4, 4, int>               pickupLimit;
    ::ll::TypedStorage<4, 4, int>               craftIntoItem;
    ::ll::TypedStorage<4, 4, int>               craftIntoItemAux;
    ::ll::TypedStorage<4, 4, int>               itemPriority;
    ::ll::TypedStorage<1, 1, bool>              admire;
    ::ll::TypedStorage<1, 1, bool>              barter;
    ::ll::TypedStorage<1, 1, bool>              storedInInventory;
    ::ll::TypedStorage<1, 1, bool>              consumeItem;
    ::ll::TypedStorage<1, 1, bool>              pickupOnly;
    ::ll::TypedStorage<1, 1, bool>              singularPickup;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void setCraftInto(::std::string const& name);

    MCAPI void setItem(::std::string const& name);

    MCAPI ~Shareable();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
