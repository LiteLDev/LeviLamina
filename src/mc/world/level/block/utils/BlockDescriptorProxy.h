#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockDescriptorSerializer {

struct BlockDescriptorProxy {
public:
    // prevent constructor by default
    BlockDescriptorProxy& operator=(BlockDescriptorProxy const&);
    BlockDescriptorProxy(BlockDescriptorProxy const&);
    BlockDescriptorProxy();

public:
    // NOLINTBEGIN
    // symbol: ??1BlockDescriptorProxy@BlockDescriptorSerializer@@QEAA@XZ
    MCAPI ~BlockDescriptorProxy();

    // symbol: ?bindType@BlockDescriptorProxy@BlockDescriptorSerializer@@SAXXZ
    MCAPI static void bindType();

    // NOLINTEND
};

}; // namespace BlockDescriptorSerializer
