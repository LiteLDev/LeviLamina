#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EmotePlayedTelemetryDataComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mEmoteProductId;
    ::ll::TypedStorage<4, 4, int> mEmoteSlotNumber;
    // NOLINTEND

};
