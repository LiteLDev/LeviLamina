#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/IAdvancedGraphicsHardwareOptions.h"

class RayTracingHardwareOptions : public ::IAdvancedGraphicsHardwareOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk5a1163;
    ::ll::UntypedStorage<1, 1> mUnk5b1ec7;
    // NOLINTEND

public:
    // prevent constructor by default
    RayTracingHardwareOptions& operator=(RayTracingHardwareOptions const&);
    RayTracingHardwareOptions(RayTracingHardwareOptions const&);
    RayTracingHardwareOptions();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isHardwareRayTracingCompatible() const /*override*/;

    virtual bool isHardwareDeferredCompatible() const /*override*/;

    virtual bool isPlatformCompatible() const /*override*/;

    virtual bool isUpscalingAvailable() const /*override*/;

    virtual ~RayTracingHardwareOptions() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI bool $isHardwareRayTracingCompatible() const;

    MCNAPI bool $isHardwareDeferredCompatible() const;

    MCNAPI bool $isPlatformCompatible() const;

    MCNAPI bool $isUpscalingAvailable() const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
