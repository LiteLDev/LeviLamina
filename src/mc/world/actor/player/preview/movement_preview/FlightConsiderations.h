#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MovementPreview {

struct FlightConsiderations {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk2eab2f;
    ::ll::UntypedStorage<1, 1> mUnkf380d8;
    ::ll::UntypedStorage<1, 1> mUnk4f61f9;
    ::ll::UntypedStorage<1, 1> mUnk775423;
    ::ll::UntypedStorage<1, 1> mUnk55b6c1;
    // NOLINTEND

public:
    // prevent constructor by default
    FlightConsiderations& operator=(FlightConsiderations const&);
    FlightConsiderations(FlightConsiderations const&);
    FlightConsiderations();
};

} // namespace MovementPreview
