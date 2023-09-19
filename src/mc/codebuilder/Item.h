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
    // symbol: ??1Item@CodeBuilder@@QEAA@XZ
    MCAPI ~Item();

    // NOLINTEND
};

}; // namespace CodeBuilder
