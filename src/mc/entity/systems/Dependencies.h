#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Dependencies {
public:
    bool                             mBlocking;
    bool                             mUsesEntityFactory;
    std::array<std::vector<uint>, 6> mAccessGroups;

    // prevent constructor by default
    Dependencies& operator=(Dependencies const&);
    Dependencies(Dependencies const&);
    Dependencies();

public:
    // NOLINTBEGIN
    // symbol: ??1Dependencies@@QEAA@XZ
    MCAPI ~Dependencies();

    // NOLINTEND
};
