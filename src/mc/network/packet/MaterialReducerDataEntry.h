#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/packet/MaterialReducerEntryOutput.h"


struct MaterialReducerDataEntry {
public:
    int                                     fromItemKey;        // this+0x0
    std::vector<MaterialReducerEntryOutput> toItemIdsAndCounts; // this+0x8

    // prevent constructor by default
    MaterialReducerDataEntry& operator=(MaterialReducerDataEntry const&);
    MaterialReducerDataEntry(MaterialReducerDataEntry const&);
    MaterialReducerDataEntry();

public:
    // NOLINTBEGIN
    // symbol: ??1MaterialReducerDataEntry@@QEAA@XZ
    MCAPI ~MaterialReducerDataEntry();

    // NOLINTEND
};
