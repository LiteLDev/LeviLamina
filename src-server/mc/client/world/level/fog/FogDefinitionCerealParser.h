#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FogDefinitionCerealParser {
public:
    // FogDefinitionCerealParser inner types declare
    // clang-format off
    struct FogParametersSrcV0;
    // clang-format on

    // FogDefinitionCerealParser inner types define
    struct FogParametersSrcV0 {
    public:
        // FogParametersSrcV0 inner types declare
        // clang-format off
        struct FogSettings;
        // clang-format on

        // FogParametersSrcV0 inner types define
        struct FogSettings {
        public:
            // FogSettings inner types declare
            // clang-format off
            struct FogDescription;
            struct FogDistanceSetting;
            struct FogInitDistanceSetting;
            struct FogTransitionSetting;
            struct FogVolumetricDensitySetting;
            struct FogVolumetricDensityCollectionSetting;
            struct FogVolumetricMediaCoeffsSetting;
            struct FogVolumetricMediaCoeffsCollectionSetting;
            struct FogVolumetricHenyeyGreensteinGSetting;
            struct FogVolumetricHenyeyGreensteinGCollectionSetting;
            struct FogVolumetricCollectionSetting;
            struct FogWaterDistanceSetting;
            struct FogDistanceCollectionSetting;
            // clang-format on

            // FogSettings inner types define
            struct FogDescription {};

            struct FogDistanceSetting {
            public:
                // FogDistanceSetting inner types define
                enum class DistanceType : int {};
            };

            struct FogInitDistanceSetting {};

            struct FogTransitionSetting {};

            struct FogVolumetricDensitySetting {};

            struct FogVolumetricDensityCollectionSetting {};

            struct FogVolumetricMediaCoeffsSetting {};

            struct FogVolumetricMediaCoeffsCollectionSetting {};

            struct FogVolumetricHenyeyGreensteinGSetting {};

            struct FogVolumetricHenyeyGreensteinGCollectionSetting {};

            struct FogVolumetricCollectionSetting {};

            struct FogWaterDistanceSetting {};

            struct FogDistanceCollectionSetting {};
        };
    };
};
