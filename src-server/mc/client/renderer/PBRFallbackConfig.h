#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PBRFallbackConfig {
public:
    // PBRFallbackConfig inner types declare
    // clang-format off
    struct PBRFallbackConfigSettings;
    // clang-format on

    // PBRFallbackConfig inner types define
    struct PBRFallbackConfigSettings {
    public:
        // PBRFallbackConfigSettings inner types declare
        // clang-format off
        struct PBRFallbackSettings;
        // clang-format on

        // PBRFallbackConfigSettings inner types define
        struct PBRFallbackSettings {
        public:
            // PBRFallbackSettings inner types declare
            // clang-format off
            struct PBRDataMER;
            struct PBRData;
            // clang-format on

            // PBRFallbackSettings inner types define
            struct PBRDataMER {};

            struct PBRData {};
        };
    };
};
