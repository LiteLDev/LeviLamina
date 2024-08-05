#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockLegacyPtr {
public:
    // prevent constructor by default
    BlockLegacyPtr& operator=(BlockLegacyPtr const&);
    BlockLegacyPtr(BlockLegacyPtr const&);
    BlockLegacyPtr();

public:
    // NOLINTBEGIN
    MCAPI std::string toString() const;

    // NOLINTEND
};
