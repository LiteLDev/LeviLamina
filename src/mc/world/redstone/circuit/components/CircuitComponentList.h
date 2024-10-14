#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CircuitComponentList {
public:
    // CircuitComponentList inner types declare
    // clang-format off
    class Item;
    // clang-format on

    // CircuitComponentList inner types define
    class Item {
    public:
        // prevent constructor by default
        Item& operator=(Item const&);
        Item(Item const&);
        Item();
    };

public:
    // prevent constructor by default
    CircuitComponentList& operator=(CircuitComponentList const&);
    CircuitComponentList(CircuitComponentList const&);
    CircuitComponentList();

public:
    // NOLINTBEGIN
    MCAPI bool removeSource(class BlockPos const&, class BaseCircuitComponent const*);

    MCAPI ~CircuitComponentList();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
