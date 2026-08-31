#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CameraShakeTypeQueue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk8ec96c;
    ::ll::UntypedStorage<4, 4>  mUnk383b16;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraShakeTypeQueue& operator=(CameraShakeTypeQueue const&);
    CameraShakeTypeQueue(CameraShakeTypeQueue const&);
    CameraShakeTypeQueue();
};
