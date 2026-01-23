#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SkyboxConfig {

struct SkyboxConfigSettingsV0 {
public:
    // SkyboxConfigSettingsV0 inner types declare
    // clang-format off
    struct SkyboxParameters;
    // clang-format on

    // SkyboxConfigSettingsV0 inner types define
    struct SkyboxParameters {
    public:
        // SkyboxParameters inner types declare
        // clang-format off
        struct Description;
        struct Lighting;
        // clang-format on

        // SkyboxParameters inner types define
        struct Description {};

        struct Lighting {};
    };
};

} // namespace SkyboxConfig
