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
    // symbol: ?getMirrorEditCount@StructureTelemetryClientData@@QEBAIXZ
    MCAPI uint getMirrorEditCount() const;

    // symbol: ?getOffsetEditCount@StructureTelemetryClientData@@QEBAIXZ
    MCAPI uint getOffsetEditCount() const;

    // symbol: ?getRotationEditCount@StructureTelemetryClientData@@QEBAIXZ
    MCAPI uint getRotationEditCount() const;

    // symbol: ?getSizeEditCount@StructureTelemetryClientData@@QEBAIXZ
    MCAPI uint getSizeEditCount() const;

    // NOLINTEND
};
