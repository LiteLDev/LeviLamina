#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Identity {

struct EduDSTelemetryIdentifier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk7ba2db;
    ::ll::UntypedStorage<8, 32> mUnk79da49;
    // NOLINTEND

public:
    // prevent constructor by default
    EduDSTelemetryIdentifier& operator=(EduDSTelemetryIdentifier const&);
    EduDSTelemetryIdentifier(EduDSTelemetryIdentifier const&);
    EduDSTelemetryIdentifier();
};

} // namespace Identity
