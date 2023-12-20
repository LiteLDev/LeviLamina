#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ComplexAliasBlockUtils {

struct NewBlockAndSplitState {
public:
    // prevent constructor by default
    NewBlockAndSplitState& operator=(NewBlockAndSplitState const&);
    NewBlockAndSplitState();

public:
    // NOLINTBEGIN
    // symbol: ??0NewBlockAndSplitState@ComplexAliasBlockUtils@@QEAA@AEBU01@@Z
    MCAPI NewBlockAndSplitState(struct ComplexAliasBlockUtils::NewBlockAndSplitState const&);

    // symbol: ??1NewBlockAndSplitState@ComplexAliasBlockUtils@@QEAA@XZ
    MCAPI ~NewBlockAndSplitState();

    // NOLINTEND
};

}; // namespace ComplexAliasBlockUtils
