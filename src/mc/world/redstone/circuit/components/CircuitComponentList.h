#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseCircuitComponent;
class BlockPos;
// clang-format on

class CircuitComponentList {
public:
    // CircuitComponentList inner types declare
    // clang-format off
    class Item;
    // clang-format on

    // CircuitComponentList inner types define
    class Item {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::BaseCircuitComponent*> mComponent;
        ::ll::TypedStorage<4, 4, int>                     mDampening;
        ::ll::TypedStorage<4, 12, ::BlockPos>             mPos;
        ::ll::TypedStorage<1, 1, uchar>                   mDirection;
        ::ll::TypedStorage<1, 1, bool>                    mDirectlyPowered;
        ::ll::TypedStorage<4, 4, int>                     mData;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::CircuitComponentList::Item>> mComponents;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~CircuitComponentList();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
