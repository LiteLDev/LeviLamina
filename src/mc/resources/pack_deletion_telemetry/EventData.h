#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PackDeletionTelemetry {

struct EventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkef6c65;
    ::ll::UntypedStorage<8, 72> mUnk81711b;
    ::ll::UntypedStorage<8, 40> mUnk6a56b4;
    // NOLINTEND

public:
    // prevent constructor by default
    EventData& operator=(EventData const&);
    EventData(EventData const&);
    EventData();
};

} // namespace PackDeletionTelemetry
