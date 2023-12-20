#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Puv::v1_20_50::BlockDescriptorSerializer {

struct BlockDescriptorProxy {
public:
    // prevent constructor by default
    BlockDescriptorProxy& operator=(BlockDescriptorProxy const&);
    BlockDescriptorProxy();

public:
    // NOLINTBEGIN
    // symbol: ??0BlockDescriptorProxy@BlockDescriptorSerializer@v1_20_50@Puv@@QEAA@AEBU0123@@Z
    MCAPI BlockDescriptorProxy(struct Puv::v1_20_50::BlockDescriptorSerializer::BlockDescriptorProxy const&);

    // symbol: ??1BlockDescriptorProxy@BlockDescriptorSerializer@v1_20_50@Puv@@QEAA@XZ
    MCAPI ~BlockDescriptorProxy();

    // NOLINTEND
};

}; // namespace Puv::v1_20_50::BlockDescriptorSerializer
