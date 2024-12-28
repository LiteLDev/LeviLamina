#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
        ::ll::UntypedStorage<8, 8>  mUnk70d17e;
        ::ll::UntypedStorage<4, 12> mUnkea06a3;
        ::ll::UntypedStorage<1, 1>  mUnk549a24;
        // NOLINTEND

    public:
        // prevent constructor by default
        Item& operator=(Item const&);
        Item(Item const&);
        Item();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkaf6a6f;
    ::ll::UntypedStorage<8, 24> mUnk27b3c9;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkCircuitComponentList& operator=(ChunkCircuitComponentList const&);
    ChunkCircuitComponentList(ChunkCircuitComponentList const&);
    ChunkCircuitComponentList();

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
