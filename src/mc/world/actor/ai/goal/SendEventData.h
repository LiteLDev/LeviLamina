#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SendEventData {
public:
    // prevent constructor by default
    SendEventData();

public:
    // NOLINTBEGIN
    MCAPI SendEventData(struct SendEventData const&);

    MCAPI struct SendEventData& operator=(struct SendEventData const&);

    MCAPI ~SendEventData();

    // NOLINTEND
};
