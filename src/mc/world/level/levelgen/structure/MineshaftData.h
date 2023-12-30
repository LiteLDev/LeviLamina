#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MineshaftData {
public:
    // prevent constructor by default
    MineshaftData& operator=(MineshaftData const&);
    MineshaftData(MineshaftData const&);
    MineshaftData();

public:
    // NOLINTBEGIN
    // symbol: ??0MineshaftData@@QEAA@_N@Z
    MCAPI explicit MineshaftData(bool surface);

    // NOLINTEND
};
