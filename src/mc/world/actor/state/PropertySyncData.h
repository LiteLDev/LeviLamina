#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PropertySyncData {

public:
    // prevent constructor by default
    PropertySyncData& operator=(PropertySyncData const&) = delete;
    PropertySyncData(PropertySyncData const&)            = delete;
    PropertySyncData()                                   = delete;

public:
    /**
     * @symbol ??4PropertySyncData\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct PropertySyncData& operator=(struct PropertySyncData&&); // NOLINT
    /**
     * @symbol ??1PropertySyncData\@\@QEAA\@XZ
     */
    MCAPI ~PropertySyncData(); // NOLINT
};
