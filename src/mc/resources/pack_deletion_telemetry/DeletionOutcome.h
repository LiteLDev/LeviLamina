#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PackDeletionTelemetry {

struct DeletionOutcome {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkb5c889;
    ::ll::UntypedStorage<8, 16> mUnk35c69e;
    ::ll::UntypedStorage<8, 16> mUnk10d447;
    // NOLINTEND

public:
    // prevent constructor by default
    DeletionOutcome& operator=(DeletionOutcome const&);
    DeletionOutcome(DeletionOutcome const&);
    DeletionOutcome();
};

} // namespace PackDeletionTelemetry
