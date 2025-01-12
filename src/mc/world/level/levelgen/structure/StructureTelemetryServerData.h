#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StructureTelemetryServerData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkbbae54;
    ::ll::UntypedStorage<1, 1>  mUnkdd889c;
    ::ll::UntypedStorage<4, 12> mUnk520fff;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureTelemetryServerData& operator=(StructureTelemetryServerData const&);
    StructureTelemetryServerData(StructureTelemetryServerData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StructureTelemetryServerData();

    MCFOLD bool hasBeenActivatedByRedstone();

    MCFOLD void setHasBeenActivedByRedstone();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
