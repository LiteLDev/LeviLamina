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
    virtual bool arePBRResourcesAvailable() const = 0;

    // vIndex: 7
    virtual bool isRayTracingAvailable() const = 0;

    // vIndex: 8
    virtual bool isDeferredShadingAvailable() const = 0;

    // vIndex: 9
    virtual bool supportsVibrantVisualsPackStack() const = 0;

    // vIndex: 10
    virtual ::dragon::rendering::LightingModels getLightingModel() const = 0;

    // vIndex: 11
    virtual void setLightingModel(::dragon::rendering::LightingModels const) = 0;

    // vIndex: 0
    virtual ~IAdvancedGraphicsOptions() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
