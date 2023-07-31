#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockDescriptorSerializer {

struct BlockDescriptorProxy {

public:
    // prevent constructor by default
    BlockDescriptorProxy& operator=(BlockDescriptorProxy const&) = delete;
    BlockDescriptorProxy(BlockDescriptorProxy const&)            = delete;
    BlockDescriptorProxy()                                       = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?bindType\@BlockDescriptorProxy\@BlockDescriptorSerializer\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol ??1BlockDescriptorProxy\@BlockDescriptorSerializer\@\@QEAA\@XZ
     */
    MCAPI ~BlockDescriptorProxy();
    // NOLINTEND
};

}; // namespace BlockDescriptorSerializer
