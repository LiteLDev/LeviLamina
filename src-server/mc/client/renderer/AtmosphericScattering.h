#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AtmosphericScattering {
public:
    // AtmosphericScattering inner types declare
    // clang-format off
    struct AtmosphericScatteringConfigSettings;
    // clang-format on

    // AtmosphericScattering inner types define
    struct AtmosphericScatteringConfigSettings {
    public:
        // AtmosphericScatteringConfigSettings inner types declare
        // clang-format off
        struct AtmosphericScatteringSettings;
        // clang-format on

        // AtmosphericScatteringConfigSettings inner types define
        struct AtmosphericScatteringSettings {
        public:
            // AtmosphericScatteringSettings inner types declare
            // clang-format off
            struct AtmosphericScatteringDescription;
            struct HorizonBlendKeyFrames;
            // clang-format on

            // AtmosphericScatteringSettings inner types define
            struct AtmosphericScatteringDescription {};

            struct HorizonBlendKeyFrames {};
        };
    };
};
