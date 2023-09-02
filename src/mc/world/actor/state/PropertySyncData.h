#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PropertySyncData {
public:
    struct PropertySyncIntEntry {
        uint32_t mPropertyIndex;
        int32_t          mData;
    };

    struct PropertySyncFloatEntry {
        uint32_t mPropertyIndex;
        float        mData;
    };

    std::vector<PropertySyncData::PropertySyncIntEntry>   mIntEntries;
    std::vector<PropertySyncData::PropertySyncFloatEntry> mFloatEntries;

    // prevent constructor by default
    PropertySyncData& operator=(PropertySyncData const&) = delete;
    PropertySyncData(PropertySyncData const&)            = delete;
    PropertySyncData()                                   = delete;

public:
    // NOLINTBEGIN
    // symbol: ??4PropertySyncData@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct PropertySyncData& operator=(struct PropertySyncData&&);

    // symbol: ??1PropertySyncData@@QEAA@XZ
    MCAPI ~PropertySyncData();

    // NOLINTEND
};
