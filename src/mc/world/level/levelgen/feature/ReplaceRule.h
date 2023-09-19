#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ReplaceRule {
public:
    // prevent constructor by default
    ReplaceRule& operator=(ReplaceRule const&);
    ReplaceRule(ReplaceRule const&);
    ReplaceRule();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0ReplaceRule@@QEAA@VBlockDescriptor@@V?$vector@VBlockDescriptor@@V?$allocator@VBlockDescriptor@@@std@@@std@@@Z
    MCAPI ReplaceRule(class BlockDescriptor, std::vector<class BlockDescriptor>);

    // symbol: ??1ReplaceRule@@QEAA@XZ
    MCAPI ~ReplaceRule();

    // NOLINTEND
};
