#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SyncedAttribute {
public:
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
