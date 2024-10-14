#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CustomHumidityAttributes {
public:
    // prevent constructor by default
    CustomHumidityAttributes& operator=(CustomHumidityAttributes const&);
    CustomHumidityAttributes(CustomHumidityAttributes const&);
    CustomHumidityAttributes();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CustomHumidityAttributes() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    // NOLINTEND
};
