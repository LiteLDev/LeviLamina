#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/block/BlockDescriptor.h"

struct ReplaceRule {
public:
    BlockDescriptor              mBlock;
    std::vector<BlockDescriptor> mMayReplace;

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
