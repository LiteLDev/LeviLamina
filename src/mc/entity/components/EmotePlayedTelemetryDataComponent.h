#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EmotePlayedTelemetryDataComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk677049;
    ::ll::UntypedStorage<4, 4>  mUnk717dbb;
    // NOLINTEND

public:
    // prevent constructor by default
    EmotePlayedTelemetryDataComponent& operator=(EmotePlayedTelemetryDataComponent const&);
    EmotePlayedTelemetryDataComponent(EmotePlayedTelemetryDataComponent const&);
    EmotePlayedTelemetryDataComponent();
};
