#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/rendering/LightingModels.h"
#include "mc/options/GraphicsMode.h"
#include "mc/options/IAdvancedGraphicsHardwareOptions.h"

class IAdvancedGraphicsOptions : public ::IAdvancedGraphicsHardwareOptions {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void unregisterResourcePackListener() = 0;

    virtual bool areRayTracingResourcesAvailable() const = 0;

    virtual bool isDeferredLightingModelAvailable() const = 0;

    virtual bool isRayTracingAvailable() const = 0;

    virtual bool areDeferredShadingAndResourcesAvailable() const = 0;

    virtual bool isVibrantVisualsAllowed() const = 0;

    virtual void setForceDisableVibrantVisuals(bool) = 0;

    virtual bool isPlatformDeferredPerformanceCompatible() const = 0;

    virtual bool canSwitchGraphicsModeInGame() const = 0;

    virtual bool requiresPBRResources() const = 0;

    virtual ::dragon::rendering::LightingModels getLightingModel() const = 0;

    virtual void setLightingModel(::dragon::rendering::LightingModels const) = 0;

    virtual void setCanSwitchGraphicsModeInGame(bool) = 0;

#ifdef LL_PLAT_S
    virtual ~IAdvancedGraphicsOptions() /*override*/ = default;
#else // LL_PLAT_C
    virtual ::GraphicsMode getDefaultGraphicsMode() const = 0;

    virtual ::dragon::rendering::LightingModels toggleLightingModel() = 0;

    virtual ::GraphicsMode getPrevVanillaGraphicsMode() const = 0;

    virtual void setGraphicsMode(::GraphicsMode const) = 0;

    virtual bool isPrevAdvancedGraphicsMode() const = 0;

    virtual ~IAdvancedGraphicsOptions() /*override*/;
#endif

    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
