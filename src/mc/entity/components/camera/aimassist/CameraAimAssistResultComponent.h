#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CameraAimAssistResultComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 112> mUnk2f3083;
    ::ll::UntypedStorage<8, 112> mUnka3bc5f;
    ::ll::UntypedStorage<4, 12>  mUnk3c1a27;
    ::ll::UntypedStorage<1, 1>   mUnk553286;
    ::ll::UntypedStorage<1, 1>   mUnkdefeae;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAimAssistResultComponent& operator=(CameraAimAssistResultComponent const&);
    CameraAimAssistResultComponent(CameraAimAssistResultComponent const&);
    CameraAimAssistResultComponent();
};
