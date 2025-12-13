#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

class IAdvancedGraphicsHardwareOptions : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~IAdvancedGraphicsHardwareOptions() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~IAdvancedGraphicsHardwareOptions() /*override*/;
#endif

    virtual bool isHardwareRayTracingCompatible() const = 0;

    virtual bool isHardwareDeferredCompatible() const = 0;

    virtual bool isPlatformCompatible() const = 0;

    virtual bool isUpscalingAvailable() const = 0;
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
