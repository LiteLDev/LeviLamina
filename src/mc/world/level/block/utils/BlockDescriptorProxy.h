#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockDescriptorSerializer {

struct BlockDescriptorProxy {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKDESCRIPTORSERIALIZER_BLOCKDESCRIPTORPROXY
public:
    BlockDescriptorProxy& operator=(BlockDescriptorProxy const&) = delete;
    BlockDescriptorProxy(BlockDescriptorProxy const&)            = delete;
    BlockDescriptorProxy()                                       = delete;
#endif

public:
    /**
     * @symbol ??1BlockDescriptorProxy\@BlockDescriptorSerializer\@\@QEAA\@XZ
     */
    MCAPI ~BlockDescriptorProxy();
    /**
     * @symbol ?bindType\@BlockDescriptorProxy\@BlockDescriptorSerializer\@\@SAXXZ
     */
    MCAPI static void bindType();
};

}; // namespace BlockDescriptorSerializer
