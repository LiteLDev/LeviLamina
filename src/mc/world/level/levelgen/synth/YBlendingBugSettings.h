#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct YBlendingBugSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>  emulateBug;
    ::ll::TypedStorage<1, 1, bool>  extraBlendAtOldWorldgenStart;
    ::ll::TypedStorage<4, 4, float> oldWorldgenStartYInputPos;
    ::ll::TypedStorage<1, 1, bool>  alwaysUseYZeroFor2DBlending;
    // NOLINTEND

public:
    // prevent constructor by default
    YBlendingBugSettings& operator=(YBlendingBugSettings const&);
    YBlendingBugSettings(YBlendingBugSettings const&);
    YBlendingBugSettings();
};
