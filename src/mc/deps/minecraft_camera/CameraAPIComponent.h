#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CameraAPIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkfbd1c4;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAPIComponent& operator=(CameraAPIComponent const&);
    CameraAPIComponent(CameraAPIComponent const&);
    CameraAPIComponent();
};
