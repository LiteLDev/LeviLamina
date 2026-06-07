#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LightingGroup {
public:
    template <int T0, int T1, int T2>
    struct AmbientLightImpl {};

    struct Emissive {};

    template <int T0>
    struct KeyframedDirectionalLightImpl {};

    struct LightingDescription {};

    template <int T0, int T1, int T2>
    struct LightingImpl {
        struct LightingSettings {
            struct DirectionalLights {};
        };
    };

    template <int T0>
    struct OrbitalLights {};

    template <int T0, int T1, int T2>
    struct SkyIntensityImpl {};

    struct StaticDirectionalLight {};
};

MCNAPI bool
operator==(::LightingGroup::AmbientLightImpl<1, 26, 0> const&, ::LightingGroup::AmbientLightImpl<1, 26, 0> const&);

MCNAPI bool operator==(
    ::LightingGroup::KeyframedDirectionalLightImpl<1> const&,
    ::LightingGroup::KeyframedDirectionalLightImpl<1> const&
);

MCNAPI bool operator==(
    ::LightingGroup::KeyframedDirectionalLightImpl<0> const&,
    ::LightingGroup::KeyframedDirectionalLightImpl<0> const&
);
