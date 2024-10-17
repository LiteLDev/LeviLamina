#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents::Actions {

struct PlaceBlock {
public:
    // prevent constructor by default
    PlaceBlock& operator=(PlaceBlock const&);
    PlaceBlock(PlaceBlock const&);
    PlaceBlock();

public:
    // NOLINTBEGIN
    MCAPI ~PlaceBlock();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace AgentComponents::Actions
