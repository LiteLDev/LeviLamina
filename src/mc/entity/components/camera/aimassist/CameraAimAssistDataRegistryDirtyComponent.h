#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CameraAimAssistDataRegistryDirtyComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk71ba4a;
    ::ll::UntypedStorage<8, 64> mUnkbb8a7f;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAimAssistDataRegistryDirtyComponent& operator=(CameraAimAssistDataRegistryDirtyComponent const&);
    CameraAimAssistDataRegistryDirtyComponent(CameraAimAssistDataRegistryDirtyComponent const&);
    CameraAimAssistDataRegistryDirtyComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::CameraAimAssistDataRegistryDirtyComponent& operator=(::CameraAimAssistDataRegistryDirtyComponent&&);
    // NOLINTEND
};
