#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemInstance.h"

class ItemGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::ItemInstance>     mItemTemplate;
    ::ll::TypedStorage<4, 8, ::std::optional<int>> mStackSize;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ItemGroup(::ItemInstance const& itemInstance);

    MCAPI_C ::ItemInstance getItemInstanceCopy() const;

    MCAPI ~ItemGroup();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ItemInstance const& itemInstance);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
