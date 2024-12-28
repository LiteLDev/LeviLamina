#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CameraAimAssistCachedPositionDataComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkcd8047;
    ::ll::UntypedStorage<4, 12> mUnka61ca8;
    ::ll::UntypedStorage<1, 1>  mUnkbec142;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAimAssistCachedPositionDataComponent& operator=(CameraAimAssistCachedPositionDataComponent const&);
    CameraAimAssistCachedPositionDataComponent(CameraAimAssistCachedPositionDataComponent const&);
    CameraAimAssistCachedPositionDataComponent();
};
