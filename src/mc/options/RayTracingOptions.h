#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RayTracingOptions {
public:
    // prevent constructor by default
    RayTracingOptions& operator=(RayTracingOptions const&);
    RayTracingOptions(RayTracingOptions const&);
    RayTracingOptions();

public:
    // NOLINTBEGIN
    // symbol: ?PBR_TAG@RayTracingOptions@@2V?$basic_string_view@DU?$char_traits@D@std@@@std@@B
    MCAPI static std::string_view const PBR_TAG;

    // symbol: ?RAY_TRACING_TAG@RayTracingOptions@@2V?$basic_string_view@DU?$char_traits@D@std@@@std@@B
    MCAPI static std::string_view const RAY_TRACING_TAG;

    // NOLINTEND
};
