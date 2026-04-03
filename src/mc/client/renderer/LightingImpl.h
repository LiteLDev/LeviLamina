#pragma once

#include "mc/_HeaderOutputPredefine.h"

#include "mc/client/renderer/Emissive.h"
#include "mc/client/renderer/LightingDescription.h"
#include "mc/client/renderer/OrbitalLights.h"
#include "mc/client/renderer/SkyIntensityImpl.h"
#include "mc/client/renderer/StaticDirectionalLight.h"
#include "mc/deps/core/sem_ver/SemVersionConstant.h"

namespace LightingGroup {

enum ColorKeyFrameType : uint8_t {
    RGBA = 0,
    RGB  = 1,
};

template <unsigned short major, unsigned short minor, unsigned short patch>
struct LightingImplBase {
    static const SemVersionConstant VERSION;
    std::string                     mFormatVersion;
};

template <unsigned short major, unsigned short minor, unsigned short patch>
struct LightingImpl;

template <>
struct LightingImpl<1, 21, 40> : LightingImplBase<1, 21, 40> {
    struct LightingSettings {
        using AmbientLight = AmbientLightImpl<1, 21, 40>;
        LightingSettings();
        LightingDescription                              mDescription;
        OrbitalLights<static_cast<ColorKeyFrameType>(0)> mDirectionalLights;
        Emissive                                         mEmissive;
        AmbientLight                                     mAmbientLight;
        static void                                      bindType(cereal::ReflectionCtx& ctx);
    };
    LightingSettings mLightingSettings;
};

template <>
struct LightingImpl<1, 21, 60> : LightingImplBase<1, 21, 60> {
    struct LightingSettings {
        using AmbientLight = AmbientLightImpl<1, 21, 40>;
        LightingSettings();
        LightingDescription                              mDescription;
        OrbitalLights<static_cast<ColorKeyFrameType>(1)> mDirectionalLights;
        Emissive                                         mEmissive;
        AmbientLight                                     mAmbientLight;
        static void                                      bindType(cereal::ReflectionCtx& ctx);
    };
    LightingSettings mLightingSettings;
};

template <>
struct LightingImpl<1, 21, 70> : LightingImplBase<1, 21, 70> {
    struct LightingSettings {
        using AmbientLight = AmbientLightImpl<1, 21, 40>;
        using SkyIntensity = SkyIntensityImpl<1, 21, 70>;
        LightingSettings();
        LightingDescription                              mDescription;
        OrbitalLights<static_cast<ColorKeyFrameType>(1)> mDirectionalLights;
        Emissive                                         mEmissive;
        AmbientLight                                     mAmbientLight;
        SkyIntensity                                     mSkyLight;
        static void                                      bindType(cereal::ReflectionCtx& ctx);
    };
    LightingSettings mLightingSettings;
};

template <>
struct LightingImpl<1, 21, 80> : LightingImplBase<1, 21, 80> {
    struct LightingSettings {
        using AmbientLight = AmbientLightImpl<1, 21, 40>;
        using SkyIntensity = SkyIntensityImpl<1, 21, 70>;
        LightingSettings();
        struct DirectionalLights {
            OrbitalLights<static_cast<ColorKeyFrameType>(1)> mSunMoon;
            StaticDirectionalLight                           mEndChaos;
            static void                                      bindType(cereal::ReflectionCtx& ctx);
        };
        LightingDescription mDescription;
        DirectionalLights   mDirectionalLights;
        Emissive            mEmissive;
        AmbientLight        mAmbientLight;
        SkyIntensity        mSkyLight;
        static void         bindType(cereal::ReflectionCtx& ctx);
    };
    LightingSettings mLightingSettings;
};

template <>
struct LightingImpl<1, 26, 0> : LightingImplBase<1, 26, 0> {
    struct LightingSettings {
        using DirectionalLights = LightingImpl<1, 21, 80>::LightingSettings::DirectionalLights;
        using AmbientLight      = AmbientLightImpl<1, 26, 0>;
        using SkyIntensity      = SkyIntensityImpl<1, 26, 0>;
        LightingSettings();
        LightingDescription mDescription;
        DirectionalLights   mDirectionalLights;
        Emissive            mEmissive;
        AmbientLight        mAmbientLight;
        SkyIntensity        mSkyLight;
        static void         bindType(cereal::ReflectionCtx& ctx);
    };
    LightingSettings mLightingSettings;
    HashedString     getIdentifierName() const;
};

} // namespace LightingGroup
