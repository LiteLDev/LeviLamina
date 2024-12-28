#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ovrMessage;
// clang-format on

class OVRPlatformMessageHandler {
public:
    // prevent constructor by default
    OVRPlatformMessageHandler& operator=(OVRPlatformMessageHandler const&);
    OVRPlatformMessageHandler(OVRPlatformMessageHandler const&);
    OVRPlatformMessageHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OVRPlatformMessageHandler();

    // vIndex: 1
    virtual bool handleMessage(::ovrMessage&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
