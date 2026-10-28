#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WorldSaveAndExitPackTelemetryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkda8e73;
    ::ll::UntypedStorage<8, 32> mUnk9f4afd;
    ::ll::UntypedStorage<8, 32> mUnkea68ce;
    ::ll::UntypedStorage<1, 1>  mUnk7cdcb7;
    ::ll::UntypedStorage<1, 1>  mUnka2c5b1;
    ::ll::UntypedStorage<8, 8>  mUnkf9d3a8;
    ::ll::UntypedStorage<1, 1>  mUnk6a2feb;
    ::ll::UntypedStorage<1, 1>  mUnkeb2c98;
    ::ll::UntypedStorage<1, 1>  mUnka702ee;
    ::ll::UntypedStorage<1, 1>  mUnk6582b4;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldSaveAndExitPackTelemetryData& operator=(WorldSaveAndExitPackTelemetryData const&);
    WorldSaveAndExitPackTelemetryData(WorldSaveAndExitPackTelemetryData const&);
    WorldSaveAndExitPackTelemetryData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~WorldSaveAndExitPackTelemetryData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
