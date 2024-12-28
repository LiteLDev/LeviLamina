#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CameraAimAssistRequestComponent {
public:
    // CameraAimAssistRequestComponent inner types define
    enum class Instruction : uchar {
        Clear = 0,
        Set   = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkee2efc;
    ::ll::UntypedStorage<4, 8>  mUnke8c0e2;
    ::ll::UntypedStorage<4, 4>  mUnk18db55;
    ::ll::UntypedStorage<1, 1>  mUnk4e60ac;
    ::ll::UntypedStorage<8, 48> mUnk7dbd96;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAimAssistRequestComponent& operator=(CameraAimAssistRequestComponent const&);
    CameraAimAssistRequestComponent(CameraAimAssistRequestComponent const&);
    CameraAimAssistRequestComponent();
};
