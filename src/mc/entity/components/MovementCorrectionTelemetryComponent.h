#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MovementCorrectionTelemetryComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk20700c;
    ::ll::UntypedStorage<8, 24> mUnk83a3ec;
    ::ll::UntypedStorage<4, 4>  mUnk982e44;
    // NOLINTEND

public:
    // prevent constructor by default
    MovementCorrectionTelemetryComponent& operator=(MovementCorrectionTelemetryComponent const&);
    MovementCorrectionTelemetryComponent(MovementCorrectionTelemetryComponent const&);
    MovementCorrectionTelemetryComponent();
};
