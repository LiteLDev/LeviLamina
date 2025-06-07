#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CameraDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk3f4663;
    ::ll::UntypedStorage<4, 4> mUnk9abc63;
    ::ll::UntypedStorage<4, 4> mUnk8f91e5;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraDefinition& operator=(CameraDefinition const&);
    CameraDefinition(CameraDefinition const&);
    CameraDefinition();
};
