#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/device/DeviceIdManager_Common.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { struct DeviceIDPlatformEnvironment; }
// clang-format on

namespace Bedrock {

class DeviceIdManager_Win32 : public ::Bedrock::DeviceIdManager_Common {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void _initializePlatform(::Bedrock::DeviceIDPlatformEnvironment const& environment) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_initializePlatform(::Bedrock::DeviceIDPlatformEnvironment const& environment);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForImplBase();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};

} // namespace Bedrock
