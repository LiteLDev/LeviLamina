#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class RayTracingOptions {
public:
    // prevent constructor by default
    RayTracingOptions& operator=(RayTracingOptions const&);
    RayTracingOptions(RayTracingOptions const&);
    RayTracingOptions();

public:
    // NOLINTBEGIN
    // symbol:
    // ?getPackCapability@RayTracingOptions@@SA?AVPackCapability@@V?$NonOwnerPointer@VIAdvancedGraphicsOptions@@@Bedrock@@@Z
    MCAPI static class PackCapability getPackCapability(class Bedrock::NonOwnerPointer<class IAdvancedGraphicsOptions>);

    // symbol:
    // ?getPackDeferredCapability@RayTracingOptions@@SA?AVPackCapability@@V?$NonOwnerPointer@VIAdvancedGraphicsOptions@@@Bedrock@@@Z
    MCAPI static class PackCapability
        getPackDeferredCapability(class Bedrock::NonOwnerPointer<class IAdvancedGraphicsOptions>);

    // symbol: ?PBR_TAG@RayTracingOptions@@2V?$basic_string_view@DU?$char_traits@D@std@@@std@@B
    MCAPI static std::string_view const PBR_TAG;

    // symbol: ?RAY_TRACING_TAG@RayTracingOptions@@2V?$basic_string_view@DU?$char_traits@D@std@@@std@@B
    MCAPI static std::string_view const RAY_TRACING_TAG;

    // NOLINTEND
};
