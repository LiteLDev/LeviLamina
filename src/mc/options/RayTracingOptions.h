#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/external/render_dragon/rendering/LightingModels.h"
#include "mc/options/GraphicsMode.h"
#include "mc/options/IAdvancedGraphicsOptions.h"
#include "mc/resources/ResourcePackListener.h"

// auto generated forward declare list
// clang-format off
class IAdvancedGraphicsHardwareOptions;
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
#ifdef LL_PLAT_C
    ::ll::UntypedStorage<4, 8> mUnk28cd45;
    ::ll::UntypedStorage<1, 1> mUnk4146b3;
    ::ll::UntypedStorage<1, 1> mUnk19000d;
#endif
    ::ll::UntypedStorage<4, 4>  mUnk18bb5b;
    ::ll::UntypedStorage<8, 24> mUnke3b45f;
    // NOLINTEND

public:
    // prevent constructor by default
    RayTracingOptions();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~RayTracingOptions() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~RayTracingOptions() /*override*/;
#endif

    virtual void unregisterResourcePackListener() /*override*/;

    virtual void onActiveResourcePacksChanged(::ResourcePackManager& resourcePackManager) /*override*/;

    virtual bool isHardwareRayTracingCompatible() const /*override*/;

    virtual bool isHardwareDeferredCompatible() const /*override*/;

    virtual bool areRayTracingResourcesAvailable() const /*override*/;

    virtual bool isDeferredLightingModelAvailable() const /*override*/;

    virtual bool isPlatformCompatible() const /*override*/;

    virtual bool isPlatformDeferredPerformanceCompatible() const /*override*/;

    virtual bool isRayTracingAvailable() const /*override*/;

    virtual bool areDeferredShadingAndResourcesAvailable() const /*override*/;

    virtual bool isVibrantVisualsAllowed() const /*override*/;

    virtual void setForceDisableVibrantVisuals(bool value) /*override*/;

    virtual bool canSwitchGraphicsModeInGame() const /*override*/;

    virtual bool requiresPBRResources() const /*override*/;

    virtual bool isUpscalingAvailable() const /*override*/;

    virtual ::dragon::rendering::LightingModels getLightingModel() const /*override*/;

    virtual void setLightingModel(::dragon::rendering::LightingModels const model) /*override*/;

#ifdef LL_PLAT_S
    virtual void setCanSwitchGraphicsModeInGame(bool canRuntimeSwitch) /*override*/;
#else // LL_PLAT_C
    virtual void setCanSwitchGraphicsModeInGame(bool canRuntimeSwitch) /*override*/;

    virtual ::GraphicsMode getDefaultGraphicsMode() const /*override*/;

    virtual ::dragon::rendering::LightingModels toggleLightingModel() /*override*/;

    virtual ::GraphicsMode getPrevVanillaGraphicsMode() const /*override*/;

    virtual void setGraphicsMode(::GraphicsMode const graphicsMode) /*override*/;

    virtual bool isPrevAdvancedGraphicsMode() const /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C RayTracingOptions(
        ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsHardwareOptions> advancedGraphicsHardwareOptions,
        ::Bedrock::NotNullNonOwnerPtr<::ResourcePackManager>              resourcePackManager
    );
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
    MCNAPI_C static ::std::string_view const& PBR_TAG();

    MCNAPI static ::std::string_view const& RAY_TRACING_TAG();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsHardwareOptions> advancedGraphicsHardwareOptions,
        ::Bedrock::NotNullNonOwnerPtr<::ResourcePackManager>              resourcePackManager
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $unregisterResourcePackListener();

    MCNAPI void $onActiveResourcePacksChanged(::ResourcePackManager& resourcePackManager);

    MCNAPI bool $isHardwareRayTracingCompatible() const;

    MCNAPI bool $isHardwareDeferredCompatible() const;

    MCNAPI bool $areRayTracingResourcesAvailable() const;

    MCNAPI bool $isDeferredLightingModelAvailable() const;

    MCNAPI bool $isPlatformCompatible() const;

    MCNAPI bool $isPlatformDeferredPerformanceCompatible() const;

    MCNAPI bool $isRayTracingAvailable() const;

    MCNAPI bool $areDeferredShadingAndResourcesAvailable() const;

    MCNAPI bool $isVibrantVisualsAllowed() const;

    MCNAPI void $setForceDisableVibrantVisuals(bool value);

    MCNAPI bool $canSwitchGraphicsModeInGame() const;

    MCNAPI bool $requiresPBRResources() const;

    MCNAPI bool $isUpscalingAvailable() const;

    MCNAPI ::dragon::rendering::LightingModels $getLightingModel() const;

    MCNAPI void $setLightingModel(::dragon::rendering::LightingModels const model);

    MCNAPI void $setCanSwitchGraphicsModeInGame(bool canRuntimeSwitch);

    MCNAPI ::GraphicsMode $getDefaultGraphicsMode() const;

    MCNAPI ::dragon::rendering::LightingModels $toggleLightingModel();

    MCNAPI ::GraphicsMode $getPrevVanillaGraphicsMode() const;

    MCNAPI void $setGraphicsMode(::GraphicsMode const graphicsMode);

    MCNAPI bool $isPrevAdvancedGraphicsMode() const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIAdvancedGraphicsOptions();

    MCNAPI static void** $vftableForResourcePackListener();
    // NOLINTEND
};
