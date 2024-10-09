#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OculusPlatformMessagePump {
public:
    // prevent constructor by default
    OculusPlatformMessagePump& operator=(OculusPlatformMessagePump const&);
    OculusPlatformMessagePump(OculusPlatformMessagePump const&);
    OculusPlatformMessagePump();

public:
    // NOLINTBEGIN
    MCAPI static std::string const mOculusAppId;

    // NOLINTEND
};
