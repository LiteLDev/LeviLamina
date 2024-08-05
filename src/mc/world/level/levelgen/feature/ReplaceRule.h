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
    MCAPI ReplaceRule(class BlockDescriptor, std::vector<class BlockDescriptor>);

    MCAPI ~ReplaceRule();

    // NOLINTEND
};
