#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class RayTracingOptions {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAYTRACINGOPTIONS
public:
    RayTracingOptions& operator=(RayTracingOptions const&) = delete;
    RayTracingOptions(RayTracingOptions const&)            = delete;
    RayTracingOptions()                                    = delete;
#endif

public:
    /**
     * @symbol ?PBR_TAG\@RayTracingOptions\@\@2V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@B
     */
    MCAPI static class std::basic_string_view<char, struct std::char_traits<char>> const PBR_TAG;
    /**
     * @symbol ?RAY_TRACING_TAG\@RayTracingOptions\@\@2V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@B
     */
    MCAPI static class std::basic_string_view<char, struct std::char_traits<char>> const RAY_TRACING_TAG;
    /**
     * @symbol
     * ?getPackCapability\@RayTracingOptions\@\@SA?AVPackCapability\@\@V?$NonOwnerPointer\@VIAdvancedGraphicsOptions\@\@\@Bedrock\@\@\@Z
     */
    MCAPI static class PackCapability getPackCapability(class Bedrock::NonOwnerPointer<class IAdvancedGraphicsOptions>);
    /**
     * @symbol
     * ?getPackDeferredCapability\@RayTracingOptions\@\@SA?AVPackCapability\@\@V?$NonOwnerPointer\@VIAdvancedGraphicsOptions\@\@\@Bedrock\@\@\@Z
     */
    MCAPI static class PackCapability
        getPackDeferredCapability(class Bedrock::NonOwnerPointer<class IAdvancedGraphicsOptions>);
};
