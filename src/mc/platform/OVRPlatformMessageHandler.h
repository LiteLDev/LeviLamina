#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ovrMessage;
// clang-format on

class OVRPlatformMessageHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OVRPlatformMessageHandler() = default;

    // vIndex: 1
    virtual bool handleMessage(::ovrMessage&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
