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
    // symbol: ??0CompoundTagUpdaterContext@@QEAA@XZ
    MCAPI CompoundTagUpdaterContext();

    // symbol: ?addUpdater@CompoundTagUpdaterContext@@QEAA?AVCompoundTagUpdaterNodeBuilder@@EEE@Z
    MCAPI class CompoundTagUpdaterNodeBuilder addUpdater(uchar major, uchar minor, uchar patch);

    // symbol: ?update@CompoundTagUpdaterContext@@QEBA?AW4CompoundTagUpdaterResult@@AEAVCompoundTag@@I@Z
    MCAPI ::CompoundTagUpdaterResult update(class CompoundTag& tag, uint version) const;

    // NOLINTEND
};
