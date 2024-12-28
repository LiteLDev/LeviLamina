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
    // vIndex: 1
    virtual bool isHardwareRayTracingCompatible() const /*override*/;

    // vIndex: 2
    virtual bool isHardwareDeferredCompatible() const /*override*/;

    // vIndex: 3
    virtual bool isPlatformCompatible() const /*override*/;

    // vIndex: 4
    virtual bool isUpscalingAvailable() const /*override*/;

    // vIndex: 0
    virtual ~RayTracingHardwareOptions() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isHardwareRayTracingCompatible() const;

    MCAPI bool $isHardwareDeferredCompatible() const;

    MCAPI bool $isPlatformCompatible() const;

    MCAPI bool $isUpscalingAvailable() const;
    // NOLINTEND
};
