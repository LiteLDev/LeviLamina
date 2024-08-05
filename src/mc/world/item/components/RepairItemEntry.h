#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RepairItemEntry {
public:
    // prevent constructor by default
    RepairItemEntry(RepairItemEntry const&);
    RepairItemEntry();

public:
    // NOLINTBEGIN
    MCAPI struct RepairItemEntry& operator=(struct RepairItemEntry&&);

    MCAPI struct RepairItemEntry& operator=(struct RepairItemEntry const&);

    MCAPI ~RepairItemEntry();

    // NOLINTEND
};
