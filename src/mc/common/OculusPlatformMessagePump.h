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
    // symbol: ?mOculusAppId@OculusPlatformMessagePump@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const mOculusAppId;

    // NOLINTEND
};
