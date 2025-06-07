#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CameraTargetSettingsDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk4fb612;
    ::ll::UntypedStorage<1, 1>  mUnk58ede3;
    ::ll::UntypedStorage<4, 4>  mUnkded455;
    ::ll::UntypedStorage<4, 4>  mUnk9439d9;
    ::ll::UntypedStorage<4, 12> mUnk774ea7;
    ::ll::UntypedStorage<4, 12> mUnkf15688;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraTargetSettingsDefinition& operator=(CameraTargetSettingsDefinition const&);
    CameraTargetSettingsDefinition(CameraTargetSettingsDefinition const&);
    CameraTargetSettingsDefinition();
};
