#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CameraAvoidanceDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk975bc9;
    ::ll::UntypedStorage<8, 24> mUnk8686dc;
    ::ll::UntypedStorage<4, 4>  mUnka70d72;
    ::ll::UntypedStorage<4, 4>  mUnk28f363;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAvoidanceDefinition& operator=(CameraAvoidanceDefinition const&);
    CameraAvoidanceDefinition(CameraAvoidanceDefinition const&);
    CameraAvoidanceDefinition();
};
