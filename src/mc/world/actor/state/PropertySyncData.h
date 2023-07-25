#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PropertySyncData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PROPERTYSYNCDATA
public:
    PropertySyncData& operator=(PropertySyncData const&) = delete;
    PropertySyncData(PropertySyncData const&)            = delete;
    PropertySyncData()                                   = delete;
#endif

public:
    /**
     * @symbol ??4PropertySyncData\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct PropertySyncData& operator=(struct PropertySyncData&&);
    /**
     * @symbol ??1PropertySyncData\@\@QEAA\@XZ
     */
    MCAPI ~PropertySyncData();
};
