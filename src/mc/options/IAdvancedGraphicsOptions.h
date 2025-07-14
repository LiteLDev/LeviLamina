#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/rendering/LightingModels.h"
#include "mc/options/IAdvancedGraphicsHardwareOptions.h"

class IAdvancedGraphicsOptions : public ::IAdvancedGraphicsHardwareOptions {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 5
    virtual bool areRayTracingResourcesAvailable() const = 0;

    // vIndex: 6
    virtual bool isDeferredLightingModelAvailable() const = 0;

    // vIndex: 7
    virtual bool isRayTracingAvailable() const = 0;

    // vIndex: 8
    virtual bool areDeferredShadingAndResourcesAvailable() const = 0;

    // vIndex: 9
    virtual bool isVibrantVisualsAllowed() const = 0;

    // vIndex: 10
    virtual void setForceDisableVibrantVisuals(bool) = 0;

    // vIndex: 11
    virtual bool isPlatformDeferredPerformanceCompatible() const = 0;

    // vIndex: 12
    virtual bool canSwitchGraphicsModeInGame() const = 0;

    // vIndex: 13
    virtual ::dragon::rendering::LightingModels getLightingModel() const = 0;

    // vIndex: 14
    virtual void setLightingModel(::dragon::rendering::LightingModels const) = 0;

    // vIndex: 15
    virtual void setCanSwitchGraphicsModeInGame(bool) = 0;

    // vIndex: 0
    virtual ~IAdvancedGraphicsOptions() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
