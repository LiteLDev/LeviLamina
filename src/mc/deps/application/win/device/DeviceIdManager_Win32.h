#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/device/DeviceIdManager_Common.h"

namespace Bedrock {

class DeviceIdManager_Win32 : public ::Bedrock::DeviceIdManager_Common {
public:
    // prevent constructor by default
    DeviceIdManager_Win32& operator=(DeviceIdManager_Win32 const&);
    DeviceIdManager_Win32(DeviceIdManager_Win32 const&);
    DeviceIdManager_Win32();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 6
    virtual void _initializePlatform(bool const) /*override*/;

    // vIndex: 0
    virtual ~DeviceIdManager_Win32() /*override*/ = default;
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

} // namespace Bedrock
