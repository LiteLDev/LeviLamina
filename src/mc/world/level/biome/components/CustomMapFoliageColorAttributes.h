#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CustomMapFoliageColorAttributes {
public:
    // prevent constructor by default
    CustomMapFoliageColorAttributes& operator=(CustomMapFoliageColorAttributes const&);
    CustomMapFoliageColorAttributes(CustomMapFoliageColorAttributes const&);
    CustomMapFoliageColorAttributes();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CustomMapFoliageColorAttributes() = default;

    // NOLINTEND
};
