#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framerenderer {

struct SceneLightingInformation {
public:
    // SceneLightingInformation inner types declare
    // clang-format off
    struct AmbientLight;
    struct DirectionalLight;
    struct PointLight;
    // clang-format on

    // SceneLightingInformation inner types define
    struct AmbientLight {};

    struct DirectionalLight {};

    struct PointLight {};
};

} // namespace dragon::framerenderer
