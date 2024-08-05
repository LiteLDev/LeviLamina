#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MountTamingEvent {
public:
    // prevent constructor by default
    MountTamingEvent& operator=(MountTamingEvent const&);
    MountTamingEvent(MountTamingEvent const&);
    MountTamingEvent();

public:
    // NOLINTBEGIN
    MCAPI ~MountTamingEvent();

    // NOLINTEND
};
