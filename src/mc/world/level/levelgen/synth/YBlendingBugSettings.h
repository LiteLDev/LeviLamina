#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct YBlendingBugSettings {
public:
    bool  emulateBug;                   // this+0x0
    bool  extraBlendAtOldWorldgenStart; // this+0x1
    float oldWorldgenStartYInputPos;    // this+0x4
    bool  alwaysUseYZeroFor2DBlending;  // this+0x8
};
