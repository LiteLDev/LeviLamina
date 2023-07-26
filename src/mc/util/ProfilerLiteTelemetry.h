#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ProfilerLiteTelemetry {

public:
    // prevent constructor by default
    ProfilerLiteTelemetry& operator=(ProfilerLiteTelemetry const&) = delete;
    ProfilerLiteTelemetry(ProfilerLiteTelemetry const&)            = delete;
    ProfilerLiteTelemetry()                                        = delete;
};
