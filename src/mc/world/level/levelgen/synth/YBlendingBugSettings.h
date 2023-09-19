#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct YBlendingBugSettings {
public:
    // prevent constructor by default
    YBlendingBugSettings& operator=(YBlendingBugSettings const&);
    YBlendingBugSettings(YBlendingBugSettings const&);
    YBlendingBugSettings();
};
