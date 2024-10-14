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
    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static std::string_view const& PBR_TAG();

    MCAPI static std::string_view const& RAY_TRACING_TAG();

    // NOLINTEND
};
