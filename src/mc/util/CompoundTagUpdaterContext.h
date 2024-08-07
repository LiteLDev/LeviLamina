#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/CompoundTagUpdaterResult.h"

class CompoundTagUpdaterContext {
public:
    // prevent constructor by default
    CompoundTagUpdaterContext& operator=(CompoundTagUpdaterContext const&);
    CompoundTagUpdaterContext(CompoundTagUpdaterContext const&);

public:
    // NOLINTBEGIN
    MCAPI CompoundTagUpdaterContext();

    MCAPI class CompoundTagUpdaterNodeBuilder addUpdater(uchar major, uchar minor, uchar patch);

    MCAPI ::CompoundTagUpdaterResult update(class CompoundTag& tag, uint version) const;

    // NOLINTEND
};
