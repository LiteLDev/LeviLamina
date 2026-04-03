#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/external/render_dragon/rendering/LightingModels.h"
#include "mc/options/GraphicsMode.h"
#include "mc/options/IAdvancedGraphicsHardwareOptions.h"

// auto generated forward declare list
// clang-format off
class PackCapability;
// clang-format on

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
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::PackCapability
    getPackCapability(::Bedrock::NonOwnerPointer<::IAdvancedGraphicsOptions> advancedGraphicsOptions);

    MCNAPI static ::PackCapability
    getPackDeferredCapability(::Bedrock::NonOwnerPointer<::IAdvancedGraphicsOptions> advancedGraphicsOptions);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& PBR_TAG();

    MCNAPI static ::std::string_view const& RAY_TRACING_TAG();
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
