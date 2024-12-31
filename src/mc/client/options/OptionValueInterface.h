#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/options/PointLightLODingQuality.h"
#include "mc/client/options/PointLightShadowQuality.h"
#include "mc/client/options/ReflectionsQuality.h"
#include "mc/client/options/ShadowQuality.h"
#include "mc/client/options/UpscalingQuality.h"
#include "mc/client/options/VRHUDPosition.h"
#include "mc/client/options/VolumetricFogQuality.h"

// auto generated forward declare list
// clang-format off
struct PointLightLODingConfiguration;
struct PointLightShadowConfiguration;
struct ReflectionConfiguration;
struct ResolutionConfiguration;
struct ShadowConfiguration;
struct VolumetricFogConfiguration;
// clang-format on

class OptionValueInterface {
public:
    // prevent constructor by default
    OptionValueInterface& operator=(OptionValueInterface const&);
    OptionValueInterface(OptionValueInterface const&);
    OptionValueInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OptionValueInterface() = default;

    // vIndex: 1
    virtual ::std::vector<int> const getRenderDistanceLevels(int&) const = 0;

    // vIndex: 2
    virtual ::std::vector<int> const getVRRenderDistanceLevels(int&) const = 0;

    // vIndex: 3
    virtual ::std::vector<int> const getRayTracingRenderDistanceLevels(int&) const = 0;

    // vIndex: 4
    virtual ::std::vector<int> const getDeferredRenderDistanceLevels(int&) const = 0;

    // vIndex: 5
    virtual bool getDefaultTexelAA() const = 0;

    // vIndex: 6
    virtual bool getDefaultVRTexelAA() const = 0;

    // vIndex: 7
    virtual int getDefaultMSAA() const = 0;

    // vIndex: 8
    virtual int getDefaultVRMSAA() const = 0;

    // vIndex: 9
    virtual ::VRHUDPosition getDefaultVRHUDPosition() const = 0;

    // vIndex: 10
    virtual ::std::vector<int> const getSupportedMSAAValues(bool) const = 0;

    // vIndex: 11
    virtual void setMSAAValue(int) const = 0;

    // vIndex: 12
    virtual void setTexelAA(bool const) const = 0;

    // vIndex: 13
    virtual void setShadowQuality(::ShadowQuality const) const = 0;

    // vIndex: 14
    virtual void setShadowConfiguration(::ShadowConfiguration const&) = 0;

    // vIndex: 15
    virtual void setPointLightShadowQuality(::PointLightShadowQuality const) const = 0;

    // vIndex: 16
    virtual void setPointLightShadowConfiguration(::PointLightShadowConfiguration const&) = 0;

    // vIndex: 17
    virtual void setVolumetricFogQuality(::VolumetricFogQuality const) const = 0;

    // vIndex: 18
    virtual void setVolumetricFogConfiguration(::VolumetricFogConfiguration const&) = 0;

    // vIndex: 19
    virtual void setPointLightLODingQuality(::PointLightLODingQuality const) = 0;

    // vIndex: 20
    virtual void setPointLightLODingConfiguration(::PointLightLODingConfiguration const&) = 0;

    // vIndex: 21
    virtual void setReflectionsQuality(::ReflectionsQuality const) const = 0;

    // vIndex: 22
    virtual void setReflectionConfiguration(::ReflectionConfiguration const&) = 0;

    // vIndex: 23
    virtual void setBloomMultiplier(float const) const = 0;

    // vIndex: 24
    virtual void setPlayerUIGamma(float const) const = 0;

    // vIndex: 25
    virtual void setBloomEnabledDefault(bool) = 0;

    // vIndex: 26
    virtual bool getBloomEnabledDefault() const = 0;

    // vIndex: 27
    virtual void setDeferredResolutionConfiguration(::ResolutionConfiguration const&) = 0;

    // vIndex: 28
    virtual void setDeferredUpscalingQuality(::UpscalingQuality const) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
