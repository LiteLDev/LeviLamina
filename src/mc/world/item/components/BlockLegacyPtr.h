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
    // symbol: ?toString@BlockLegacyPtr@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string toString() const;

    // NOLINTEND
};
