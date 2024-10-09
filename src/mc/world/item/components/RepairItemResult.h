#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RepairItemResult {
public:
    // prevent constructor by default
    RepairItemResult& operator=(RepairItemResult const&);
    RepairItemResult(RepairItemResult const&);
    RepairItemResult();

public:
    // NOLINTBEGIN
    MCAPI ~RepairItemResult();

    // NOLINTEND
};
