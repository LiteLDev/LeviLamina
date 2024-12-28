#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CameraAttachComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkc6216a;
    ::ll::UntypedStorage<8, 48> mUnk507116;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAttachComponent& operator=(CameraAttachComponent const&);
    CameraAttachComponent(CameraAttachComponent const&);
    CameraAttachComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~CameraAttachComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
