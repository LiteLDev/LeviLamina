#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SyncedAttribute {
public:
    std::string mName;         // this+0x0
    float       mMinValue;     // this+0x20
    float       mCurrentValue; // this+0x24
    float       mMaxValue;     // this+0x28

    // prevent constructor by default
    SyncedAttribute& operator=(SyncedAttribute const&);
    SyncedAttribute(SyncedAttribute const&);
    SyncedAttribute();

public:
    // NOLINTBEGIN
    // symbol: ??1SyncedAttribute@@QEAA@XZ
    MCAPI ~SyncedAttribute();

    // NOLINTEND
};
