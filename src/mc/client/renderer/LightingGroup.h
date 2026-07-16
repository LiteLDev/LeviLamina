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
