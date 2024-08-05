#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GatheringServerInfo {
public:
    // prevent constructor by default
    GatheringServerInfo& operator=(GatheringServerInfo const&);
    GatheringServerInfo(GatheringServerInfo const&);
    GatheringServerInfo();

public:
    // NOLINTBEGIN
    MCAPI ~GatheringServerInfo();

    // NOLINTEND
};
