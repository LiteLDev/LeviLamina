#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct YBlendingBugSettings {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_YBLENDINGBUGSETTINGS
public:
    YBlendingBugSettings& operator=(YBlendingBugSettings const&) = delete;
    YBlendingBugSettings(YBlendingBugSettings const&)            = delete;
    YBlendingBugSettings()                                       = delete;
#endif

public:
};
