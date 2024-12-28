#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StructureTelemetryClientData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnke26682;
    ::ll::UntypedStorage<4, 4> mUnk8bf69c;
    ::ll::UntypedStorage<4, 4> mUnk9c22a4;
    ::ll::UntypedStorage<4, 4> mUnk7921a0;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureTelemetryClientData& operator=(StructureTelemetryClientData const&);
    StructureTelemetryClientData(StructureTelemetryClientData const&);
    StructureTelemetryClientData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI uint getMirrorEditCount() const;

    MCAPI uint getOffsetEditCount() const;

    MCAPI uint getRotationEditCount() const;

    MCAPI uint getSizeEditCount() const;
    // NOLINTEND
};
