#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

struct LightProbeManager {
public:
    // LightProbeManager inner types declare
    // clang-format off
    struct EnvironmentCaptureJobDetails;
    struct GenerateCubmapMipsJobDetails;
    struct LightProbe;
    struct ProbeData;
    struct SpecularConvolutionCallback;
    struct SpecularConvolutionJobDetails;
    struct SwapCallback;
    struct TextureCircularBuffer;
    // clang-format on

    // LightProbeManager inner types define
    struct EnvironmentCaptureJobDetails {};

    struct GenerateCubmapMipsJobDetails {};

    struct LightProbe {};

    struct ProbeData {};

    struct SpecularConvolutionCallback {};

    struct SpecularConvolutionJobDetails {};

    struct SwapCallback {};

    struct TextureCircularBuffer {};
};

} // namespace mce::framebuilder
