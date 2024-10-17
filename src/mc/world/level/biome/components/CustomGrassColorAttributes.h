#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CustomGrassColorAttributes {
public:
    // prevent constructor by default
    CustomGrassColorAttributes& operator=(CustomGrassColorAttributes const&);
    CustomGrassColorAttributes(CustomGrassColorAttributes const&);
    CustomGrassColorAttributes();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CustomGrassColorAttributes() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    // NOLINTEND
};
