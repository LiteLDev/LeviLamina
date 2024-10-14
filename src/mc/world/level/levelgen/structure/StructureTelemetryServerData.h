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
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
