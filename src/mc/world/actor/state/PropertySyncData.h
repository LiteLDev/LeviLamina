#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PropertySyncData {
public:
    struct PropertySyncIntEntry {
        uint mPropertyIndex;
        int  mData;
    };

    struct PropertySyncFloatEntry {
        uint  mPropertyIndex;
        float mData;
    };

    std::vector<PropertySyncData::PropertySyncIntEntry>   mIntEntries;
    std::vector<PropertySyncData::PropertySyncFloatEntry> mFloatEntries;

    // prevent constructor by default
    PropertySyncData& operator=(PropertySyncData const&);
    PropertySyncData(PropertySyncData const&);
    PropertySyncData();

public:
    // NOLINTBEGIN
    // symbol: ??4PropertySyncData@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct PropertySyncData& operator=(struct PropertySyncData&&);

    // symbol: ??1PropertySyncData@@QEAA@XZ
    MCAPI ~PropertySyncData();

    // NOLINTEND
};
