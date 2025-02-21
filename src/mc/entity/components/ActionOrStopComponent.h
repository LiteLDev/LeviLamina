#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActionOrStopComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>  mActionOrStopThisFrame;
    ::ll::TypedStorage<4, 4, float> mActionOrStopGazeLock;
    // NOLINTEND
};
