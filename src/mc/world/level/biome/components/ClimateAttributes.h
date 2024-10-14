#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ClimateAttributes {
public:
    // prevent constructor by default
    ClimateAttributes& operator=(ClimateAttributes const&);
    ClimateAttributes(ClimateAttributes const&);
    ClimateAttributes();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ClimateAttributes() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    // NOLINTEND
};
