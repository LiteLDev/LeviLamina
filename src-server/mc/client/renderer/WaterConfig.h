#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WaterConfig {
public:
    // WaterConfig inner types declare
    // clang-format off
    struct WaterConfigSettingsV0;
    struct WaterConfigSettingsV1;
    struct WaterConfigSettingsV2;
    // clang-format on

    // WaterConfig inner types define
    struct WaterConfigSettingsV0 {
    public:
        // WaterConfigSettingsV0 inner types declare
        // clang-format off
        struct WaterSettings;
        // clang-format on

        // WaterConfigSettingsV0 inner types define
        struct WaterSettings {
        public:
            // WaterSettings inner types declare
            // clang-format off
            struct WaterDescription;
            struct PSY;
            struct Waves;
            // clang-format on

            // WaterSettings inner types define
            struct WaterDescription {};

            struct PSY {};

            struct Waves {};
        };
    };

    struct WaterConfigSettingsV1 {
    public:
        // WaterConfigSettingsV1 inner types declare
        // clang-format off
        struct WaterSurfaceParameters;
        struct WaterSettings;
        // clang-format on

        // WaterConfigSettingsV1 inner types define
        struct WaterSurfaceParameters {};

        struct WaterSettings {};
    };

    struct WaterConfigSettingsV2 {
    public:
        // WaterConfigSettingsV2 inner types declare
        // clang-format off
        struct WaterSettings;
        // clang-format on

        // WaterConfigSettingsV2 inner types define
        struct WaterSettings {};
    };
};
