#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Identity {

struct EduDSTelemetryIdentifier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke7ad31;
    ::ll::UntypedStorage<8, 32> mUnkf1c17b;
    // NOLINTEND

public:
    // prevent constructor by default
    EduDSTelemetryIdentifier& operator=(EduDSTelemetryIdentifier const&);
    EduDSTelemetryIdentifier(EduDSTelemetryIdentifier const&);
    EduDSTelemetryIdentifier();
};

} // namespace Identity
