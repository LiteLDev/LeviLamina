#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LightingGroup {
public:
    // LightingGroup inner types declare
    // clang-format off
    template<int T0, int T1, int T2> struct AmbientLightImpl;
    struct Emissive;
    template<int T0> struct KeyframedDirectionalLightImpl;
    struct LightingDescription;
    template<int T0, int T1, int T2> struct LightingImpl;
    template<int T0> struct OrbitalLights;
    template<int T0, int T1, int T2> struct SkyIntensityImpl;
    struct StaticDirectionalLight;
    // clang-format on

    // LightingGroup inner types define
    enum class ColorKeyFrameType : uchar {};

    template <int T0, int T1, int T2>
    struct AmbientLightImpl {};

    struct Emissive {};

    template <int T0>
    struct KeyframedDirectionalLightImpl {};

    struct LightingDescription {};

    template <int T0, int T1, int T2>
    struct LightingImpl {};

    template <int T0>
    struct OrbitalLights {};

    template <int T0, int T1, int T2>
    struct SkyIntensityImpl {};

    struct StaticDirectionalLight {};
};

// free functions
// NOLINTBEGIN
MCNAPI_C bool operator==(
    ::LightingGroup::AmbientLightImpl<1, 21, 40> const& __P0,
    ::LightingGroup::AmbientLightImpl<1, 21, 40> const& __P1
);

MCNAPI_C bool operator==(
    ::LightingGroup::AmbientLightImpl<1, 26, 0> const& __P0,
    ::LightingGroup::AmbientLightImpl<1, 26, 0> const& __P1
);

MCNAPI_C bool operator==(
    ::LightingGroup::KeyframedDirectionalLightImpl<1> const& __P0,
    ::LightingGroup::KeyframedDirectionalLightImpl<1> const& __P1
);

MCNAPI_C bool operator==(
    ::LightingGroup::KeyframedDirectionalLightImpl<0> const& __P0,
    ::LightingGroup::KeyframedDirectionalLightImpl<0> const& __P1
);

MCNAPI_C bool operator==(::LightingGroup::OrbitalLights<1> const& __P0, ::LightingGroup::OrbitalLights<1> const& __P1);

MCNAPI_C bool operator==(::LightingGroup::OrbitalLights<0> const& __P0, ::LightingGroup::OrbitalLights<0> const& __P1);

MCNAPI_C bool operator==(
    ::LightingGroup::SkyIntensityImpl<1, 26, 0> const& __P0,
    ::LightingGroup::SkyIntensityImpl<1, 26, 0> const& __P1
);

MCNAPI_C bool
operator==(::LightingGroup::StaticDirectionalLight const& __P0, ::LightingGroup::StaticDirectionalLight const& __P1);
// NOLINTEND
