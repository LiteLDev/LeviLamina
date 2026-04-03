#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/device/DeviceIdManager_Common.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { struct DeviceIDPlatformEnvironment; }
namespace Bedrock { struct DeviceIdEnvironment; }
// clang-format on

namespace Bedrock {

class DeviceIdManager_Win32 : public ::Bedrock::DeviceIdManager_Common {
public:
    // prevent constructor by default
    DeviceIdManager_Win32();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void _initializePlatform(::Bedrock::DeviceIDPlatformEnvironment const& environment) /*override*/;

    virtual ~DeviceIdManager_Win32() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DeviceIdManager_Win32(::Bedrock::DeviceIdEnvironment&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::DeviceIdEnvironment&&);
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
