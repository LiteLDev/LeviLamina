#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

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

    // symbol: ?bindType@BlockDescriptorProxy@BlockDescriptorSerializer@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};

}; // namespace BlockDescriptorSerializer
