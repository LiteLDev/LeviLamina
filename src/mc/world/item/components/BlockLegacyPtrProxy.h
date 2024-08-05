#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockLegacyPtrProxy {
public:
    // prevent constructor by default
    BlockLegacyPtrProxy& operator=(BlockLegacyPtrProxy const&);
    BlockLegacyPtrProxy(BlockLegacyPtrProxy const&);
    BlockLegacyPtrProxy();

public:
    // NOLINTBEGIN
    MCAPI void setter(std::string const& str);

    MCAPI static void toBlockLegacyPtr(class BlockLegacyPtr& instance, struct BlockLegacyPtrProxy const& proxy);

    MCAPI static std::string toString(struct BlockLegacyPtrProxy const&);

    // NOLINTEND
};
