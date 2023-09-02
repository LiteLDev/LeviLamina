#pragma once

#include "MaterialReducerEntryOutput.h"
#include "mc/_HeaderOutputPredefine.h"


struct MaterialReducerDataEntry {
public:
    int32_t                                     fromItemKey;        // this+0x0
    std::vector<MaterialReducerEntryOutput> toItemIdsAndCounts; // this+0x8

    // prevent constructor by default
    MaterialReducerDataEntry& operator=(MaterialReducerDataEntry const&) = delete;
    MaterialReducerDataEntry(MaterialReducerDataEntry const&)            = delete;
    MaterialReducerDataEntry()                                           = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1MaterialReducerDataEntry@@QEAA@XZ
    MCAPI ~MaterialReducerDataEntry();

    // NOLINTEND
};
