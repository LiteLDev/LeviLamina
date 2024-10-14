#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct VanillaBiomeTypeAttributes {
public:
    // prevent constructor by default
    VanillaBiomeTypeAttributes& operator=(VanillaBiomeTypeAttributes const&);
    VanillaBiomeTypeAttributes(VanillaBiomeTypeAttributes const&);
    VanillaBiomeTypeAttributes();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VanillaBiomeTypeAttributes() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    // NOLINTEND
};
