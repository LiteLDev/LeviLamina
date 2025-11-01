#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemDescriptor.h"

struct ItemSpecificSpeed {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ItemDescriptor> mItem;
    ::ll::TypedStorage<4, 4, float> mBlockDestroySpeed;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemSpecificSpeed();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ItemSpecificSpeed(::ItemSpecificSpeed const&);

    MCFOLD ::ItemSpecificSpeed& operator=(::ItemSpecificSpeed const&);

    MCAPI ~ItemSpecificSpeed();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::ItemSpecificSpeed const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};
