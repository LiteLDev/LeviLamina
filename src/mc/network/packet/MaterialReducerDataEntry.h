#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MaterialReducerDataEntry {
public:
    // prevent constructor by default
    MaterialReducerDataEntry& operator=(MaterialReducerDataEntry const&);
    MaterialReducerDataEntry(MaterialReducerDataEntry const&);
    MaterialReducerDataEntry();

public:
    // NOLINTBEGIN
    MCAPI ~MaterialReducerDataEntry();

    // NOLINTEND
};
