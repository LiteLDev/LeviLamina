#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/device/DeviceIdManager_Common.h"

namespace Bedrock {

class DeviceIdManager_Win32 : public ::Bedrock::DeviceIdManager_Common {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 7
    virtual void _initializePlatform(bool const isAnonymous) /*override*/;

    // vIndex: 0
    virtual ~DeviceIdManager_Win32() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DeviceIdManager_Win32();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_initializePlatform(bool const isAnonymous);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForImplBase();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};

} // namespace Bedrock
