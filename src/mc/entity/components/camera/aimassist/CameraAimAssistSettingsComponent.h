#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CameraAimAssistSettingsComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>  mUnk90cec8;
    ::ll::UntypedStorage<4, 4>  mUnk4488c3;
    ::ll::UntypedStorage<1, 1>  mUnk7e01fd;
    ::ll::UntypedStorage<8, 48> mUnkd7eff5;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAimAssistSettingsComponent& operator=(CameraAimAssistSettingsComponent const&);
    CameraAimAssistSettingsComponent(CameraAimAssistSettingsComponent const&);
    CameraAimAssistSettingsComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::CameraAimAssistSettingsComponent& operator=(::CameraAimAssistSettingsComponent&&);

    MCAPI ~CameraAimAssistSettingsComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
