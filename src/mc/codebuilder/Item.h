#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct Item {
public:
    // prevent constructor by default
    Item& operator=(Item const&);
    Item(Item const&);
    Item();

public:
    // NOLINTBEGIN
    MCAPI ~Item();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace CodeBuilder
