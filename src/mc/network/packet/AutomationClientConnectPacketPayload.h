#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AutomationClientConnectPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkde4774;
    // NOLINTEND

public:
    // prevent constructor by default
    AutomationClientConnectPacketPayload& operator=(AutomationClientConnectPacketPayload const&);
    AutomationClientConnectPacketPayload(AutomationClientConnectPacketPayload const&);
    AutomationClientConnectPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::AutomationClientConnectPacketPayload& operator=(::AutomationClientConnectPacketPayload&&);

    MCNAPI ~AutomationClientConnectPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
