#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CameraAimAssistComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>  mUnkaa3503;
    ::ll::UntypedStorage<4, 4>  mUnk312961;
    ::ll::UntypedStorage<1, 1>  mUnk5398f3;
    ::ll::UntypedStorage<8, 48> mUnka59c85;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAimAssistComponent& operator=(CameraAimAssistComponent const&);
    CameraAimAssistComponent(CameraAimAssistComponent const&);
    CameraAimAssistComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::CameraAimAssistComponent& operator=(::CameraAimAssistComponent&&);

    MCAPI ~CameraAimAssistComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
