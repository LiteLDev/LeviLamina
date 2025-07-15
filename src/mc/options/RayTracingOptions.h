#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/external/render_dragon/rendering/LightingModels.h"
#include "mc/options/IAdvancedGraphicsOptions.h"
#include "mc/resources/ResourcePackListener.h"

// auto generated forward declare list
// clang-format off
class PackCapability;
class ResourcePackManager;
// clang-format on

class RayTracingOptions : public ::ResourcePackListener, public ::IAdvancedGraphicsOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkaa0968;
    ::ll::UntypedStorage<1, 1>  mUnk247eaa;
    ::ll::UntypedStorage<1, 1>  mUnk8ff52e;
    ::ll::UntypedStorage<1, 1>  mUnk654568;
    ::ll::UntypedStorage<1, 1>  mUnkca02cf;
    ::ll::UntypedStorage<1, 1>  mUnk5fcbcc;
    ::ll::UntypedStorage<1, 1>  mUnkec775d;
    ::ll::UntypedStorage<4, 4>  mUnk18bb5b;
    ::ll::UntypedStorage<8, 24> mUnke3b45f;
    // NOLINTEND

public:
    // prevent constructor by default
    RayTracingOptions& operator=(RayTracingOptions const&);
    RayTracingOptions(RayTracingOptions const&);
    RayTracingOptions();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RayTracingOptions() /*override*/ = default;

    // vIndex: 1
    virtual void onActiveResourcePacksChanged(::ResourcePackManager&) /*override*/;

    // vIndex: 1
    virtual bool isHardwareRayTracingCompatible() const /*override*/;

    // vIndex: 2
    virtual bool isHardwareDeferredCompatible() const /*override*/;

    // vIndex: 5
    virtual bool areRayTracingResourcesAvailable() const /*override*/;

    // vIndex: 6
    virtual bool isDeferredLightingModelAvailable() const /*override*/;

    // vIndex: 3
    virtual bool isPlatformCompatible() const /*override*/;

    // vIndex: 11
    virtual bool isPlatformDeferredPerformanceCompatible() const /*override*/;

    // vIndex: 7
    virtual bool isRayTracingAvailable() const /*override*/;

    // vIndex: 8
    virtual bool areDeferredShadingAndResourcesAvailable() const /*override*/;

    // vIndex: 9
    virtual bool isVibrantVisualsAllowed() const /*override*/;

    // vIndex: 10
    virtual void setForceDisableVibrantVisuals(bool) /*override*/;

    // vIndex: 12
    virtual bool canSwitchGraphicsModeInGame() const /*override*/;

    // vIndex: 4
    virtual bool isUpscalingAvailable() const /*override*/;

    // vIndex: 13
    virtual ::dragon::rendering::LightingModels getLightingModel() const /*override*/;

    // vIndex: 14
    virtual void setLightingModel(::dragon::rendering::LightingModels const) /*override*/;

    // vIndex: 15
    virtual void setCanSwitchGraphicsModeInGame(bool) /*override*/;
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
    MCNAPI static ::std::string_view const& RAY_TRACING_TAG();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
