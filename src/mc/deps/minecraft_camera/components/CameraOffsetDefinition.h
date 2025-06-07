#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CameraOffsetDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>  mUnk56b242;
    ::ll::UntypedStorage<4, 12> mUnk6a2adc;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraOffsetDefinition& operator=(CameraOffsetDefinition const&);
    CameraOffsetDefinition(CameraOffsetDefinition const&);
    CameraOffsetDefinition();
};
