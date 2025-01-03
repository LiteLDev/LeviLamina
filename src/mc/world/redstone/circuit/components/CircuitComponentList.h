#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/BlockPos.h"

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
    MCAPI ~CircuitComponentList();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
