#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StructureTelemetryServerData {
public:
    // prevent constructor by default
    StructureTelemetryServerData& operator=(StructureTelemetryServerData const&);
    StructureTelemetryServerData(StructureTelemetryServerData const&);

public:
    // NOLINTBEGIN
    MCAPI StructureTelemetryServerData();

    MCAPI bool hasBeenActivatedByRedstone();

    MCAPI void setHasBeenActivedByRedstone();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    // NOLINTEND
};
