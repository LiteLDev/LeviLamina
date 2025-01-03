#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/RedstoneLogicExecutionFlags.h"

// auto generated forward declare list
// clang-format off
class BaseCircuitComponent;
class BlockPos;
// clang-format on

struct ChunkCircuitComponentList {
public:
    // ChunkCircuitComponentList inner types declare
    // clang-format off
    struct Item;
    // clang-format on

    // ChunkCircuitComponentList inner types define
    struct Item {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::BaseCircuitComponent*>       mComponent;
        ::ll::TypedStorage<4, 12, ::BlockPos>                   mPos;
        ::ll::TypedStorage<1, 1, ::RedstoneLogicExecutionFlags> cachedExecutionFlags;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                              bShouldEvaluate;
    ::ll::TypedStorage<8, 24, ::std::vector<::ChunkCircuitComponentList::Item>> mComponents;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ChunkCircuitComponentList();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
