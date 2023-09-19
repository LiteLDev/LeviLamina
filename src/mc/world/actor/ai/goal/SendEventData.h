#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SendEventData {
public:
    // prevent constructor by default
    SendEventData();

public:
    // NOLINTBEGIN
    // symbol: ??0SendEventData@@QEAA@AEBU0@@Z
    MCAPI SendEventData(struct SendEventData const&);

    // symbol: ??4SendEventData@@QEAAAEAU0@AEBU0@@Z
    MCAPI struct SendEventData& operator=(struct SendEventData const&);

    // symbol: ??1SendEventData@@QEAA@XZ
    MCAPI ~SendEventData();

    // NOLINTEND
};
