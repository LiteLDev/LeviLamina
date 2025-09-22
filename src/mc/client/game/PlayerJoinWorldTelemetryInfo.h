#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerJoinWorldTelemetryInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkc0f814;
    ::ll::UntypedStorage<4, 4>  mUnk7153f1;
    ::ll::UntypedStorage<8, 32> mUnk89fc92;
    ::ll::UntypedStorage<4, 4>  mUnkba9fee;
    ::ll::UntypedStorage<1, 1>  mUnkf75752;
    ::ll::UntypedStorage<1, 1>  mUnk42ae15;
    ::ll::UntypedStorage<1, 1>  mUnkde8327;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerJoinWorldTelemetryInfo& operator=(PlayerJoinWorldTelemetryInfo const&);
    PlayerJoinWorldTelemetryInfo(PlayerJoinWorldTelemetryInfo const&);
    PlayerJoinWorldTelemetryInfo();
};
