#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RequestTelemetry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnk1a1b76;
    ::ll::UntypedStorage<8, 8> mUnk7fd7e0;
    ::ll::UntypedStorage<8, 8> mUnk7b3672;
    // NOLINTEND

public:
    // prevent constructor by default
    RequestTelemetry& operator=(RequestTelemetry const&);
    RequestTelemetry(RequestTelemetry const&);
    RequestTelemetry();

};
