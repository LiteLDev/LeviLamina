#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OculusPlatformMessagePump {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk964658;
    ::ll::UntypedStorage<1, 1>  mUnk6a455a;
    // NOLINTEND

public:
    // prevent constructor by default
    OculusPlatformMessagePump& operator=(OculusPlatformMessagePump const&);
    OculusPlatformMessagePump(OculusPlatformMessagePump const&);
    OculusPlatformMessagePump();

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& mOculusAppId();
    // NOLINTEND
};
