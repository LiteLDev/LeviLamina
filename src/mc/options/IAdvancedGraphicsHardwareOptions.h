#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

class IAdvancedGraphicsHardwareOptions : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IAdvancedGraphicsHardwareOptions() /*override*/ = default;

    // vIndex: 1
    virtual bool isHardwareRayTracingCompatible() const = 0;

    // vIndex: 2
    virtual bool isHardwareDeferredCompatible() const = 0;

    // vIndex: 3
    virtual bool isPlatformCompatible() const = 0;

    // vIndex: 4
    virtual bool isUpscalingAvailable() const = 0;
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
