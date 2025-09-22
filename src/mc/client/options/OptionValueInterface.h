#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/options/CloudQuality.h"
#include "mc/client/options/PointLightLODingQuality.h"
#include "mc/client/options/PointLightShadowQuality.h"
#include "mc/client/options/ReflectionsQuality.h"
#include "mc/client/options/ShadowQuality.h"
#include "mc/client/options/TargetResolution.h"
#include "mc/client/options/UpscalingMode.h"
#include "mc/client/options/UpscalingQuality.h"
#include "mc/client/options/VolumetricFogQuality.h"

// auto generated forward declare list
// clang-format off
struct CloudConfiguration;
struct PointLightLODingConfiguration;
struct PointLightShadowConfiguration;
struct ReflectionConfiguration;
struct RenderDistanceConfiguration;
struct ShadowConfiguration;
struct UpscalingConfiguration;
struct VolumetricFogConfiguration;
// clang-format on

class OptionValueInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OptionValueInterface() = default;

    // vIndex: 1
    virtual ::std::vector<int> const getRenderDistanceLevels(int&) const = 0;

    // vIndex: 2
    virtual ::std::vector<int> const getRayTracingRenderDistanceLevels(int&) const = 0;

    // vIndex: 3
    virtual bool getDefaultTexelAA() const = 0;

    // vIndex: 4
    virtual int getDefaultMSAA() const = 0;

    // vIndex: 5
    virtual ::std::vector<int> const getSupportedMSAAValues(bool) const = 0;

    // vIndex: 6
    virtual void setMSAAValue(int) const = 0;

    // vIndex: 7
    virtual void setTexelAA(bool const) const = 0;

    // vIndex: 8
    virtual void setShadowQuality(::ShadowQuality const) const = 0;

    // vIndex: 9
    virtual void setShadowConfiguration(::ShadowConfiguration const&) = 0;

    // vIndex: 10
    virtual void setCloudQuality(::CloudQuality const) const = 0;

    // vIndex: 11
    virtual void setCloudConfiguration(::CloudConfiguration const&) = 0;

    // vIndex: 12
    virtual void setPointLightShadowQuality(::PointLightShadowQuality const) const = 0;

    // vIndex: 13
    virtual void setPointLightShadowConfiguration(::PointLightShadowConfiguration const&) = 0;

    // vIndex: 14
    virtual void setVolumetricFogQuality(::VolumetricFogQuality const) const = 0;

    // vIndex: 15
    virtual void setVolumetricFogConfiguration(::VolumetricFogConfiguration const&) = 0;

    // vIndex: 16
    virtual void setPointLightLODingQuality(::PointLightLODingQuality const) = 0;

    // vIndex: 17
    virtual void setPointLightLODingConfiguration(::PointLightLODingConfiguration const&) = 0;

    // vIndex: 18
    virtual void setReflectionsQuality(::ReflectionsQuality const) const = 0;

    // vIndex: 19
    virtual void setReflectionConfiguration(::ReflectionConfiguration const&) = 0;

    // vIndex: 20
    virtual void setBloomMultiplier(float const) const = 0;

    // vIndex: 21
    virtual void setPlayerUIGamma(float const) const = 0;

    // vIndex: 22
    virtual void setBloomEnabledDefault(bool) = 0;

    // vIndex: 23
    virtual bool getBloomEnabledDefault() const = 0;

    // vIndex: 24
    virtual void setDeferredUpscalingConfiguration(::UpscalingConfiguration const&) = 0;

    // vIndex: 25
    virtual void setDeferredUpscalingQuality(::UpscalingQuality const, ::TargetResolution) const = 0;

    // vIndex: 26
    virtual void setDeferredUpscalingMode(::UpscalingMode const) const = 0;

    // vIndex: 27
    virtual void setRenderDistanceConfiguration(::RenderDistanceConfiguration const&) = 0;

    // vIndex: 28
    virtual ::std::vector<int> const getDeferredRenderDistanceLevels() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
