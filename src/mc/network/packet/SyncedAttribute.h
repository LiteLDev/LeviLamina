#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SyncedAttribute {

public:
    // prevent constructor by default
    SyncedAttribute& operator=(SyncedAttribute const&) = delete;
    SyncedAttribute(SyncedAttribute const&)            = delete;
    SyncedAttribute()                                  = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??1SyncedAttribute\@\@QEAA\@XZ
     */
    MCAPI ~SyncedAttribute();
    // NOLINTEND
};
