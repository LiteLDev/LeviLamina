#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CustomFoliageColorAttributes {
public:
    // prevent constructor by default
    CustomFoliageColorAttributes& operator=(CustomFoliageColorAttributes const&);
    CustomFoliageColorAttributes(CustomFoliageColorAttributes const&);
    CustomFoliageColorAttributes();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CustomFoliageColorAttributes() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    // NOLINTEND
};
