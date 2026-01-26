#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

struct WorldRecoveryTelemetryEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3ca16b;
    ::ll::UntypedStorage<8, 32> mUnk2f4768;
    ::ll::UntypedStorage<8, 32> mUnk5fb8ce;
    ::ll::UntypedStorage<4, 4>  mUnk43932e;
    ::ll::UntypedStorage<4, 4>  mUnk9f41be;
    ::ll::UntypedStorage<4, 4>  mUnk5ab5e0;
    ::ll::UntypedStorage<8, 8>  mUnk2fa277;
    ::ll::UntypedStorage<8, 8>  mUnk6a9fdf;
    ::ll::UntypedStorage<8, 8>  mUnk7521ca;
    ::ll::UntypedStorage<1, 1>  mUnke1636c;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldRecoveryTelemetryEvent& operator=(WorldRecoveryTelemetryEvent const&);
    WorldRecoveryTelemetryEvent(WorldRecoveryTelemetryEvent const&);
    WorldRecoveryTelemetryEvent();

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace Bedrock
