#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WorldSaveAndExitStorageTelemetryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk38d9b0;
    ::ll::UntypedStorage<8, 8> mUnk1e059f;
    ::ll::UntypedStorage<8, 8> mUnkcce57d;
    ::ll::UntypedStorage<1, 1> mUnk6d8cdc;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldSaveAndExitStorageTelemetryData& operator=(WorldSaveAndExitStorageTelemetryData const&);
    WorldSaveAndExitStorageTelemetryData(WorldSaveAndExitStorageTelemetryData const&);
    WorldSaveAndExitStorageTelemetryData();
};
