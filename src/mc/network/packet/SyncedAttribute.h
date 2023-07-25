#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SyncedAttribute {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SYNCEDATTRIBUTE
public:
    SyncedAttribute& operator=(SyncedAttribute const&) = delete;
    SyncedAttribute(SyncedAttribute const&)            = delete;
    SyncedAttribute()                                  = delete;
#endif

public:
    /**
     * @symbol ??1SyncedAttribute\@\@QEAA\@XZ
     */
    MCAPI ~SyncedAttribute();
};
