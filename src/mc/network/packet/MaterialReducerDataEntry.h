#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/packet/MaterialReducerEntryOutput.h"


struct MaterialReducerDataEntry {
public:
    int                                     mFromItemKey;        // this+0x0
    std::vector<MaterialReducerEntryOutput> mToItemIdsAndCounts; // this+0x8

    // prevent constructor by default
    MaterialReducerDataEntry& operator=(MaterialReducerDataEntry const&);
    MaterialReducerDataEntry(MaterialReducerDataEntry const&);
    MaterialReducerDataEntry();

public:
    // NOLINTBEGIN
    MCAPI ~MaterialReducerDataEntry();

    // NOLINTEND
};
