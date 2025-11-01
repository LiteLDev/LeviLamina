#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events {

class TelemetryHeartbeat {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3af22c;
    ::ll::UntypedStorage<8, 8>  mUnke888c1;
    ::ll::UntypedStorage<8, 8>  mUnkcfacbe;
    ::ll::UntypedStorage<8, 8>  mUnka0f533;
    ::ll::UntypedStorage<8, 8>  mUnkca21a1;
    ::ll::UntypedStorage<8, 8>  mUnk34bdf6;
    ::ll::UntypedStorage<1, 1>  mUnk1411e0;
    ::ll::UntypedStorage<8, 8>  mUnk156261;
    ::ll::UntypedStorage<8, 64> mUnk8a4a2b;
    // NOLINTEND

public:
    // prevent constructor by default
    TelemetryHeartbeat& operator=(TelemetryHeartbeat const&);
    TelemetryHeartbeat(TelemetryHeartbeat const&);
    TelemetryHeartbeat();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void beat();
    // NOLINTEND
};

} // namespace Social::Events
