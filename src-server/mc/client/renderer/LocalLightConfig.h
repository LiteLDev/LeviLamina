#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LocalLightConfig {
public:
    // LocalLightConfig inner types declare
    // clang-format off
    struct LocalLightConfigSettingsV0;
    struct LocalLightConfigSettingsV1;
    // clang-format on

    // LocalLightConfig inner types define
    struct LocalLightConfigSettingsV0 {
    public:
        // LocalLightConfigSettingsV0 inner types declare
        // clang-format off
        struct LocalLightSettings;
        // clang-format on

        // LocalLightConfigSettingsV0 inner types define
        struct LocalLightSettings {};
    };

    struct LocalLightConfigSettingsV1 {
    public:
        // LocalLightConfigSettingsV1 inner types declare
        // clang-format off
        struct BlockLightingData;
        // clang-format on

        // LocalLightConfigSettingsV1 inner types define
        struct BlockLightingData {};
    };
};
