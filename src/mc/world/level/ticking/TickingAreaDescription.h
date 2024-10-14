#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TickingAreaDescription {
public:
    // prevent constructor by default
    TickingAreaDescription& operator=(TickingAreaDescription const&);
    TickingAreaDescription(TickingAreaDescription const&);
    TickingAreaDescription();

public:
    // NOLINTBEGIN
    MCAPI std::string asString() const;

    MCAPI ~TickingAreaDescription();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
