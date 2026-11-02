#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/BlockPos.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class BaseCircuitComponent;
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
        ::BaseCircuitComponent* mComponent;
        int                     mDampening;
        ::BlockPos              mPos;
        uchar                   mDirection;
        bool                    mDirectlyPowered;
        int                     mData;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::std::vector<::CircuitComponentList::Item> mComponents;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~CircuitComponentList();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
