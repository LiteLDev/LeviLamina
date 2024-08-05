#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StructureTelemetryClientData {
public:
    // prevent constructor by default
    StructureTelemetryClientData& operator=(StructureTelemetryClientData const&);
    StructureTelemetryClientData(StructureTelemetryClientData const&);
    StructureTelemetryClientData();

public:
    // NOLINTBEGIN
    MCAPI uint getMirrorEditCount() const;

    MCAPI uint getOffsetEditCount() const;

    MCAPI uint getRotationEditCount() const;

    MCAPI uint getSizeEditCount() const;

    // NOLINTEND
};
