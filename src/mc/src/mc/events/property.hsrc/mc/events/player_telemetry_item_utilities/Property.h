#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events::PlayerTelemetryItemUtilities {

struct Property {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk595bb6;
    ::ll::UntypedStorage<8, 32> mUnk192e12;
    ::ll::UntypedStorage<1, 1>  mUnk203ad8;
    // NOLINTEND

public:
    // prevent constructor by default
    Property& operator=(Property const&);
    Property(Property const&);
    Property();
};

} // namespace Social::Events::PlayerTelemetryItemUtilities
